// class Solution {
// public:
//     vector<int> productExceptSelf(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> output;
//         for(int i=0; i<n; i++){
//             int product = 1;
//             for(int j=0; j<n; j++){
//                 if(i == j) continue;
//                 product *= nums[j];
//             }
//             output.push_back(product);
//         }
//         return output;
//     }
// }; BruteForce Approach (Nested Loops)

// Optimized Approach - Dynamic Programming(Space Optimization) T-O(N) S-O(1)

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> output(n);
        output[0] = 1;
        for(int i=1; i<n; i++){
            output[i] = output[i-1] * nums[i-1];
        }
        int right = 1;
        for(int i=n-1; i>=0; i--){
            output[i] *= right;
            right *= nums[i];
        }
        return output;
    }
};