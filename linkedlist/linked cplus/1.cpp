#include <iostream>
using namespace std;

class Node
{

public:
     int data;
     Node* Next;

     Node(int a){   // THIS IS OUR CONSTRUCTOR 
          data=a;
          Next=NULL;
     }
};

class list{
     Node* head; // YEH JO POINTER HAI  HEAD YEH EK NODE KO POINT KAR RAHA HAI
     Node* tail; //YEH JO POINTER HAI  TAIL YEH EK NODE KO POINT KAR RAHA HAI
     public:
          list(){        //constructor  MEANING EK LIST ME HEAD HOGA AUR EK TAIL PPOINTER HOGA
               head=tail=NULL;  // MATALAB JAB BHI LIST OBJECT create hoga to by default use me 
                              // head aur tail null honge jo bad me change ho sakte hai
          }
          void push_front(int val){   // yeh ek function hai jo list ke aage node ko dalega
               Node* newNode= new Node(val); //node declaratio and a pointer declaration for the pointer
               // this above code help to create a dynamic object


               // desi lang
               /*   
                    ek aur pointer hai newnode jo point kar 
                    raha hai ek node ko 
                    yaha upar hum new Node(val) use karke ek 
                    node create kar rahe hai aur uski memory address ko
                    capture kar ke newnode ko assign kar rahe hai
               */
               if (head==NULL){          // yeh pehli bar ke liye hai jub hamara list khali hai 
                    head=tail=newNode;  // yaha hum head and tail pointers me ek address store kar rahe hai 
                    return;             // jo hai newly created node ka address, pehle node ke liye head aur tail 
                                        // ek hi node to point out kar rahe hai

               }
               else{                    // yeh tab hai jub hamara list khali nahi haai
                                        // yaha newnode ek new node ka adresss hai
                    newNode->Next=head;//1 // iska matlab hamne jo recent node create kiya hai usme jo next pointer
                    head=newNode; //2      // hai usko ek  adress value assign karo jo hai pichle wala node ka address
                                        // yaha 1 me jo head hai vo pehle wale node ka adress store  kar rakha hai thatswhy
                                        // 2 ka matlab hai head pointer aab naye node ko point kar raha hai
               
               }         
          }

          void push_back(int val){
               Node *newnode = new Node(val);
               
               if (head==NULL){
                    head=tail=newnode;
               }
               else{
                    tail->Next=newnode;
                    tail=newnode;
               }
          }
          void printll(){
               Node* temp=head;

               while(temp!=NULL){
                    cout<<temp->data<<"->";
                    temp=temp->Next;
               }
               cout<<"NULL"<<endl;

          }

          void popfront(){
               if (head==NULL){
                    return;
               }
               else{
                    Node* temp=head;
                    head=head->Next;
                    temp->Next=NULL;
                    delete temp;
               }

          }

          void popback(){
               if (head==NULL){
                    cout<<"list is empty"<<endl;
                    return;
               }
               Node* temp=head;
               while (temp->Next!=tail){
                    temp=temp->Next;

               }
               temp->Next=NULL;
               delete tail;  // delete is used to delete the value stored in tail not the variable tail
               tail=temp;

          }
          void insert(int val,int pos){
               if (pos<0){
                    cout<<"invalid position";
                    return;
               }
               if (pos==0){
                    push_front(val);
                    return;
               }
               Node*temp =head;
               for (int i=0;i<pos-1;i++){ 
                    if (temp==NULL){
                         cout<<"invalid position"<<endl;
                         return;
                    }
                    temp=temp->Next;
               }
               Node* newnode= new Node(val);
               newnode->Next=temp->Next;
               temp->Next=newnode;
          }
          int search(int key){
               Node*temp=head;
               int i=0;
               while(temp!=NULL){
                    if(temp->data==key){
                         return i;
                    }
                    temp=temp->Next;
                    i++;
               }
               return -1;
          }


};


int main(){
     list ll; 
     ll.push_front(1);
     ll.push_front(2);
     
     ll.push_front(3);
     //ll.push_back(7);
     //cout<<"\nafter using pop front"<<endl;
     //ll.popfront();
     //ll.printll();
     
     //cout<<"after using the pop back"<<endl;
     // ll.popback();
     //ll.printll();
     // ll.insert(89,1);
     // ll.printll();
     // ll.push_back(7);
     ll.push_back(7);
     ll.printll();
     //int u=ll.search(7);
     cout<<"the index of the key is:"<<ll.search(7)<<endl;
     // print the linked list 
     return 0;
   
}

