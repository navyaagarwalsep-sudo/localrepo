//program for swapping of two number using three variable
#include <iostream>
using namespace std;
int main(){
//     int a,b,c;
//     cout<< "enter two number";
//     cin>>a>>b;
//     cout<<"before swaping :   "<<a  ;
//    cout<< "\t"    <<b;
//     c=a;
//     a=b;
//     b=a;
//     cout<<"\nafter swap:   "<<a  ;
//    cout<< "\t"  <<b;
//     return 0;
  


// using two variable 
int a,b;
cout<<"enter the two number:";
cin>>a>>b;
cout<<"before swap:\t"<<a;
cout<<"\t"<<b;
a=a+b;
b=a-b;
a=a-b;
cout<<"\n after swap:    "<<"\t"<<a<<"\t"<<b;
return 0;

}