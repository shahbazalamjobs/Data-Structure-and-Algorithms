# Selection Sort

```cpp
Example 1:
Input: N = 6, array[] = {13,46,24,52,20,9}
Output: 9,13,20,24,46,52
Explanation: After sorting the array is: 9, 13, 20, 24, 46, 52

Example 2:
Input: N=5, array[] = {5,4,3,2,1}
Output: 1,2,3,4,5
Explanation: After sorting the array is: 1, 2, 3, 4, 5
```


Selection sort approach:
```cpp

1. The selection sort algorithm repeatedly finds the minimum element from the unsorted part of the array.
2. It starts with the first element and searches for a smaller element in the remaining unsorted part.
3. When a smaller element is found, it is swapped with the current element.
4. This process continues, gradually reducing the unsorted part until the entire array is sorted.
5. The algorithm repeats these steps until the second-to-last element, as the last element is already in its correct position.
6. The provided code demonstrates this algorithm by sorting an example array in ascending order.
7. The sorted array is printed for verification.
```
![image](https://github.com/shahbazalamjobs/Data-Structure-and-Algorithms/assets/125631878/42a7a6ff-c9af-4c84-b2eb-9179d117c20f)


Selection sort is a simple sorting algorithm that works by repeatedly finding the minimum element from the unsorted part of an array and swapping it with the element at the beginning of the unsorted part. This process is repeated until the entire array is sorted.

Here's an explanation of the selection sort algorithm implemented in C++:

```cpp
#include <iostream>
using namespace std;

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        // Find the minimum element in the unsorted part of the array
        int minIndex = i;
        for (int j = i + 1; j < size; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the minimum element with the first element in the unsorted part
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }

    selectionSort(arr, size);

    cout << "\nSorted array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }

    return 0;
}
```

- In the selectionSort function, the outer loop iterates over the array from the beginning to the second-to-last element. For each iteration, it assumes the current element is the minimum and searches for a smaller element in the unsorted part of the array.

- The inner loop starts from i+1 and compares each subsequent element with the assumed minimum. If a smaller element is found, the index of that element is stored in minIndex.

- After finding the minimum element, a swap is performed between the current element (arr[i]) and the minimum element (arr[minIndex]). This places the minimum element in its correct sorted position at the beginning of the unsorted part.

- The process continues until the entire array is sorted, resulting in the array being sorted in ascending order.

- In the main function, an example array {64, 25, 12, 22, 11} is used. The size of the array is calculated, and then the original and sorted arrays are printed for verification.


The output of the program will be:

```cpp
Original array: 64 25 12 22 11
Sorted array: 11 12 22 25 64
```
**********

### Time Complexity
- The time complexity of the selection sort algorithm is O(n^2), where n is the size of the input array.
- The outer loop iterates n-1 times, representing the number of passes through the array. In each pass, the algorithm searches for the minimum element in the remaining unsorted part of the array using the inner loop. The inner loop iterates (n-i-1) times, where i is the index of the current pass.
- To analyze the time complexity, we can consider the worst-case scenario, where the input array is in reverse order. In this case, the inner loop will iterate (n-1) times in the first pass, (n-2) times in the second pass, and so on until it iterates only once in the last pass.
- The total number of comparisons and swaps performed by the selection sort algorithm can be expressed as:
` (n-1) + (n-2) + (n-3) + ... + 2 + 1 `
- This is an arithmetic series, and its sum can be calculated as (n^2 - n) / 2.
- However, in Big O notation, we drop the constant factors and lower-order terms. Therefore, the time complexity of the selection sort algorithm is O(n^2).
- It's important to note that selection sort is not considered an efficient algorithm for large datasets due to its quadratic time complexity. Other sorting algorithms like quicksort, mergesort, or heapsort generally provide better performance for larger inputs.
- Space complexity: O(1)
