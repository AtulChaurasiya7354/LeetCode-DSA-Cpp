class Solution {
public:
    int singleNonDuplicate(vector<int>& A) {
        int n = A.size();
        int st = 0, end =n-1;
        if (n==1) return A[0];// agar array size 1 hi rhe to direct return this element

        while(st <= end){
            int mid = st + (end-st)/2;
            if (mid == 0 && A[0] != A[1]) return A[mid]; // agar kbhi koi question m mid=0 hota h 
            if (mid == n-1 && A[n-1] != A[n-2]) return A[mid];// agar koi question m mid=n-1 hota h

            if (A[mid-1]!=A[mid] && A[mid]!=A[mid+1]) return A[mid]; //che`ck mid is single element aur not 

            if (mid % 2 == 0){ // even array
                if (A[mid]==A[mid-1]){// left me milega answer
                    end = mid - 1;
                }else {// right m
                    st = mid + 2;
                }
            }
            else{//odd index
                if (A[mid] == A[mid-1]){//right m
                    st = mid+1;
                }else {//left m
                    end = mid - 1;
                }
            }
        }

        return -1;
            
        
    }
};


// # LeetCode 540 - Single Element in a Sorted Array

// **Pattern:** Binary Search

// **Approach:**  
// The array is sorted and every element appears exactly twice except one element. Use binary search to find the single element.

// Check the neighbors of `mid`. If `A[mid]` is different from both neighbors, it is the single element.

// Otherwise, use the index parity:
// - At an even index, the pair should normally start at `mid - 1` / `mid` or `mid` / `mid + 1`.
// - At an odd index, check the pairing pattern and decide whether to move left or right.
// - Continue reducing the search space until the single element is found.

// **Time Complexity:** O(log n)

// **Space Complexity:** O(1)

// **Key Point:**  
// Sorted array + every element appears twice except one → use Binary Search with index parity.

// **Pattern:** Binary Search + Even/Odd Index
