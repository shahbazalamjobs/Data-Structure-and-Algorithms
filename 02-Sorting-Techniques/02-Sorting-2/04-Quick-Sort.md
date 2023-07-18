## Quick Sort

- QuickSort is a widely used sorting algorithm that follows the divide-and-conquer approach. 
- It works by selecting a pivot element from the array and partitioning the other elements into two sub-arrays based on whether they are less than or greater than the pivot. 
- The process is then repeated recursively on the sub-arrays until the entire array is sorted.

```cpp
#include <iostream>

using namespace std;

// Function to swap two elements in the array
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Partition function that selects a pivot and partitions the array
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // Choose the last element as the pivot
    int i = low - 1; // Index of the smaller element

    for (int j = low; j <= high - 1; j++) {
        // If the current element is smaller than or equal to the pivot
        if (arr[j] <= pivot) {
            i++; // Increment index of the smaller element
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[i + 1], &arr[high]);
    return i + 1; // Return the partitioning index
}

// Recursive function to perform QuickSort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // Partition the array and get the partitioning index
        int pivotIndex = partition(arr, low, high);

        // Recursively sort elements before and after the partition
        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}

// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {7, 2, 1, 6, 8, 5, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, n);

    quickSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}
```

Approch

1. The code implements the QuickSort algorithm, which follows a divide-and-conquer strategy to sort an array efficiently.
2. The `partition` function selects a pivot (in this case, the last element of the array) and partitions the other elements into two sub-arrays based on their relation to the pivot.
3. The `quickSort` function recursively applies the partitioning and sorting process to the sub-arrays until the entire array is sorted.
4. The `swap` function is used to swap two elements in the array.
5. The `main` function initializes an array, calls the `quickSort` function to sort the array, and then prints the original and sorted arrays.

