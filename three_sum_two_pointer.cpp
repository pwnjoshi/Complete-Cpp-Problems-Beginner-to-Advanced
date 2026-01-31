// II. Given a sorted array of positive integers, design an algorithm and implement it using a program. to find three indices i, j, k such that arr[i] + arr[j]= arr[k].


#include <iostream>
using namespace std;

int main(){

    int arr[20];
    int i,j,k, n;
    cout<<"Enter the number of elements to enter:\n";
    cin>>n;
    
    // array elements enter karwaye
    for (i=0; i<n; i++){
        cin>>arr[i];
    }

    for(k=0;k<n;k++){
        i=0;
        j=n-1;
        while(i<j){
            if(arr[i]+arr[j]==arr[k]){
                cout<<i<<j<<k<<endl;
                i++;
                j--;
            }
            else if(arr[i]+arr[j]<arr[k]){
                i++;
            }
            else{
                j--;
            }
        }
    }
    return 0;
}
// Time Complexity: O(n^2)
// Space Complexity: O(1)