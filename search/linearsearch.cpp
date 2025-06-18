#include <iostream>
#include <vector>
using namespace std;

int linearsearch(vector<int> &arr,int key){
     for (int i=0;i<arr.size();i++)
          {
               if (arr[i]==key){
                    return i;
               }         
                    
     
          }
     return -1;
     
}
int main(){
     vector<int> arr={3,434,2,772,63,736,24};
     int n;
     cout<<"enter the key value you want to search:";
     cin>>n;
     int u=linearsearch(arr,n);
     if (u!=-1){
          cout<<"the key is found in the array at index"<<u<<endl;

     }
     else{
          cout<<"the key not found in the index!!"<<endl;
     }
     
     
     return 0;
}