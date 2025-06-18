#include <iostream>
using namespace std;
int main(){
     int arr[5]={82,60,5,59,98};
     cout<<"initial array elements are: "<<"[";
     for(int i=0;i<5;i++){
          cout<<arr[i]<<" ";
     }
     cout<<"]"<<endl;
    
     for (int i=1;i<5;i++){
          int insertindex=i;
          int curval=arr[i];
          for (int j=i-1;j>-1;j--){
               if (arr[j]>curval){
                    arr[j+1]=arr[j];
                    insertindex=j;
               }
               else {
                    break;
               }
          }
          arr[insertindex]=curval;
     }

     cout<<"sorted  array elements are: "<<"[";
     for(int i=0;i<5;i++){
          cout<<arr[i]<<" ";
     }
     cout<<"]"<<endl;
    
     return 0;
}