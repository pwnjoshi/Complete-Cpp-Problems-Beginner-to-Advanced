// i = j + k  using bruteforce

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

    for(i=0;i<n;i++){
        for (j=i+1; j<n; j++){
            for(k=j+1;k<n;k++){
                if(arr[i]+arr[j]==arr[k]){
                    cout<<i<<j<<k<<endl;
                }
            }
        }
    }

    return 0;
}