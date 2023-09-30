#include <iostream>
using namespace std;

void insertionSort(int arr[], int size)
{

    for (int i = 1; i < size; i++)
    {

        int temp = arr[i];
        int j = i - 1;

        for (; j >= 0; j--)                                          // TIME COMPLEXITY = O(n^2)
        {                                                           // SPACE COMPLEXITY = O(1)
            if (arr[j] > temp)
                arr[j + 1] = arr[j];

            else
                break;
        }
        arr[j + 1] = temp;
    }

}


//MIHIRR42
