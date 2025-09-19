// // Method 1 - Brute Force 
// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         int expectedSum = 0;
//         int actualSum = 0;
//         for(int i = 0 ;i<=nums.size();i++){
//             expectedSum = expectedSum + i;
//         }

//         for(int j = 0;j<nums.size();j++){
//             actualSum = actualSum + nums[j];
//         }
        
//         return expectedSum-actualSum;
//     }
// };




// //Method 2 
// class Solution {
// public:
// // Method 2 
//     int solve(vector<int>& nums){
//         sort(nums.begin(),nums.end());
//         for(int i = 0;i<nums.size();i++){
//             if(i!=nums[i]){
//                 return i ;
//             }
//         }
//         //Edge Case 
//         return nums.size();
//     }

//     int missingNumber(vector<int>& nums) {
//         return solve(nums);
//     }
// };




// // Method 3 - Bit Manipulation 
// class Solution {
// public:

// int solve(vector<int>& nums){
//     int ans = 0;

//     //Step 1 - xor all elements 
//     for(int i = 0;i<nums.size();i++){
//         ans ^= nums[i];
//     }

//     //Step 2 - Xor all range
//     for(int i = 0;i<=nums.size();i++){
//         ans ^= i;
//     }

//     return ans ;
// }

//     int missingNumber(vector<int>& nums) {
//     return solve(nums);
//     }
// };