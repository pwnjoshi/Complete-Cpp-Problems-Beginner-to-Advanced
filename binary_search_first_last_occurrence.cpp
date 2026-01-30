//find the count of key 

#include <iostream>
using namespace std;

int left_occ(int n, int key, int arr[])
{

    int start = 0;
    int end = n - 1;
    int result = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            result = mid;
            end = mid - 1;
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
    return result;
}

int right_occ(int n, int key, int arr[]){
    int start = 0;
    int end = n - 1;
    int result = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            result = mid;
            start = mid + 1;
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
    return result;

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

    int left = left_occ(n, key, arr);
    int rig = right_occ(n, key, arr);
    // Calculating count of occurrences by index range
    int count = rig - left +1;
    cout<<"The count of the key entered is:"<<count;

    return 0;
}