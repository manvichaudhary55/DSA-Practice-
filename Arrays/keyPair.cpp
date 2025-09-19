// //brute force 
// //{ Driver Code Starts

// class Solution {
//   public:
//     // Function to check if array has 2 elements
//     // whose sum is equal to the given value
//     bool hasArrayTwoCandidates(vector<int>& arr, int x) {
//         int sum = 0;

//         for(int i = 0; i<arr.size(); i++){
//             for(int j = i+1 ;j<arr.size(); j++){
//                 if(arr[i] + arr[j] == x){
//                     return true;
//                 }
//             }
//         }
//         return false;
//     }
// };

