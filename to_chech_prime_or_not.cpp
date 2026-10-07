#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter your number:";
    cin>>n;
    bool isprime=true;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            isprime=false;
            break;
        }
    }
    if(isprime==false){
        cout<<"The entered number is a prime number\n";
    }
    else{
        cout<<"Entered number is a non prime number";
    }
    return 0;
}