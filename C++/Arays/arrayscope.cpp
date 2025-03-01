#include<iostream>
using namespace std;
void update(int arr[],int n){
    cout<<"inside the function"<<endl;
    // updating array's first element;nb n
    arr[0]=30;
    // printing the Array
 for(int i=0;i<3;i++)
  { 
    cout<<arr[i]<<" ";
  }   
  cout<<endl;
    
    cout<<"going back to main";
}
int main(){

 int arr[3]={1,2,3};

  update (arr,3);
//   printing the array
cout<<endl<<"printing in mainn function"<<endl;
  
   for(int i=0;i<3;i++)
  { 
    cout<<arr[i]<<" ";
  }
  cout<<endl;



    return 0;
}

