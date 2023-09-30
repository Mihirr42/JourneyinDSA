#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size)
{

    for (int i = 1; i < size; i++)
    {

        bool swapped = false;
        for (int j = 0; j < size - i; j++)
        {
            if (arr[j] > arr[j + 1])                       // TIME COMPLEXITY = O(n^2)
            {                                             // SPACE COMPLEXITY = O(1)
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
    
}


//MIHIRR42
