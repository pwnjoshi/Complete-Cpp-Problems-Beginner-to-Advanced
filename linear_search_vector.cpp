// linear search.cpp with vector

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);
    arr.push_back(50);

    int n = arr.size();
    cout<<n;
    int num;
    cout<<"Enter the number to search in an array ";
    cin>>num;

    int i;
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