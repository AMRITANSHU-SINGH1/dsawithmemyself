#include <iostream>
using namespace std;
int main(){
     int arr[5]={2,34,28,5,6};
     int length=sizeof(arr)/sizeof(arr[0]);
     //for(int i=0,i<)
     // cout<<arr[0]<<endl;
     // cout<<"len: "<<length<<endl;
     // cout<<sizeof(arr[0])<<endl;
     for (int i=0;i<length-1;i++){
          for (int j=0;j<length-i-1;j++){
               if (arr[j]>arr[j+1]) {
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
               }
          }
     }
     for(int i=0;i<length;i++){
          cout<<arr[i]<<endl;
     }
     return 0;
}