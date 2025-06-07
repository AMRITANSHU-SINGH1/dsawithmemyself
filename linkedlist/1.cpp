#include <iostream>
#include <vector>
using namespace std;
struct Node
{
     /* data */
     public:
     int data;
     Node* next;
     public:
     Node(int data1,Node* next1){
          data=data1;
          next=next1;
     }
};

// using namespace std;

int main()
{
     // int x=18;
     // int* y= &x;
     // cout<<y;
     // return 0;
     vector<int> arr={2,5,8,7};
     Node* y=new Node(arr[0],nullptr);
     cout<<y->data;


     return 0;
}
