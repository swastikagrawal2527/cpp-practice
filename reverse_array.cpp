#include<iostream>
using namespace std;

void reversearry(int arr[],int sz){
    int start=0,end=sz-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    
}

int main(){
    int arr[]={5,3,2,1,8};
    int sz=5;

    reversearry(arr,sz);
    
    for(int i=0;i<sz;i++){
        cout<<arr[i];
    }
    cout<<endl;
}