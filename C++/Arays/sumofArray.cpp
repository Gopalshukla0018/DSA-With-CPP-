#include<iostream>
using namespace std;
int main(){
  
     int arr[5]={1,10,20,3,12};
      int sum=0;
      int size = sizeof(arr) / sizeof(arr[0]);
      for(int i=0;i<size;i++){
        sum+=arr[i];
      }
    cout<<sum<<endl;
    
    return 0;

}
