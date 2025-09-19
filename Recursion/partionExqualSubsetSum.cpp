// class Solution {
// public:

//     bool solve(vector<int> &nums,int size,int index,int targetSum){
//         if(index==size || targetSum<0){
//             return false;
//         }
//         if(targetSum==0){
//             return true;
//         }
    
//         bool include = solve(nums,size,index+1,targetSum-nums[index]);
//         bool exclude = solve(nums,size,index+1,targetSum);

//         return (include || exclude);
//     }   

//     bool canPartition(vector<int>& nums) {
//         int sum = accumulate(nums.begin(),nums.end(),0);
//         int index = 0;
//         if(!(sum%2==0)){
//             return false;
//         }
//         int targetSum = sum >> 1;

//         return solve(nums,nums.size(),index,targetSum); 
//     }
// };