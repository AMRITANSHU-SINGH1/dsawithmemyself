#include <iostream>
#include <list>
using namespace std;

class stack{
     list<int> ll;
     public:
          void push(int val){
               ll.push_front(val);

          }
          int top(){
              return  ll.front();

          }
          void pop(){
               ll.pop_front();
          }

          bool empty(){
               return ll.size()==0;
          }
     


};

int main(){
     stack s;
     s.push(3);
     s.push(39);
     s.push(20);

     while(!s.empty()){
          cout<<s.top()<<" ";
          s.pop();
     }
}