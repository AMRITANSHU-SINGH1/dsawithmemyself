#include <iostream>
using namespace std;

class Node{
     public:
          int data;
          Node *next;
          Node(int val){ // this our constructor in cpp
               data=val;
               next=NULL;
          }
          
};

class llist{
     public:
          Node* head;
          Node* tail;
          llist(){
               head=tail=NULL;

          }
          void pushfront(int val){
               Node * newnode= new Node(val);
               if (head==NULL){
                    head=tail=newnode;
                    return;

               }
               newnode->next=head;
               head=newnode;

          }
          void pushback(int val){
               Node* newnode=new Node(val);

               if (head==NULL){
                    head=tail=newnode;
                    return;
               }
               else{
                    tail->next=newnode;
                    tail=newnode;
               }
          }

          void printll(){
               if (head==NULL){
                    cout<<"the linked list is empty";
                    return;
               }
               Node* temp=head;
               while(temp!=NULL){
                    cout<<temp->data<<"->";
                    temp=temp->next;

               }
               cout<<"NULL"<<endl;

          }

          void popfront(){

               if ( head==NULL){
                    cout<<"the list is empty"<<endl;
                    return;
               }
               Node * temp=head;
               head=head->next;
               temp->next=NULL;
               delete temp;
          }
          void popback(){
               if (head==NULL){
                    cout<<"the list is empty";
                    return;
               }
               Node *temp=head;
               while(temp->next!=tail){
                    temp=temp->next;
               }
               temp->next=NULL;
               delete tail;
               tail=temp;
          }
          int search(int val){

               if (head==NULL){
                    cout<<"the list is empty";
                    return;
               }
               Node* temp=head;
               int i=0;
               while(temp->data!=val){
                    temp=temp->next;
                    i++;
               }
               return i;
          }
          void insert(int val,int idx){  // HERE I IS THE INDEX VALUE WHERE THINGS TO BE ADDED
               Node *temp=head;
               Node* newnode=new Node(val);

               if (idx<0){
                    cout<<"invalid position"<<endl;
                    return;
               }
               if (idx==0){
                    pushfront(val);
                    return;
               }
               if (head==NULL){
                    return;
               }
               int i=0;
               // while(i<idx-1){
               //      if (temp==NULL){
               //           cout<<"invalid position";
               //           return;
               //      }
               //      temp=temp->next;
               // }

               for (int i=0;i<idx-1;i++){
                    if (temp==NULL){
                         cout<<"invalid position"<<endl;
                         return;

                    }
                    temp=temp->next;
               }
               newnode->next=temp->next;
               temp->next=newnode;

          }
};

int main(){

}