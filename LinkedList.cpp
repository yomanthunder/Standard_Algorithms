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
       void insertAtKthIndex(int value,int k ){
        Node* newNode = new Node();
        newNode->data = value;
         if (k <= 0) {
            cout << "Invalid position!" <<endl;
            return;
        }
        if(head==nullptr){
            if(k==1){
                newNode->next=nullptr;
                head = newNode;
            }
            else {
            cout << "Position out of bounds!" << endl;
            delete newNode;
        }
        return;
        }
        if(k==1){
            newNode->next=head;
            head = newNode;
        }
        Node* temp = head;
         int cnt = 1;  // Start counting from the first node

        while (temp != nullptr && cnt <k-1) {
            cnt++;
            temp = temp->next;
        }

        if (temp == nullptr) {  // If `k` is out of bounds
            cout << "Position out of bounds!" << endl;
            delete newNode;
            return;
        }
        // Insert the new node at the correct position
        newNode->next = temp->next;
        temp->next = newNode;
       }
       void deleteAtKthIndex(int k){}// impliment when you get time
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
    obj->printLinkedlist();cout<<"\n";
    obj->insertAtKthIndex(9,3);
    obj->printLinkedlist();
}