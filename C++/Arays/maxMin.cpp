#include <iostream>
using namespace std;

int findmax(int arr[],int size){
    
       int maxvalue=arr[0]; 
    for (int i = 1; i < size; i++)
 
    {
          if(arr[i]>maxvalue)
          {
           maxvalue=arr[i];
          }
        

    }
      return maxvalue;  
}
int findmin(int arr[],int size){
    
       int minvalue=arr[0]; 
    for (int i = 1; i < size; i++)
 
    {
          if(arr[i]<minvalue)
          {
           minvalue=arr[i];
          }
        

    }
      return minvalue;  
}
int main()
 {
     cout<<"Enter 1 for minimum element and enter 2 for maximum element"<<endl;
     int n;
     cin>>n;
    int arr[5]={10,20,30,40,50};
    int size=sizeof(arr)/sizeof(arr[0]);
    if (n==2)
    {
        int maxvalue=findmax(arr,size);
    cout<<"Maximum Element of Array is"<<maxvalue<<endl;
    }
    else if (n==1)
    {
      int minvalue=findmin(arr,size);
     cout<<"Minimun Element Of Array is"<<minvalue<<endl;
    }
    else
    cout<<"Please Enter A Valid Number";
    
    
   
     
     return 0;
}