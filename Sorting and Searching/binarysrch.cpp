#include <iostream>
using namespace std;

// BINARY SEARCH ALGORITHM
int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    // LOOP FOR COMPARING THE KEY ELEMENT WITHIN THE ARRAY
    while (start <= end)
    {
        if (key == arr[mid])                                                    
            return mid;                                                         
            
        else if (key > arr[mid])                                                // TIME COMPLEXITY = O(log N)                                                
            start = mid + 1;                                                    // SPACE COMPLEXITY = O(1)

        else
            end = mid - 1;

        mid = start + (end - start) / 2;    // RESETTING THE MID POSITION
    }
    return -1;                              // IF KEY NOT FONUD
}

// USER INPUT 
int main()
{
    int size;
    cout << "Enter size of the array : ";
    cin >> size;

    int array[size];

    cout << "Enter array elements : ";
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    int key;
    cout << "Enter the key element to search in array : ";
    cin >> key;

    int index = binarySearch(array, size, key);
    cout << "Index of " << key << " is " << index << endl;

    cout << "Array : ";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}


//MIHIRR42
