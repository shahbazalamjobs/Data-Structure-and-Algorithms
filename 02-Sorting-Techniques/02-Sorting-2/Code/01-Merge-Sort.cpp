#include <iostream>
using namespace std;

void merge(int arr[], int left[], int leftSize, int right[], int rightSize)
{
    int i = 0; // index for left array
    int j = 0; // index for right array
    int k = 0; // index for merged array

    while (i < leftSize && j < rightSize)
    {
        if (left[i] <= right[j])
        {
            arr[k] = left[i];
            i++;
        }

        else
        {
            arr[k] = right[j];
            j++;
        }

        k++;
    }

    // Printing remaining elements

    while (i < leftSize)
    {
        arr[k] = left[i];
        i++;
        k++;
    }

    while (j < rightSize)
    {
        arr[k] = right[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int size)
{

    // Base Case: Already Sorted
    if (size <= 1)
    {
        return;
    }

    int mid, leftSize, rightSize;

    mid = size / 2;
    leftSize = mid;
    rightSize = size - mid;

    int *left = new int[leftSize];
    int *right = new int[rightSize];

    // Divide Array in two halves
    for (int i = 0; i < mid; i++)
    {
        left[i] = arr[i];
    }

    for (int i = mid; i < size; i++)
    {
        right[i - mid] = arr[i];
    }

    // Again sorting array in two halfes till becomes single element
    mergeSort(left, leftSize);
    mergeSort(right, rightSize);

    // Merging the array halves in sorted array
    merge(arr, left, leftSize, right, rightSize);

    // Free the allocated memory after use
    delete[] left;
    delete[] right;
}

int main()
{
    int arr[] = {20, 5, 44, 11, 3, 19, 60};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    mergeSort(arr, size);

    cout << "\nSorted Array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
