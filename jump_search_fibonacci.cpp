// #include <iostream>
// using namespace std;

// int LinearSearch(int arr[], int i, int key){

// }

// int main(){
//     int arr[11]={0,1,1,2,3,5,8,12,34,55,85};
//     int key=55;
//     int n=11;
//     int j;
//     for(int i=0;i<n;i++){
//         if(arr[i]>key){
//             LinearSearch(arr, i, key);
//         }
//         i=i+4;
//     }
// }

#include<iostream>
#include<math.h>
int min(int a, int b){
    if(b>a)
      return a;
      else
      return b;
}
int jumpsearch(int arr[], int x, int n)
{
    int step = sqrt(n);

    int prev = 0;
    while (arr[min(step, n)-1] < x)
    {
        prev = step;
        step += sqrt(n);
        if (prev >= n)
            return -1;
    }

    while (arr[prev] < x)
    {
        prev++;
        if (prev == min(step, n))
            return -1;
    }
    // If element is found
    if (arr[prev] == x)
        return prev;

    return -1;
}
int main()
{
    int arr[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610};
    int x = 55;
    int n = sizeof(arr)/sizeof(arr[0]);
    int index = jumpsearch(arr, x, n);
    if(index >= 0)
    std::cout << "Number is at " << index << " index";
    else
    printf("Number is not exist in the array");
    return 0;
}
