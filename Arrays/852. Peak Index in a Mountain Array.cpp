class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int st =1, end = A.size()-2;
       

        while(st <= end){
            int mid = st+(end-st)/2;
            if (A[mid-1] < A[mid] &&  A[mid] > A[mid+1]){
                return mid;
            }
            else if (A[mid] > A[mid-1]){ //Right me jana h seach krne
                st = mid+1;
            }else { // left m jana h
                end = mid - 1;
            }
        }
        return -1;
    }
};

// time : O(log(n)) 

// # LeetCode 852 - Peak Index in a Mountain Array

// **Pattern:** Binary Search

// **Approach:**  
// A mountain array first increases and then decreases. Use binary search to find the peak. If `A[mid] > A[mid-1]`, we are on the increasing side, so the peak lies on the right. Otherwise, we are on the decreasing side, so the peak lies on the left. If `A[mid]` is greater than both neighbors, it is the peak.

// **Time Complexity:** O(log n)

// **Space Complexity:** O(1)

// **Key Point:**  
// Increasing side → move right  
// Decreasing side → move left  
// Greater than both neighbors → Peak
