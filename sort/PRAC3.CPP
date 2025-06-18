#include <iostream>
//insertion sort method 
using namespace std;
int main(){
     int arr[5]={59,24,200,2,0};
     for (int i=1;i<5;i++){
          int val=arr[i];
          int index=i;
          for (int j=i-1;j>-1;j--){
               if (arr[j]>val){
                    index=j;
                    arr[j+1]=arr[j];
               }
               else{
                    break;
               }
          }
          arr[index]=val;
          
     }
     //printing the array 
     for (int i=0;i<5;i++){
          cout<<arr[i]<<" ";
     }
}