#include<iostream>
using namespace std;

int main(){
    int n=4;
    for(int i=0;i<4;i++){
        for(int j=n-1;j>i;j--){
            cout<<" ";
        }
        for(int k=1;k<=i+1;k++){
            cout<<'*';
        }
        cout<<endl;
    }
}