#include<iostream>
using namespace std;

//Initialization
int main(){
    int n;
    cout<<"Enter how many numbers you want to store:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter your "<<i+1<<" number";
        cin>>arr[i];
    }
//smallest
    int smallest=INT_MAX;
    for(int j=0;j<n;j++){
        if(smallest>arr[j]){
            smallest=arr[j];
        }
    }
    cout<<"Smallest is:"<<smallest<<endl;
//greatest
    int greatest=INT_MIN;
    for(int j=0;j<n;j++){
        if(greatest<arr[j]){
            greatest=arr[j];
        }
    }
    cout<<"Greatest is:"<<greatest<<endl;
}