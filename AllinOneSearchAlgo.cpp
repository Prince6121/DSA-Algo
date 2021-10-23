//All Searching Methods
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <conio.h>
using namespace std;
// void binarySearch() {}
int linearSearch(int arr[], int S, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == S)
        {
            return i;
        }
    }
    return -1;
}
int binarySearch(int arr[], int S, int start, int end)
{
    
    int mid;
    if (end >= start){
        mid = (start+end)/2;
        if(arr[mid] == S){
            return mid+1;
        }else if(arr[mid] < S){
            return binarySearch(arr, S , mid+1 , end);
        }else{
            return binarySearch(arr , S,  start , mid-1);
        }
    }
    return -1;
}
int main()
{
    int N, S;
    cout << "Enter Length of Numbers \n";
    cin >> N;
    int arr[N];
    


    cout << "Enter Your Elements \n";
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter Searching Element \n";
    cin >> S;
    if (linearSearch(arr, S, N) == -1)
    {
        cout << "Your Element Not Founded";
    }
    else
    {
        cout << "Your Element search at " << linearSearch(arr, S, N) + 1 << " Position Using Linear Search \n";
    }
    sort(arr , arr + N);
    
    cout << "Your Element search at " << binarySearch(arr , S , 0 , N-1) << " Position Using Binary Search";

}

