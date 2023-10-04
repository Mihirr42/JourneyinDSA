#include <iostream>
using namespace std;

int firstOcc(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = 0;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }

        else if (key > arr[mid])
            start = mid + 1;

        else
            end = mid - 1;

        mid = start + (end - start) / 2;
    }
    return ans;
}

int lastOcc(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = 0;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }

        else if (key > arr[mid])
            start = mid + 1;

        else
            end = mid - 1;

        mid = start + (end - start) / 2;
    }
    return ans;
}

int noofOcc(int arr[], int size, int key)
{
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        if (key == arr[i])
            count++;
    }
    return count;
}

int main()
{
    int even[7] = {2, 4, 6, 8, 8, 8, 10};

    cout << "First Occurence of 8 is at index " << firstOcc(even, 7, 8) << endl;
    cout << "Last Occurence of 8 is at index " << lastOcc(even, 7, 8) << endl;
    cout << noofOcc(even, 7, 8);
    return 0;
}


// MIHIRR42
