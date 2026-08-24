class Solution {
public:
    int search(vector<int>& nums, int target) {
        int st =0, end = nums.size()-1;

        while(st <= end){
            int mid = st + (end-st)/2;
            if (target == nums[mid]){
                return mid;
            }if (nums[st] <= nums[mid]){// left sorted
                if(nums[st] <= target && target <= nums[mid]){
                    end = mid-1;
                }else{
                    st = mid+1;
                }

            }else { //right sorted
               if (nums[mid]<= target&& target <= nums[end]){
                st = mid+1;
              }else{
                   end = mid-1;

               }
            } 

                
            
        }
        return -1;
    }
};



// # LeetCode 33 - Search in Rotated Sorted Array

// **Pattern:** Binary Search

// Approach
// Array originally sorted hai, lekin kisi point par rotate kiya gaya hai.
// Har iteration mein mid calculate karo.
// nums[st] <= nums[mid] se identify karo ki left half sorted hai.
// Agar left half sorted hai:
// Check karo target [st, mid) range mein hai ya nahi.
// Hai → end = mid - 1
// Nahi → st = mid + 1
// Agar left half sorted nahi hai, iska matlab right half sorted hai.
// Check karo target (mid, end] range mein hai ya nahi.
// Hai → st = mid + 1
// Nahi → end = mid - 1
// Target mil jaaye → mid return.
// Loop khatam ho jaaye → -1 return.

// **Time Complexity:** O(log n)

// **Space Complexity:** O(1)

// **Key Point:**  
// Identify the sorted half → check target range → eliminate one half → repeat.
