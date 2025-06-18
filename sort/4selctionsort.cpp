#include <iostream>
using namespace std;

int main(){
     int arr[7]={3334,28,21,0,344,26,59};
     int l=7;
     for (int i=0;i<l-1;i++){
          int minindex=i;
          for (int u=i;u<l;u++){
               if (arr[minindex]>arr[u]){
                    minindex=u;
               }
          }
          //int minval=arr[minindex];

          int temp=arr[i];
          arr[i]=arr[minindex];
          arr[minindex]=temp;


          
     }

     cout<<"printing the new selection sorted array"<<endl;

     for (int i=0;i<l;i++){
          cout<<arr[i]<<endl;
     }
}