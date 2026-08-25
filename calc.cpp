//using switch case 
#include<iostream>
using namespace std;
int main(){ system("cls");
    int a,b;
    cout<<"enter two numbers "<< endl;
    cin>> a>> b ;
   int cal;
   cin>> cal;
    
    switch(cal){
        case 1 : cout<<"addition is : "<<a+b<< endl;
        case 2 :   cout<<"subtraction is : "<<a-b<< endl;
        case 3 : cout<<"multiplication is : "<<a*b<< endl;
        
        case 4 :  cout<<"devision is : "<<a/b<< endl;
       
        default : cout<< "invalid operator"<< endl;
    }
return 0 ; 
}