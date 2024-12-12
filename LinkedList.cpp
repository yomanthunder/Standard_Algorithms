#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
};

class LinkedList{
    Node* head;
    public:
       LinkedList(): head(nullptr){};
       void insertAtbegin(int value){
           Node* newNode = new Node();
           newNode->next = head;
           newNode->data=value;
           head = newNode;
       }
       void insertAtEnd(int value){
          Node* newNode = new Node();
          newNode->data=value;
          newNode->next=nullptr;
          if(!head){
            head=newNode;
            return;
          }
          Node* temp = head;
          while(temp->next!=nullptr){
             temp = temp->next;
          }
          temp->next = newNode;
       }
       void insertAtKthNode(int value,int k ){}
       void deleteAtKthNode(int k){}
       void printLinkedlist(){
           if(!head) cout<<"the linkedlist "<<endl;
           Node* temp = head;
           while(temp!=nullptr){
              cout<<temp->data<<" ";
              temp = temp->next;
           }
           cout<<"nullptr\n";
       }
       
};
int main(){
    LinkedList* obj = new LinkedList;
    // obj->printLinkedlist();
    // obj->insertAtbegin(5);
    // obj->insertAtbegin(6);
    // obj->insertAtbegin(7);
    obj->insertAtEnd(5);
    obj->insertAtEnd(6);
    obj->insertAtEnd(7);
    obj->insertAtEnd(8);
    obj->printLinkedlist();
}