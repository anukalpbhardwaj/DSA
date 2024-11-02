#include<iostream>
using namespace std;
class Node{
public:
int data;
Node* prev;
Node* next;

//constructor

Node(int d ){

    this -> data = d;
    this ->prev =  NULL;
    this ->next = NULL;
}

};
void Print (Node* head){

    Node * temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data <<" ";
        temp = temp->next;
    }
    cout<<endl;
    
}

int getLength(Node* head){
    int len= 0;
    Node* temp = head;
    while (temp!=NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;

    
}

void insertAtHead(Node* &head , int d){

    Node * temp = new Node(d);
    temp -> next = head;
    head ->prev = temp;
    head = temp;
}

int main() {
Node * node1 = new Node(10);

Node*head = node1;


Print(head);

cout<<getLength(head)<<endl;

insertAtHead(head, 11);
Print(head);
insertAtHead(head, 12);
Print(head);
insertAtHead(head, 6);
Print(head);
insertAtHead(head, 110);
Print(head);

return 0;
}