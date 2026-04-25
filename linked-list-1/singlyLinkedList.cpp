#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    
    node(int data){ //constructor
        this->data = data;
        this->next = NULL;
    }
    
    ~node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"memory is free for node with data "<<value<<endl;
    }
};

void insertAtHead(node* &head, int data){
    // new node created when data is introduced
    node* temp = new node(data);
    temp->next = head;
    head = temp;
    
}

void insertAtTail(node* &tail, int data){
    node* temp = new node(data);
    tail->next = temp;
    tail = tail->next;
}

void insertAtLoc(node* &tail, node* &head, int loc, int data){
    // if you wanna go to nth position, traverse till n-1
    //insert at start
    if (loc == 1){
        insertAtHead(head, data);
        return;
    }
    
    
    
    node* temp = head;
    int count = 1;
    while(count<loc-1){
        temp = temp->next;
        count++;
    }
    
    //insert at tail
    if(temp->next == NULL){
        insertAtTail(tail, data);
        return;
        
    }
    
    //creating a new node for data
    node* nodeToInsert = new node(data);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
    
    
}

void print(node* &head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data;
        temp = temp->next;
        cout<<" ";
    }
    cout<<endl;
}

//deletion o fnodes in a linkedlist
void deleteNode(int position, node* &head){
    if(position == 1){
        node* temp = head;
        head = head->next;
        //free start node memory
        temp->next = NULL;
        delete temp;
    }
    else{
        // deleting any middle or last element
        node *current = head;
        node *prev = NULL;
        
        int count = 1;
        while(count <= position){
            prev = current;
            current = current->next;
            count++;
            
        }
        prev->next = current->next;
        current->next = NULL;
        delete current;
    }
}

int main(){
    //create a new node
    node* node1 = new node(10);
    cout<<node1->data<<endl;
    cout<<node1->next<<endl;
    
    node* head = node1;
    node*tail = node1;
    print(head);
    insertAtHead(head, 12);
    print(head);
    insertAtTail(tail, 15);
    print(head);
    insertAtLoc(tail, head, 2, 13);
    print(head);
    
    deleteNode(1, head);
    print(head);
    
    
    
    return 0;
}