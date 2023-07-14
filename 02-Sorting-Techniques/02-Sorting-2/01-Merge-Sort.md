# Merge Sort 

Merge sort is a divide-and-conquer sorting algorithm that works by dividing the input array into smaller halves, sorting them individually, and then merging the sorted halves to produce a sorted array. Here's an explanation of how the merge sort algorithm works in C++:


## Merge Sort Approach 
```cpp
1. Merge sort is a divide-and-conquer algorithm that recursively divides the input array into smaller halves.
2. The algorithm works by splitting the array into two halves until each half contains only one element (which is considered sorted).
3. It then merges the sorted halves by comparing elements from both halves and placing them in the correct order.
4. The merging process continues until the entire array is sorted.
5. The key step is the merge operation, where the algorithm compares elements from the two sorted halves and combines them into a single sorted sequence.
6. The merge operation is performed recursively, combining smaller sorted sequences into larger ones until the entire array is sorted.
7. Merge sort has a time complexity of O(n log n) in all cases, making it an efficient sorting algorithm for large datasets.
```
![image](https://github.com/shahbazalamjobs/Data-Structure-and-Algorithms/assets/125631878/00b7bac9-e964-415d-9652-444457a55e68)

```cpp
#include <iostream>
using namespace std;

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

    cout << "Original array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }

    mergeSort(arr, size);

    cout << "\nSorted array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }

    return 0;
}
```

In this code, we have a function called `merge` that merges two sorted subarrays, `left` and `right`, into a single sorted array `arr`. This merging process is done in-place.

The `mergeSort` function is the main entry point for the merge sort algorithm. It takes an array `arr` and its size `size` as arguments. The function follows the divide-and-conquer approach:
```cpp
1. Base Case: If the size of the array is less than or equal to 1, it is already sorted, so we return.
2. Divide: Split the array into two halves at the midpoint.
3. Recursively Sort: Call `mergeSort` on the left and right halves.
4. Merge: Merge the sorted left and right halves using the `merge` function.
5. Free Memory: Free the dynamically allocated memory for the temporary left and right arrays.
```
- The `merge` function compares the elements from the left and right subarrays and inserts them into the `arr` array in sorted order. It uses three indices (`i`, `j`, `k`) to keep track of the positions in the left, right, and merged arrays, respectively.
- Finally, in the `main` function, we initialize the input array, call `mergeSort` to sort it, and then print the sorted array.
- When you run this program, it will output the sorted array as follows:

Output:
```cpp
Original array: 64 25 12 22 11
Sorted array: 11 12 22 25 64
```

### Time Complexity 
1. Merge sort has a time complexity of O(n log n) in all cases.
2. The algorithm recursively divides the input array into halves until each half contains only one element, which takes O(log n) time.
3. The merging step, where the sorted halves are combined, takes O(n) time.
4. Since the merging step is performed log n times (due to the recursive nature of merge sort), the overall time complexity is O(n log n).
5. The time complexity of merge sort is stable and does not depend on the initial order of the elements in the array.

### Space Complexity
1. Merge sort has a space complexity of O(n) in the worst-case scenario.
2. The algorithm requires additional space to store the temporary arrays used during the merging process.
3. As the input size increases, the amount of additional space required grows linearly with the size of the input array.

