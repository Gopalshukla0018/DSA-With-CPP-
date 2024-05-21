#include <iostream>
using namespace std;

void printarray(int arr[],int size){
for(int i=0;i< size ;i++){
      cout <<arr[i]<<" ";
}
}

int main(){

int arr[7]={2,3,21,23,21,32,22};

printarray(arr,7);
cout<<"printing done"<<endl;


int crr[10]={2,2,2,1,3,21,23,21,32,22};

printarray(crr,10);
cout<<"printing done"<<endl;;

    return 0;
}