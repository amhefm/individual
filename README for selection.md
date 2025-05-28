Description
This repository contains a C++ implementation of the Selection Sort algorithm with performance measurement capabilities. The program sorts an array of integers and reports the execution time.

Features
Efficient implementation of Selection Sort algorithm

Time measurement using <ctime> library

Clean, well-structured C++ code

Demonstrates fundamental sorting concepts

Algorithm Overview
Selection Sort is an in-place comparison sorting algorithm that:

Divides the input array into sorted and unsorted parts

Repeatedly finds the minimum element in the unsorted part

Swaps it with the first element of the unsorted part

Expands the sorted portion by one element

Time Complexity
Best Case: O(n²)

Average Case: O(n²)

Worst Case: O(n²)

Space Complexity
O(1) - In-place sorting algorithm

Requirements
C++ compiler (C++11 or later recommended)

Standard Template Library (STL)

Usage
Compile the program:

bash
g++ -std=c++11 selection_sort.cpp -o selection_sort
Run the executable:

bash
./selection_sort
Example Output
Selection Sort Time: 0.000045 seconds
Key Characteristics
Simple implementation with minimal code

Performs well on small datasets

Not stable (does not preserve order of equal elements)

Makes exactly n(n-1)/2 comparisons in all cases

Performs only O(n) swaps (minimum possible)

Performance Notes
The timing measurement is useful for comparing relative performance

For accurate benchmarks, larger datasets should be used

Actual runtime may vary based on system specifications

Possible Extensions
Add input validation

Implement generic version using templates

Add option for descending order sort

Include performance comparison with other sort algorithms

Add visualization of sorting process
