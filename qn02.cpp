#include <bits/stdc++.h>
using namespace std;

/*


Problem 1: Array Manipulation - Qn 2: Rotate array by k positions

Approach:
Example: arr = [1, 2, 3, 4, 5], k = 2
Step 1: reverse first k elements 
Step 2: reverse remaining elements (from index k to end) 
Step 3: reverse entire array 


Time Complexity: O(n)
Aux Space: O(1)
*/



void rotateByK(vector<int> &arr, int k) {
    reverse(arr.begin(), arr.begin() + k-1);
    reverse(arr.begin() + k, arr.end());
    reverse(arr.begin(), arr.end());
    return;
}


int main () {
    cout<<"Hello world"<<endl;
    vector<int> arr = {1, 2, 3, 4, 5};
    int k = 2;
    cout<<"Before: "<<endl;
    for (int num : arr) cout<<num<<" ";
    cout<<endl;

    cout<<"After: "<<endl;
    rotateByK(arr, k);
    for (int num : arr) cout<<num<<" ";
    cout<<endl;
    return 0;
}