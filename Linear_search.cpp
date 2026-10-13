#include<iostream>
using namespace std;

int tfunc(int size,int target,int arr[]){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return i;
        }
        
    }

    return -1;
}

int main(){
    int size=6;
    int target=-8;
    int arr[]={1,-5,8,5,67,-80};
    cout<<tfunc(size,target,arr);

}