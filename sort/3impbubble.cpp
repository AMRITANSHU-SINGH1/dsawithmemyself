#include <iostream>
using namespace std;
int main(){
     int arr[5]={7,3,9,12,11};
     int len=sizeof(arr)/sizeof(arr[0]);
     int count=0;
     for (int i=0;i<len-1;i++){
          bool swapped=false;

          for (int j=0;j<len-1-i;i++){
               if (arr[j]>arr[j+1]){
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                    swapped=true;
               }
          }
          if (not swapped){
               break;

          }
          else{
               count+=1;
          }
     }

     for (int i=0;i<len;i++){
          cout<<arr[i]<<endl;
     }
     cout<<"no of times the outer loop runned :"<<count<<endl;
}