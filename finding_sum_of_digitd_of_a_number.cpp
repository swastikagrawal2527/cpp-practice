#include<iostream>
using namespace std;

int sumn(int n){
    int sumdigit=0;
    while(n>0){
        int ldigit;
        ldigit=n%10;
        n=n/10;
        sumdigit+=ldigit;
    }
    return sumdigit;
}

int main(){
    int n;
    cout<<"Enter your number:";
    cin>>n;
    cout<<"Sum is:"<<sumn(n)<<endl;
    return 0;
}