#include <iostream>
using namespace std;
int main()
 {   int temp=0;
    int arr[10]={1,2,3,13,12,10,2,1,2,4};
    for(int i=0;i<10;i++){
        if (arr[i]>7)
        {
            temp+=1;
        }
        
    }
    cout<<temp<<endl;
     return 0;
}