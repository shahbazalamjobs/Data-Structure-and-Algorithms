// Second Largest distinct element in array

// My solution
class Solution{
    public:	

    	int print2largest(int arr[], int n) {
            int max1 = INT_MIN;
            int max2 = INT_MIN;
                
            for (int i = 0; i < n; i++)
            {
                if(arr[i] > max1)
                {
                    max1 = arr[i];
                }        
            }
                        
            for (int i = 0; i < n; i++)
            {
                if (arr[i] > max2 && arr[i] != max1)
                {
                    max2 = arr[i];
                }
            }
            
            if(max2 != INT_MIN) 
                return max2;
            else
                return -1;
    	}
};

// Code Understanding
/*
      if(max2 != INT_MIN) 
        return max2;
    else
        return -1;
        
    initially max2 = INT_MIN
    
    let arr = { 5, 5, 5, 5, 7, 7}  
    Here max1 = 7
    max2 = 5        -> as 5 > INT_MIN and 5 != max1

*/

// Others solution

//1
//User function template for C++
class Solution{
public:	
	// Function returns the second largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    int first, second;
	    first = second = -1;
	    for(int i = 0; i < n; i++){
	        first = first < arr[i] ? arr[i] : first;
	    }
	    for(int i = 0; i < n; i++){
	        if(arr[i] > second && arr[i] < first) second = arr[i];
	    }
	    return second;
	}
};

//2
//User function template for C++
class Solution{
public:	
	// Function returns the second largest elements
	int print2largest(int arr[], int n) {
	    int largest = arr[0];
	    int secondLargest = -1;
	    
	    for (int i=1; i<n; i++) {
	        if (arr[i] > largest) {
	            secondLargest = largest;
	            largest = arr[i];
	        }
	        else if (arr[i] > secondLargest && arr[i] != largest) {
	            secondLargest = arr[i];
	        }
	    }
	    return secondLargest;
	}
};

// 3
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    
	    sort(arr,arr+n);
	    int d=arr[n-1],i=n-2;
	   
	    while(i>=0 && arr[i]==d)
	        i--;
	   
	   if(i==-1)
	        return -1;
	   
	   return arr[i];
	}
};
