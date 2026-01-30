#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter value of n :";
    cin>>n;
    int arr[20];
    cout<<"enter value of array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int k;
    cout<<"enter value of k :";
    cin>>k;
    int count=0;
    int i;
    for( i=0;i<n;i++){
        if(arr[i]==k){
            count++;
            break;
        }
        // else{
        //     cout<<"value not found";
        // }
    }
    cout<<i;
    cout<<count;
    // if(count>0){
    //     cout<<"value is found "<<count<<" times";
    // }
}