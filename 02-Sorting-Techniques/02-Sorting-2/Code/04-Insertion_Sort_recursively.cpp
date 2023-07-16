#include <iostream>
using namespace std;

void insertion_Sort_Recursion(int arr[], int size)
{
    // Base case, array already sorted or array is empty
    if (size <= 1)
    {
        return;
    }

    // Calling recursive function to first sort n - 1 elements
    insertion_Sort_Recursion(arr, size - 1);

    int last = arr[size - 1];
    int j = size - 2;

    // Move elements of arr[0..i-1], that are greater than key,
    // to one position ahead of their current position while (j >= 0 && arr[j] > last)
    {
        arr[j + 1] = arr[j];
        j--;
    }

    // Inserting the last element is proper position
    arr[j + 1] = last;
}

int main()
{

    int arr[] = {3, 35, 20, 7, 2, 15};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    insertion_Sort_Recursion(arr, size);

    cout << "\nSorted Array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
