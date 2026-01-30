#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int k){
    int left=0;
    int right=n-1;

    while(left<right){
        int mid=left+(right-left)/2;

        if (arr[mid]==k){
            return mid;            
        }
        else if(k<arr[mid]){
            right=mid-1;
        }
        else{
            left=mid+1;
        }
    }
}

int main(){
    int arr[7]={1,5,10,15,25,30,45};
    int n=7;
    int k;
    cout<<"Enter element to search: ";
    cin>>k;
    int result=binarySearch(arr,n,k);
    if(result!=-1){
        cout<<"Element found at index: "<<result<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }
}