// Remove duplicate elements from sorted Array

//My Solution - Pass All test cases
class Solution{
public:
    int remove_duplicate(int a[],int n){
        
        int uniqueCount = 0;

        for (int i = 0; i < n; i++) {
            // If the current element is the first occurrence of a unique element
            if (i == 0 || a[i] != a[i - 1]) {
                a[uniqueCount++] = a[i]; // Overwrite duplicate with unique element
            }
        }
        return uniqueCount;
    }
};


// My solution but timeout so doesnot pass some test cases
class Solution{
public:
    int remove_duplicate(int a[],int n){
        
        int uniqueCount = 0;

        for (int i = 0; i < n; i++) {
            if (a[i] != -1) {
                uniqueCount++;
                for (int j = i + 1; j < n; j++) {
                    if (a[i] == a[j]) {
                        a[j] = -1; // Mark duplicate elements as -1
                    }
                }
            }
        }

        // Rearrange the array to contain only unique elements at the beginning
        int nextIndex = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] != -1) {
                a[nextIndex++] = a[i];
            }
        }

        return uniqueCount;
    }
};


//Others 
// 1

class Solution{
public:
    int remove_duplicate(int a[],int n){
        int j=0,i=0;
        for(i=0; i<n; i++){
            if(j>=n){
                return i;
            }
            while(a[i]==a[j]){
                j++;
            }
            a[i+1]=a[j];
            
        }
        return i;
    }
};

//2

/*
Recursive approach

1: If size of array is zero or one, return true.
2: Check last two elements of array, if they are sorted, perform a recursive call with n-1 else, return false.
If all the elements will be found sorted, n will eventually fall to one, satisfying Step 1.
*/

#include <bits/stdc++.h>
using namespace std;

// Function that returns 0 if a pair is found unsorted
int arraySortedOrNot(int arr[], int n)
{
	// Array has one or no element or the rest are already checked and approved.
	if (n == 1 || n == 0)
		return 1;

	// Unsorted pair found (Equal values allowed)
	if (arr[n - 1] < arr[n - 2])
		return 0;

	// Last pair was sorted Keep on checking
	return arraySortedOrNot(arr, n - 1);
}

// Driver code
int main()
{
	int arr[] = { 20, 23, 23, 45, 78, 88 };
	int n = sizeof(arr) / sizeof(arr[0]);
	if (arraySortedOrNot(arr, n))
		cout << "Yes\n";
	else
		cout << "No\n";
}


