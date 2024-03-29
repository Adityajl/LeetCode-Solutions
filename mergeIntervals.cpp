class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> output;
        for(auto interval : intervals){
            if(output.empty() || output.back()[1] < interval[0]){
                output.push_back(interval);
            }
            else{
                output.back()[1] = max(output.back()[1], interval[1]);
            }
        }
        return output;
    }
};


// First, we will group the closer intervals by sorting the given array of intervals(if it is not already sorted).
// After that, we will start traversing the array using a loop(say i) and insert the first element into our answer list(as the answer list is empty).
// Now, while traversing we will face two different cases:
// Case 1: If the current interval can be merged with the last inserted interval of the answer list:
// In this case, we will update the end of the last inserted interval with the maximum(current interval’s end, last inserted interval’s end) and continue moving afterward. 
// Case 2: If the current interval cannot be merged with the last inserted interval of the answer list:
// In this case, we will insert the current interval in the answer array as it is. And after this insertion, the last inserted interval of the answer list will obviously be updated to the current interval.
// Thus the answer list will be updated with the merged intervals and finally, we will return the answer list.


// #include <bits/stdc++.h>
// using namespace std;

// vector<vector<int>> mergeOverlappingIntervals(vector<vector<int>> &arr) {
//     int n = arr.size(); // size of the array

//     //sort the given intervals:
//     sort(arr.begin(), arr.end());

//     vector<vector<int>> ans;

//     for (int i = 0; i < n; i++) {
//         // if the current interval does not
//         // lie in the last interval:
//         if (ans.empty() || arr[i][0] > ans.back()[1]) {
//             ans.push_back(arr[i]);
//         }
//         // if the current interval
//         // lies in the last interval:
//         else {
//             ans.back()[1] = max(ans.back()[1], arr[i][1]);
//         }
//     }
//     return ans;
// }

// int main()
// {
//     vector<vector<int>> arr = {{1, 3}, {8, 10}, {2, 6}, {15, 18}};
//     vector<vector<int>> ans = mergeOverlappingIntervals(arr);
//     cout << "The merged intervals are: " << "\n";
//     for (auto it : ans) {
//         cout << "[" << it[0] << ", " << it[1] << "] ";
//     }
//     cout << endl;
//     return 0;
// }
