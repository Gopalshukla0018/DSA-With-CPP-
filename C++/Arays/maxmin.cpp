#include <iostream>

using namespace std;
int getmax(int num[],int n)
{
   int maxi= INT32_MIN;
    for(int i=0;i<n;i++){
        // if(num[i] >max){
        //     max=num[i];
        // }
        maxi= max(maxi,num[i]);


    }
    return maxi;
    // returning max value
}

int getmin(int num[],int n)
{
   int mini= INT32_MAX;
    for(int i=0;i<n;i++){
        // if(num[i] <min){
        //     min=num[i];
        // }
       mini=min(mini,num[i]);
    }
    return mini;
    // returning min value
}
int main(){
  int size;
   cout<<"Enter size of an array "<<endl;
   cin >>size;

int num[100];
// taking input in array
for(int i=0;i<size;i++){
    cin>>num[i];
}
  cout<<"Maximum value is "<<getmax(num,size)<<endl;
  cout<<"Minimum value is"<<getmin(num,size)<<endl;

return 0;
}