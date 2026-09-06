#include <iostream>
using namespace std;
int main(){
    cout<<"Welcome!"<<'\n'<<"I will tell you the number of digits in a particular positive integer given by you in between 0 to 100000"<<'\n';
    cout<<"Give your number:";
    int x;
    cin>> x;
    if (x>0 && x<10){
        cout<<"The given number is a single digit number";
    }
    else if(x>=10 && x<100){
        cout<<"The given number is a two digit number";
    }
    else if(x>=100 && x<1000){
        cout<<"The given number is a three digit number";
    }
    else if(x>=1000 && x<10000){
        cout<<"The given number is a four digit number";
    }
    else if(x>=10000 && x<100000){
        cout<<"The given number is a five digit number";
    }
    cout<<'\n'<<"Thankyou";
}