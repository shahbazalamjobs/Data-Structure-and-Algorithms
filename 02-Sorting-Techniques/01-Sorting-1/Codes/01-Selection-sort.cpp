#include <iostream>
using namespace std;

void selection_sort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int min_Index = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min_Index])
            {
                min_Index = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[min_Index];
        arr[min_Index] = temp;
    }
}

int main()
{
    int arr[] = {5, 8, 7, 1, 3, 4, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout<< "\n";    

    selection_sort(arr, size);

    cout << "New Array: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}