#include<iostream>
using namespace std;

int fac(int n){
    int fac=1;
    for(int i=1;i<=n;i++){
         fac*=i;
    }
    return fac;
 }

int main(){
    int n,r;
    cout<<"Enter n:";
    cin>>n;
    cout<<"Enter r:";
    cin>>r;
    cout<<fac(n)/(fac(r)*fac(n-r));
}