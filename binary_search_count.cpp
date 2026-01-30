//find the count of key 

#include <iostream>
using namespace std;

int binary_search(int n, int key, int arr[])
{

    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int i;
    int arr[20];
    int n, key;
    cout << "Enter the value of n\n";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the key to search\n";
    cin >> key;

    int ret = binary_search(n, key, arr);
    cout << "The returned value is:" << ret;

    if(ret != -1){
        cout << "\nElement found at index " << ret;
        int c = 1;
        
        // Count occurrences to the right
        int right = ret + 1;
        while(right < n && arr[right] == key){
            c++;
            right++;
        }
        
        // Count occurrences to the left
        int left = ret - 1;
        while(left >= 0 && arr[left] == key){
            c++;
            left--;
        }
        
        cout << "\nThe count of number is: " << c;
    }
    else{
        cout << "\nElement not found";
    }

    return 0;
}