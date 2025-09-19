// class Solution {
// public:
// int solve(vector<int> &nums,int size,int index){
//     if(index>=size){
//         return 0;
//     }
//     int include = nums[index] +  solve(nums,size,index+2);
//     int exclude = 0 + solve(nums,size,index+1);

//     return max(include,exclude);

//     }
//     int rob(vector<int>& nums) {
//         int index = 0 ;
//         int ans = solve(nums,nums.size(),index);
//         return ans;
//     }
// };