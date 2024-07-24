#include <bits/stdc++.h>
using namespace std;

/*
Approach: Kadane's Algorithm
Intuition: For every element, i am checking if it can be added to the current subarray or not
I am using currMax variable to store current subarray sum and res variable to store the final answer

Time complexity: O(n)
Space complexity: O(1)
*/

int maxSumSubarray (vector<int> v) {
    if (!v.size()) return 0;
    int currMax = v[0];
    int res = v[0];
    for (int i = 1; i < v.size(); i++) {;
        currMax = max(currMax + v[i], v[i]);
        res = max(res, currMax);
    };
    return res;
};


int main () {
    cout<<"Hello world"<<endl;
    vector<int> v = {1, -2, 3, -1, 2}; 
    int ans = maxSumSubarray(v);
    cout<<"Answer is: "<<endl;
    cout<<ans<<endl;
    return 0;
}