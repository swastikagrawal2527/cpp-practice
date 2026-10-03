#include<iostream>
using namespace std;
int main(){
    cout<<"Welcome!\n"<<"I will tell you either a charecter is upper case or lower case\n";
    char ch;
    cout<<"Enter your charecter:";
    cin>>ch;
    if(ch>='a'&& ch<='z'){
        cout<<"lower case\n";
    }
    else{
        cout<<"UPPER CASE\n";
    }
    cout<<"Thankyou";
}