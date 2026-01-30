// BINARY SEARCH - ITERATIVE WAY 

#include <iostream>
using namespace std;

int BinarySearch(int arr[], int n , int key){
	int left = 0;
	int right = n-1;	
	while(left<right){
	int mid= left + (right-left)/2;
	
	if(arr[mid]==key){
	return key;
	}
	else if(key<arr[mid]){
	right=mid-1;
	}
	else{
	left=mid+1;
	}
      }
return -1;
}

int main(){

	int arr[8]= {2,3,4,5,6,7,8,9};
	int n=8;
	int key=2;
	int p=BinarySearch(arr, n, key);
	cout<<"The returned value is:"<<p;
return 0;	
}