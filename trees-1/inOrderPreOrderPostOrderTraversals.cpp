#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
        node* left;
        int data;
        node* right;
        
        node(int d){
            this -> data = d;
            this -> left = NULL;
            this -> right = NULL;
        }
        
        
    
};


node* buildTree(node* root){
    int data;
    cout<<"enter the data for node: "<<endl;
    cin>>data;
    root = new node(data);
    
    if(data == -1){
        return NULL;
    }
    
    cout<<"enter data for left of "<<data<<endl;
    root->left = buildTree(root->left);
    cout<<"enter data for right of "<<data<<endl;
    root->right = buildTree(root->right);
    return root;
    
}

void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        
        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
            
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
        
            if(temp->right){
                q.push(temp->right);
            }
            
        }
        
        
    }
    
}


void inOrder(node* root){
    //base case
    if(root == NULL){
        return;
    }
    
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

void preOrder(node* root){
    //base case
    if(root == NULL){
        return;
    }
    
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(node* root){
    //base case
    if(root == NULL){
        return;
    }
    
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

int main(){
    
    node* root = NULL;
    root = buildTree(root);
    // 1 3 7 -1 -1 11 -1 -1  5 17 -1 -1 -1
    levelOrderTraversal(root);
    
    cout<<"in-order traversal: ";
    inOrder(root);
    cout<<endl;
    cout<<"pre-order traversal: ";
    preOrder(root);
    cout<<endl;
    cout<<"post-order traversal: ";
    postOrder(root);
    cout<<endl;
    
    return 0;
}

























