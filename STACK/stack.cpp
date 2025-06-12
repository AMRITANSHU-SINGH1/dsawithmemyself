#include <iostream>
#include <vector>
using namespace std;
class stack{
     public:
     vector<int>  v;

     void push(int val){
          v.push_back(val);

     }
     void pop(){
          v.pop_back();

     }
     int top(){
          return v[v.size()-1];
     }

     bool empty(){
          return v.size()==0;
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