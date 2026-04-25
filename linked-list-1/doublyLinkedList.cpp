#include<iostream>
using namespace std;

//creating the node
class node{
    public:
    node *prev;
    int data;
    node *next;
    
    node(int d){
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
        
    }
};

//printing the linked list
void print(node* &head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

//getting the length of the linked list
int getLength(node* &head){
    node* temp = head;
    int count = 0;
    while(temp!=NULL){
        count++;
        temp = temp->next;
    }
    return count;
}

//function to insert an element at the head
void insertAtHead(node* &head, int input){
    node* temp = new node(input);
    temp->prev = NULL;
    temp->next = head;
    head->prev = temp;
    head = temp;
}

//function to insert at tail
void insertAtTail(node* &head, int input){
    // edge case for when list is empty
    if(head == NULL){
        head = new node(input);
        return;
    }
    
    
    node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    
    //here temp = last node i.e. tail node
    node* tail = new node(input);
    temp->next = tail;
    tail->prev = temp;
    tail->next = NULL;
    
}

int main(){
    
    node* node1 = new node(10); //assigning space from the heap and not the stack, hence this line 
    node* &head = node1;

    print(head);
    
    int length = getLength(head);
    cout<<length<<endl;
    
    insertAtHead(head, 20);
    print(head);
    
    insertAtHead(head, 30);
    print(head);
    
    insertAtTail(head, 40);
    print(head);
    
    insertAtTail(head, 50);
    print(head);
    
    return 0;
}















