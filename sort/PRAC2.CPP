#include <iostream>
//selection sort method 
using namespace std;
int main(){
     int arr[5]={59,24,200,2,0};
     for (int i=0;i<4;i++){
          int min_index=i;
          int minval=arr[i];
          for (int j=i+1;j<5;j++){
               if (arr[j]<minval){
                    minval=arr[j];
                    min_index=j;
               }
          }
          int temp=arr[i];
          arr[i]=minval;
          arr[min_index]=temp;
     }
     //printing the array 
     for (int i=0;i<5;i++){
          cout<<arr[i]<<" ";
     }
}