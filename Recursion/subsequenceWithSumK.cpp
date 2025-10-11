// class Solution {
//   public:
    
//     int solve(vector<int>& nums, int index, int sum, int target) {
//         if (index == nums.size()) {
//             if (sum == target) return 1;
//             else return 0;
//         }

//         // Exclude nums[index]
//         int l = solve(nums, index + 1, sum, target,ds);

//         // Include nums[index]
//         int r = solve(nums, index + 1, sum + nums[index], target,ds);
//         sum -= nums[index];

//         return l+r;
//     }

    
//     int perfectSum(vector<int>& nums, int target) {
//         
//         int count = solve(nums, 0, 0, target);
//         return count;
        
//     }
// };