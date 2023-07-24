// Check if array is sorted 

//My soilution 
// TC O(N) , TC O(1)
class Solution {
public:
    bool arraySortedOrNot(int arr[], int n) {
        // Single element is always sorted
        if (n == 1 || n == 0)    // code will work with this if statement 
        {
            return true;
        }

        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                return false;
            }
        }

        // If the loop completes without finding any decreasing element, then array is sorted
        return true;
    }
};

//Others

//1
// User function template for C++

class Solution {
  public:
    bool arraySortedOrNot(int arr[], int n) {
        // code here
        int i;
       for( i=1;i<n;i++)  // if  input given n = 1; and arr[0] = 15; then how does this satisfy condition of i = 1; i < 1;
       {
           if(arr[i] < arr[i-1])
            return false;
       }
       return true;
    }
};

//2

// Approach: Brute Force
- The idea is pretty simple here, We will start with the element at the 0th index, and will compare it with all of its future elements that are present in the array.
- If the picked element is smaller than or equal to all of its future values then we will move to the next Index/element until the whole array is traversed.
- If any of the picked elements is greater than its future elements, Then simply we will return False.
- If the size of the array is Zero or One i.e ( N = 0 or N = 1 ) or the entire array is traversed successfully then we will simply return True.
- TC: O(n^2) , SC: O(1)
    
bool isSorted(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[i])
        return false;
    }
  }

  return true;
}
