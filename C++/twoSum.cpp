#include <iostream>
using namespace std;

void sumoftwo(int arr[],int size,int target){
     for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
           if (arr[i]+arr[j]==target)
        {
            cout<<"pair found at index "<<i<<"and"<<j<<endl;
        }  
        }
     } 
}

int main()


 {

     int arr[5]={1,10,2,4,3};
   int size=5;
    int target=5;
    sumoftwo(arr,size,target);

     return 0;
}