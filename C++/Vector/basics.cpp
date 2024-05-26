#include <iostream>
#include<vector>
using namespace std;
int main()
 {
    //    vector<dataType> vectorName;
       vector<int>v;
       v.push_back(1);
       cout<<"size is: "<<v.size()<<endl;
       cout<<"capaciti is: "<<v.capacity()<<endl;
       v.push_back(2);
       cout<<"size is: "<<v.size()<<endl;
       cout<<"capaciti is: "<<v.capacity()<<endl;

       v.push_back(3);
       cout<<"size is: "<<v.size()<<endl;
       cout<<"capaciti is: "<<v.capacity()<<endl;
        v.push_back(4);
       cout<<"size is: "<<v.size()<<endl;
       cout<<"capaciti is: "<<v.capacity()<<endl;
      v.push_back(5);
        cout<<"size is: "<<v.size()<<endl;
       cout<<"capaciti is: "<<v.capacity()<<endl;
       v.push_back(6);
        cout<<"size is: "<<v.size()<<endl;
       cout<<"capaciti is: "<<v.capacity()<<endl;
       v.push_back(7);
        cout<<"size is: "<<v.size()<<endl;
       cout<<"capaciti is: "<<v.capacity()<<endl;
     v.push_back(8);
        cout<<"size is: "<<v.size()<<endl;
       cout<<"capaciti is: "<<v.capacity()<<endl;
     v.push_back(9);
        cout<<"size is: "<<v.size()<<endl;
       cout<<"capaciti is: "<<v.capacity()<<endl;
v.resize(9);
       cout<<"size is: "<<v.size()<<endl;
       cout<<"capaciti is: "<<v.capacity()<<endl;
       
     return 0;
}