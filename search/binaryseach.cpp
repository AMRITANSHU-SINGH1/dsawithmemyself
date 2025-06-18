#include <iostream>
#include <vector>
using namespace std;
int binser(vector<int> &arr,int key){
     int left=0;
     int right=arr.size()-1;

     while(left<=right){
          int mid=(left+right)/2;
          if (arr[mid]==key){
               return mid;
               break;
          }
          if (arr[mid]<key){
               left=mid+1;

          }
          else if (arr[mid]>key){
               right=mid-1;
          }
     }
     return -1;
}

int main()
{
     vector<int> arr={4,5,7,9,19,24,42,50};
     int key=24;
     int u=binser(arr,key);
     if (u!=-1){
          cout<<"the element is present in the array"<<endl;
          cout<<"Present at the position"<<u+1<<endl;

     }
     else{
          cout<<"the element is not present in the array";
     }
     // int u=7/2;
     // cout<<u;
     return 0;
}
