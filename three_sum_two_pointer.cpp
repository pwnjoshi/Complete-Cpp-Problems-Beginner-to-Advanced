// i = j + k  using two pointer technique

#include <iostream>
using namespace std;

int main(){

    int arr[20];
    int i,j,k, n;
    cout<<"Enter the number of elements to enter:\n";
    cin>>n;
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