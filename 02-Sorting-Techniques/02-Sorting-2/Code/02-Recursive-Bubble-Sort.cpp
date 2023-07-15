
#include <iostream>
using namespace std;

void bubbleSortRecursive(int arr[], int n)
{
    // Base case: for one element or empty Array
    if (n <= 1)
    {
        return;
    }

    // One pass of bubble sort
    for (int i = 0; i < n - 1; i++)
    {
        // Compare adjacent elements and swap if necessary
        if (arr[i] > arr[i + 1])
        {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }

    // Recursively call bubbleSortRecursive on the remaining unsorted portion
    bubbleSortRecursive(arr, n - 1);
}

int main()
{
    int arr[] = {5, 2, 8, 12, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    bubbleSortRecursive(arr, n);

    cout << "\nSorted Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
