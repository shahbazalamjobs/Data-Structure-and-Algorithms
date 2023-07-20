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

![image](https://github.com/shahbazalamjobs/Data-Structure-and-Algorithms/assets/125631878/b53c4fcf-866d-41c3-bd22-7b461ae6154b)

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

**********

### Merge Sort using Vector
```cpp
#include <iostream>
#include <vector>

using namespace std;

// Merge two sorted subarrays into one sorted array
void merge(vector<int>& arr, int left, int middle, int right) {
    int i, j, k;
    int n1 = middle - left + 1;
    int n2 = right - middle;

    // Create temporary arrays
    vector<int> L(n1), R(n2);

    // Copy data to temporary arrays L and R
    for (i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[middle + 1 + j];

    // Merge the temporary arrays back into arr[left..right]
    i = 0;
    j = 0;
    k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of L and R, if any
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Merge Sort function
void mergeSort(vector<int>& arr, int left, int right) {
    if (left < right) {
        int middle = left + (right - left) / 2;

        // Sort first and second halves
        mergeSort(arr, left, middle);
        mergeSort(arr, middle + 1, right);

        // Merge the sorted halves
        merge(arr, left, middle, right);
    }
}

int main() {
    vector<int> arr = {38, 27, 43, 3, 9, 82, 10};
    int n = arr.size();

    cout << "Original Array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    mergeSort(arr, 0, n - 1);

    cout << "Sorted Array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
```

1. Merge Sort is a sorting algorithm that uses the "divide and conquer" approach to sort an array or a vector efficiently.
2. The `merge()` function is used to merge two sorted subarrays into one sorted array.
3. The `mergeSort()` function is the main function that recursively divides the vector into smaller subarrays and calls `merge()` to combine them back into a sorted array.
4. The `mergeSort()` function has three parameters: the vector to be sorted, the starting index of the subarray (`left`), and the ending index of the subarray (`right`).
5. Inside `mergeSort()`, if the `left` index is less than the `right` index, it calculates the middle index (`middle`) and calls `mergeSort()` recursively for the left and right halves of the vector.
6. The base case of the recursion is when the `left` index becomes greater than or equal to the `right` index, which means there's only one element in the subarray, and it's already sorted.
7. The `merge()` function takes the original vector, the indices of the two sorted subarrays (`left` to `middle` and `middle+1` to `right`), and merges them into one sorted array.
8. It creates two temporary vectors `L` and `R` to store the elements of the two subarrays.
9. The function then compares elements from `L` and `R` one by one and puts the smaller element back into the original vector.
10. After merging, the subarray from `left` to `right` becomes sorted.
11. Finally, in the `main()` function, we define an input vector, call `mergeSort()` to sort it, and then print the sorted array.
12. Merge Sort has a time complexity of O(n log n) and is a stable sorting algorithm, meaning equal elements retain their relative order in the sorted output.
