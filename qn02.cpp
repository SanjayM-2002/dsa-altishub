#include <bits/stdc++.h>
using namespace std;

/*


Problem 1: Array Manipulation - Question 2: Rotate an array by k positions

Approach:
Example: arr = [1, 2, 3, 4, 5], k = 2
if k > n, => k = k % n => handle cases where k > n
Step 1: reverse first k elements : { [1, 2, 3, 4, 5] => [2, 1, 3, 4, 5]}
Step 2: reverse remaining elements (from index k to end) : { [2, 1, 3, 4, 5] => [2, 1, 5, 4, 3]}
Step 3: reverse entire array : { [2, 1, 5, 4, 3] => [3, 4, 5, 1, 2]}

Output: [3, 4, 5, 1, 2]

Time Complexity: O(n)
Aux Space: O(1)
*/



void rotateByK(vector<int>& arr, int k) {
    int n = arr.size();
    if (k > n) {
        k = k % n;
    }
    reverse(arr.begin(), arr.begin() + k);
    reverse(arr.begin() + k, arr.end());
    reverse(arr.begin(), arr.end());
    return;
}


int main () {
    cout<<"Hello world"<<endl;
    vector<int> arr = {1, 2, 3, 4, 5};
    int k = 7;
    cout<<"Before: "<<endl;
    for (int num : arr) cout<<num<<" ";
    cout<<endl;

    cout<<"After: "<<endl;
    rotateByK(arr, k);
    for (int num : arr) cout<<num<<" ";
    cout<<endl;
    return 0;
}