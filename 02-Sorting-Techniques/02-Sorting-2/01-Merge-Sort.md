# Merge Sort 

Merge sort is a divide-and-conquer sorting algorithm that works by dividing the input array into smaller halves, sorting them individually, and then merging the sorted halves to produce a sorted array. Here's an explanation of how the merge sort algorithm works in C++:

```cpp
#include <iostream>

void merge(int arr[], int left[], int leftSize, int right[], int rightSize) {
    int i = 0; // Index for the left subarray
    int j = 0; // Index for the right subarray
    int k = 0; // Index for the merged array

    // Merge the two subarrays in sorted order
    while (i < leftSize && j < rightSize) {
        if (left[i] <= right[j]) {
            arr[k] = left[i];
            ++i;
        } else {
            arr[k] = right[j];
            ++j;
        }
        ++k;
    }

    // Copy the remaining elements from the left subarray
    while (i < leftSize) {
        arr[k] = left[i];
        ++i;
        ++k;
    }

    // Copy the remaining elements from the right subarray
    while (j < rightSize) {
        arr[k] = right[j];
        ++j;
        ++k;
    }
}

void mergeSort(int arr[], int size) {
    if (size <= 1) {
        return; // Base case: Already sorted
    }

    int mid = size / 2;
    int leftSize = mid;
    int rightSize = size - mid;

    int* left = new int[leftSize];
    int* right = new int[rightSize];

    // Divide the array into two halves
    for (int i = 0; i < mid; ++i) {
        left[i] = arr[i];
    }
    for (int i = mid; i < size; ++i) {
        right[i - mid] = arr[i];
    }

    // Recursively sort the two halves
    mergeSort(left, leftSize);
    mergeSort(right, rightSize);

    // Merge the sorted halves
    merge(arr, left, leftSize, right, rightSize);

    // Free the dynamically allocated memory
    delete[] left;
    delete[] right;
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Original array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }

    mergeSort(arr, size);

    std::cout << "\nSorted array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }

    return 0;
}
```

In this code, we have a function called `merge` that merges two sorted subarrays, `left` and `right`, into a single sorted array `arr`. This merging process is done in-place.

The `mergeSort` function is the main entry point for the merge sort algorithm. It takes an array `arr` and its size `size` as arguments. The function follows the divide-and-conquer approach:

1. Base Case: If the size of the array is less than or equal to 1, it is already sorted, so we return.

2. Divide: Split the array into two halves at the midpoint.

3. Recursively Sort: Call `mergeSort` on the left and right halves.

4. Merge: Merge the sorted left and right halves using the `merge` function.

5. Free Memory: Free the dynamically allocated memory for the temporary left and right arrays.

The `merge` function compares the elements from the left and right subarrays and inserts them into the `arr` array in sorted order. It uses three indices (`i`, `j`, `k`) to keep track of the positions in the left, right, and merged arrays, respectively.

Finally, in the `main` function, we initialize the input array, call `mergeSort` to sort it, and then print the sorted array.

When you run this program, it will output the sorted array as follows:

```
Original array: 64 25 12 22 11
Sorted array: 11 12 22 25 64
```

This demonstrates the merge sort algorithm's ability to sort an array in ascending order.
