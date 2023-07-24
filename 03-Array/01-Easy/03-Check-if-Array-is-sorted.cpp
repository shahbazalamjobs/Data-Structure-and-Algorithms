// Check if array is sorted 

//My soilution 

class Solution {
public:
    bool arraySortedOrNot(int arr[], int n) {
        // Single element is always sorted
        if (n == 1 || n == 0)
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
