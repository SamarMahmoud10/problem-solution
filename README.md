# problem-solution
Naive and optimized solutions for the given problem

Problem Description:
Given an array of N integers, the task is to compute a new array such that
each element at index i is equal to the product of all elements in the
original array except the element at index i.

Naïve Algorithm solution:
The naive approach solves the Product of Array Except Self problem by computing
the product for each index independently.
For every element in the array, the algorithm iterates over all other elements and
multiplies them together, excluding the current index.
The Key Idea: For each index i, multiply all elements nums[j] where j != i

Optimized Algorithm solution:
Instead of calculating the product for each index separately, the
algorithm uses two auxiliary passes over the array: a prefix pass and a
suffix pass.
In the first pass, the algorithm computes the product of all elements to
the left of each index and stores it in the result array.
In the second pass, it computes the product of all elements to the right of
each index and multiplies it with the corresponding prefix product.
This approach avoids the use of division and efficiently combines prefix
and suffix products to produce the final result.
