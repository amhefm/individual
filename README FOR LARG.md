Find Second and Third Largest Elements in an Array
Overview
This program efficiently finds the second largest and third largest distinct elements in an array of integers. If the array contains fewer than three distinct elements, it throws an exception. The program operates in linear time, making it optimal for large arrays.

Features
Returns the second largest and third largest distinct elements from the given array.

Handles arrays with fewer than three elements by throwing a descriptive exception.

Optimized to work in O(n) time complexity, where n is the size of the array.

Problem Statement
Given an array of integers, the task is to find:

The second largest distinct element in the array.

The third largest distinct element in the array.

If the array contains fewer than three distinct elements, the program will raise an error.

Requirements
C++11 or later: This code uses structured bindings (auto [second, third]) introduced in C++17 for cleaner variable unpacking.

A C++ compiler: e.g., g++, clang++.

Input
The program expects an array of integers, where the array must contain at least three distinct elements.

Code Explanation
1. findSecondAndThirdLargest Function
This function takes a vector of integers as input and returns a pair containing:

The second largest distinct element

The third largest distinct element

Key steps:
Edge Case Check: It first checks if the array has fewer than three elements and throws an exception if true.

Variable Initialization: The function initializes three variables first, second, and third to INT_MIN to represent the largest, second largest, and third largest distinct elements.

Iterative Comparison: As it iterates over the array, it compares each number with first, second, and third:

If the current number is larger than first, it updates all three values.

If it is between first and second, it updates second and third.

If it is between second and third, it updates third.

2. Main Function
The main function initializes a test array, calls findSecondAndThirdLargest(), and prints the results. If the array is invalid, it catches the exception and prints the error message.
Compilation and Execution
1. Compile the Code
To compile the code, use a C++ compiler like g++. If the file is named find_largest_elements.cpp, run the following command:
Run the Executable
Once compiled, run the executable to see the results:
Contributing
We welcome contributions to improve this program! If you have ideas for enhancements, bug fixes, or optimizations, feel free to open an issue or create a pull request.

How to Contribute:
Fork the repository.

Create a new branch for your changes.

Make your changes and commit them.

Push to your fork and create a pull request