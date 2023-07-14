# Insertion Sort Algorithm

```cpp
Example 1:
Input: N = 6, array[] = {13,46,24,52,20,9}
Output: 9,13,20,24,46,52
Explanation: 
After sorting the array is: 9,13,20,24,46,52


Example 2:
Input: N=5, array[] = {5,4,3,2,1}
Output: 1,2,3,4,5
Explanation: After sorting the array is: 1,2,3,4,5
```
```
Certainly! Here's a concise summary of the insertion sort algorithm:

1. Insertion sort maintains a sorted portion and an unsorted portion.
2. It iterates through the unsorted portion, inserting each element into its correct position within the sorted portion.
3. Elements in the sorted portion are shifted to the right if they are larger than the current element.
4. The algorithm repeats this process until the entire list becomes sorted.
5. Insertion sort is an in-place algorithm and stable.
6. It has a time complexity of O(n^2), making it inefficient for large lists.
7. Insertion sort performs well on partially sorted or small lists.
8. It requires approximately n^2/2 comparisons and swaps in the worst case, where n is the number of elements.
9. Insertion sort is often used for small lists or as a component of more complex algorithms.
```

![image](https://github.com/shahbazalamjobs/Data-Structure-and-Algorithms/assets/125631878/014167ce-d1c2-45e0-aae3-9069d9eae907)

Insertion sort is a simple sorting algorithm that works by building a sorted portion of the array from left to right.
It repeatedly takes an element from the unsorted part of the array and inserts it into its correct position within the sorted part of the array. 


```cpp
#include <iostream>

using namespace std;

void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; ++i) {
        int key = arr[i]; // Select the key element to be inserted
        int j = i - 1;

        // Move elements of the sorted part to make room for the key
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            --j;
        }

        // Insert the key element into its correct position
        arr[j + 1] = key;
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }

    insertionSort(arr, size);

    cout << "\nSorted array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }

    return 0;
}
```

In this code, we have a function called `insertionSort` that takes an array (`arr`) and its size (`size`) as arguments. The `insertionSort` function performs the insertion sort algorithm on the given array.

The outer loop (`for` loop with variable `i`) iterates from the second element of the array to the last element. For each iteration, we select the key element to be inserted into its correct position in the sorted part of the array.

The inner loop (`while` loop with variable `j`) starts from the element just before the key element and compares it with the key element. If the element is greater than the key, we move the element to the right to make room for the key. This shifting process continues until we find the correct position for the key element.

After finding the correct position, we insert the key element into its place in the sorted part of the array.

After completing the sorting process, we print the sorted array in the `main` function using a `for` loop.

When you run this program, it will output the sorted array as follows:

```cpp
Original array: 64 25 12 22 11
Sorted array: 11 12 22 25 64
```

