// class Solution {
//   public:
//     // Function to return the position of the first repeating element.
//     int firstRepeated(vector<int> &arr) {
//         int ans  = -1 ;
//         for(int i =0;i<arr.size();i++){
//             int curr_elem = arr[i];   
            
//             for(int j = i+1;j<arr.size();j++){
//                 if(curr_elem==arr[j]){
//                     ans = i;
//                     break;
//                 }
//             }
            
//             if(ans!=-1){
//                 break;
//             }
//         }
        
//         //ans+1 becuz we want 1 base indexing 
//         return ans ==-1 ? -1 : ans+1;
//     }
// };

