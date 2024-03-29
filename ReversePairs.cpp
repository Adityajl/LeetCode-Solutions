// The steps are basically the same as they are in the case of the merge sort algorithm. The change will be just in the mergeSort() function:

// In order to count the number of pairs, we will keep a count variable, cnt, initialized to 0 beforehand inside the mergeSort().
// We will add the numbers returned by the previous mergeSort() calls.
// Before the merge step, we will count the number of pairs using a function, named countPairs().
// We need to remember that the left half starts from low and ends at mid, and the right half starts from mid+1 and ends at high.
// The steps of the countPairs() function will be as follows:

// We will declare a variable, cnt, initialized with 0.
// We will run a loop from low to mid, to select an element at a time from the left half.
// Inside that loop, we will use another loop to check how many elements from the right half can make a pair.
// Lastly, we will add the total number of elements i.e. (right-(mid+1)) (where right = current index), to the cnt and return it.


// #include <bits/stdc++.h>
// using namespace std;

// void merge(vector<int> &arr, int low, int mid, int high) {
//     vector<int> temp; // temporary array
//     int left = low;      // starting index of left half of arr
//     int right = mid + 1;   // starting index of right half of arr

//     //storing elements in the temporary array in a sorted manner//

//     while (left <= mid && right <= high) {
//         if (arr[left] <= arr[right]) {
//             temp.push_back(arr[left]);
//             left++;
//         }
//         else {
//             temp.push_back(arr[right]);
//             right++;
//         }
//     }

//     // if elements on the left half are still left //

//     while (left <= mid) {
//         temp.push_back(arr[left]);
//         left++;
//     }

//     //  if elements on the right half are still left //
//     while (right <= high) {
//         temp.push_back(arr[right]);
//         right++;
//     }

//     // transfering all elements from temporary to arr //
//     for (int i = low; i <= high; i++) {
//         arr[i] = temp[i - low];
//     }
// }

// int countPairs(vector<int> &arr, int low, int mid, int high) {
//     int right = mid + 1;
//     int cnt = 0;
//     for (int i = low; i <= mid; i++) {
//         while (right <= high && arr[i] > 2 * arr[right]) right++;
//         cnt += (right - (mid + 1));
//     }
//     return cnt;
// }

// int mergeSort(vector<int> &arr, int low, int high) {
//     int cnt = 0;
//     if (low >= high) return cnt;
//     int mid = (low + high) / 2 ;
//     cnt += mergeSort(arr, low, mid);  // left half
//     cnt += mergeSort(arr, mid + 1, high); // right half
//     cnt += countPairs(arr, low, mid, high); //Modification
//     merge(arr, low, mid, high);  // merging sorted halves
//     return cnt;
// }

// int team(vector <int> & skill, int n)
// {
//     return mergeSort(skill, 0, n - 1);
// }

// int main()
// {
//     vector<int> a = {4, 1, 2, 3, 1};
//     int n = 5;
//     int cnt = team(a, n);
//     cout << "The number of reverse pair is: "
//          << cnt << endl;
//     return 0;
// }
