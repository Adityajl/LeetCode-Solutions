// Using Binary Search

// Initially have a low index as the first index of the considered 1D matrix(i.e: 0) and high index as the last index of the considered 1D matrix(i.e: (m*n)-1).

// int low = 0;
// int  high = (m*n)-1;
// ii) Now apply binary search. Run a while loop with the condition low<=high. Get the middle index as (low+high)/2.We can get the element at middle index using matrix[middle/m][middle%m].

// while(low<=high)
//     int middle = (low+high)/2;
// iii) If the element present at the middle index is greater than the target, then it is obvious that the target element will not exist beyond the middle index. So shrink the search space by updating the high index to middle-1. 

// if(matrix[middle/m][middle%m]<target)
//     high = middle-1;
// iv) If the middle index element is lesser than the target, shrink the search space by updating the low index to middle+1.

// if(matrix[middle/m][middle%m]>target)
//     low = middle+1;
// v) If the middle index element is equal to the target integer, return true.

// if(matrix[middle/m][middle%m]==target)
//     return true;
// vi) Once the loop terminates we can directly return false as we did not find the target element.

// Code:

// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int lo = 0;
//         if(!matrix.size()) return false;
//         int hi = (matrix.size() * matrix[0].size()) - 1;
        
//         while(lo <= hi) {
//             int mid = (lo + (hi - lo) / 2);
//             if(matrix[mid/matrix[0].size()][mid % matrix[0].size()] == target) {
//                 return true;
//             }
//             if(matrix[mid/matrix[0].size()][mid % matrix[0].size()] < target) {
//                 lo = mid + 1;
//             }
//             else {
//                 hi = mid - 1;
//             }
//         }
//         return false;
//     }
// };
// Time complexity: O(log(m*n))

// Space complexity: O(1)