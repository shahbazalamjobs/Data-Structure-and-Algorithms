// Largest element in Array My Solution
class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        // int i;
        // n = arr.size();    // Dont need to do this as it is already specified in problems than function take n as size
        int max = arr[0];  // Or we can use max = INT_MIN
        for(int i = 1; i < n; i++)
        {
            if(arr[i] > max)
            {
                max = arr[i];
            }
        }
        return max;
    }
};

// Others

// 1
class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        int l=arr[0];
        for(int i=0;i<n;i++){
            if(arr[i]>l){
                l=arr[i];
            }
        }
        return l;
        
    }
    
};

// 2
class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        int maxi=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>maxi)
            {
                maxi=arr[i];
            }
        }
        return maxi;
    }
};

// 3
class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        int mx = 0;
        for(auto &i : arr) mx = max(mx, i);
        return mx;
    }
};
