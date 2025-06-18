#include <iostream>
using namespace  std;

class Node{
     public:
          int data;
          Node* next;

          Node(int val){
               data=val;
               next=NULL;
          }
};

class list{
     Node *head;
     Node *tail;
     public:
          list(){
               head=tail=NULL;
          }
          void pushfront(int val){
               Node* newnode= new Node(val);
               if(head==NULL){ // meaning list is empty
                    head=tail=newnode;
                    return;
               }
               else{
                    // meaning list contains some nodes already 
                    newnode->next=head;
                    head=newnode;
               }
          }

          void pushback(int val){
               Node* newnode= new Node(val);
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
               Node* temp=head;
               if(head==NULL){
                    cout<<"the linked list is empty!!"<<endl;
                    return;
               }
               while(temp!=NULL){
                    cout<<temp->data<<"->";
                    temp=temp->next;
               }
               cout<<"NULL"<<endl;
               
          }

          void popfront(){
               if (head==NULL){
                    cout<<"list is empty nothing to pop out"<<endl;
                    return;
               }
               Node* temp=head;
               head=head->next;  // this line made the head to shift
               temp->next=NULL;
               delete temp;
          }

          void popback(){

               Node* temp=head;

               while(temp->next!=tail){
                    temp=temp->next;
               }
               temp->next=NULL;
               delete tail;
               tail=temp;


          }
          void insert(int val,int idx){
               if (idx<0){
                    cout<<"invalid position";
                    return;
               }
               if(idx==0){
                    pushfront(val);
                    return;
               }
               Node *newnode=new Node(val);
               Node*temp=head;

               for(int i=0;i<idx-1;i++){
                    if (temp==NULL){
                         cout<<"invalid position"<<endl;
                         return;
                    }
                    temp=temp->next;

               }
               newnode->next=temp->next;
               //delete temp->next;
               temp->next=newnode;

          }
          int search(int val){
               Node* temp=head;
               int idx=0;
               while(temp!=NULL){
                    if(temp->data==val){
                         return idx;
                    }
                    temp=temp->next;
                    idx++;
                    
               }
               return -1;
          }




};

int main(){
     list ll;
     ll.pushback(34);
     ll.pushfront(7);
     ll.pushfront(1);
     ll.pushback(0);
     cout<<"linked list"<<endl;
     ll.printll();

     //cout<<"linked list after pop front:"<<endl;
     //ll.popfront();
     //ll.printll();

     //cout<<"linked list after pop back:"<<endl;
     //ll.popback();
     //ll.printll();

     cout<<"inserting 2 at index 3"<<endl;
     ll.insert(2,3);
     ll.printll();

     cout<<"7 is present at index:"<<ll.search(7);



     
}