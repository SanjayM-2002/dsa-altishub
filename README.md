# Altishub DSA round

## Problem 1: Array Manipulation - Qn 1: Maximum subarray sum

Approach: Kadane's Algorithm
Intuition: For every element, i am checking if it can be added to the current subarray or not
I am using currMax variable to store current subarray sum and res variable to store the final answer

Time complexity: O(n)
Aux Space: O(1)

## Problem 1: Array Manipulation - Question 2: Rotate an array by k positions

Approach:
Example: arr = [1, 2, 3, 4, 5], k = 2
if k > n, => k = k % n => handle cases where k > n
Step 1: reverse first k elements : { [1, 2, 3, 4, 5] => [2, 1, 3, 4, 5]}
Step 2: reverse remaining elements (from index k to end) : { [2, 1, 3, 4, 5] => [2, 1, 5, 4, 3]}
Step 3: reverse entire array : { [2, 1, 5, 4, 3] => [3, 4, 5, 1, 2]}

Output: [3, 4, 5, 1, 2]

Time Complexity: O(n)
Aux Space: O(1)
