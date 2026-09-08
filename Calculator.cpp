#include <iostream>
using namespace std;
int main(){
    cout<<"Welcome!\n"<<"I am a basic calculator";
    float n1,n2;
    char op;
    cout<<"Give your 1st number\n"<<"then operator(+,-,*,/)\n"<<"then give your 2nd number";
    cin>>n1;
    cin>>op;
    cin>>n2;
    if(op=='+'){
        cout<<"The sum is:"<<n1+n2;
    }
    else if(op=='-'){
        cout<<"The subtraction is:"<<n1-n2;
    }
    else if(op=='*'){
        cout<<"The multiplication is:"<<n1*n2;
    }
    else if(op=='/'){
        cout<<"The division is:"<<n1/n2;
    }
    else{
        cout<<"Invalid operator!";
    }
    cout<<"\nThankyou";

}