#include <iostream>
using namespace std;

void insertion_Sort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {

        int key = arr[i]; // Select key element to be inserted
        int j = i - 1;

        // Move elements of the sorted part to make room for the key
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        // Inserting key element into its correct position
        arr[j + 1] = key;
    }
}

int main()
{
    int arr[] = {20, 4, 30, 55, 11, 7, 40};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << " Original Array: ";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    insertion_Sort(arr, size);

    cout << "\n Sorted Array: ";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}