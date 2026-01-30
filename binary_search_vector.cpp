// Binary Search in C++

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

	int target;
	cout << "Enter the number to search in the array: ";
	cin >> target;

	int left = 0;
	int right = arr.size() - 1;

	while (left <= right) {
		int mid = left + (right - left) / 2;

		if (arr[mid] == target) {
			cout << "Number found at index " << mid;
			return 0;
		} else if (arr[mid] < target) {
			left = mid + 1;
		} else {
			right = mid - 1;
		}
	}

	cout << "Number not found";
	return 0;
	return -1;
}
