#include <iostream>
using namespace std;
int main(){
     int arr[5]={2,3,4,5,6};
     int length=sizeof(arr)/sizeof(arr[0]);
     //for(int i=0,i<)
     // cout<<arr[0]<<endl;
     // cout<<"len: "<<length<<endl;
     // cout<<sizeof(arr[0])<<endl;
     int min=arr[0];
     for (int i=1;i<length;i++){
          if (arr[i]<min) {
               min=arr[i];

          }

     }
     cout<<"the min value in the array is "<<min<<endl;
     return 0;
}