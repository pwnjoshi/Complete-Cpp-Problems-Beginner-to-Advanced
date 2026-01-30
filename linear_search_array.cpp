// linear search.cpp

#include <iostream>
using namespace std;
int main(){
    int i,n,num;
    int arr[5]={10,20,30,40,50};
    n = 5;
    cout<<"Enter the number to search in an array ";
    cin>>num;
    for(i=0;i<n;i++){
        if(arr[i]==num){
            cout<<"Number Found at index "<<i;
            break;
        }
    }
    if(i == n){
        cout<<"Number not found";
    }
}