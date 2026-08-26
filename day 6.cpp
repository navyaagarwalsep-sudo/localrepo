//cocept of int data type
#include <iostream>
using namespace std;
int main() { 
    system("cls");
    unsigned int a , b , c; // unsigned refers to =ve integer only 
    
    cout<< "enter two numbers";
    cin>>a>>b;
    c=a+b;
    cout<<"addition is"<<   c;
    cout<<    sizeof(a); // 4 byte 

}
