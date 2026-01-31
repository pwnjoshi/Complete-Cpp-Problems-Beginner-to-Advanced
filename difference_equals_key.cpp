// III. Given an array of nonnegative integers, design an algorithm and a program to count the number of pairs of integers such that their difference is equal to a given key, K

#include <iostream>
using namespace std;

void diff(int arr[], int n, int key){
    int j,k;
    int count=0;
    for(j=0;j<n; j++){
        for(k=j+1;k<n;k++){
            if((arr[k]-arr[j])==key || (arr[j]-arr[k])==key){
                cout<<"The pairs are: ("<<arr[j]<<","<<arr[k]<<")\n";
                count++;
            }
        }
    }
    // Time Complexity: O(n^2)
    cout<<"Count of pairs: "<<count<<"\n";
}

int main(){
    int arr[20];
    int i;
    int key;

    int n; // number of elements 

    cout<<"Enter the number of elements\n";

    cin>>n;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Enter the key\n";
    cin>>key;

    diff(arr,n,key);
return 0;

}

// Time Complexity: O(n^2)
// Space Complexity: O(1)
