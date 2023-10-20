#include <iostream>
using namespace std;

void merge(int *arr, int start, int end)
{

    int mid = start + (end - start) / 2;

    // calculating lengths
    int len1 = mid - start + 1;
    int len2 = end - mid;

    // creating new arrays
    int *first = new int[len1];
    int *second = new int[len2];

    // copy the values in the array
    int mainArrayIndex = start;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainArrayIndex++];
    }

    // merge 2 sorted arrays
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = start;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
            arr[mainArrayIndex++] = first[index1++];

        else
            arr[mainArrayIndex++] = second[index2++];
    }

    // AGAIN CHECKING IF INDEX IS NOT GREATER THAN LENGTH
    while (index1 < len1)
        arr[mainArrayIndex++] = first[index1++];

    while (index2 < len2)
        arr[mainArrayIndex++] = second[index2++];

    // After dynamic allocation we should always free the memory
    delete[] first;
    delete[] second;
}

void mergeSort(int *arr, int start, int end)
{
    if (start >= end)
        return;

    int mid = start + (end - start) / 2;

    // left part sort krna h
    merge(arr, start, mid);

    // right part sort krna h
    merge(arr, mid + 1, end);

    // dono part merge
    merge(arr, start, end);
}

int main()
{
    int n;
    cout << "Enter size of the array : ";
    cin >> n;

    int array[n];

    cout << "Enter array elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    // APPLYING MERGE SORT ON THE ARRAY INPUTED
    mergeSort(array, 0, n - 1);

    cout << "Merge sorted Array : ";
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}


// MIHIRR42
