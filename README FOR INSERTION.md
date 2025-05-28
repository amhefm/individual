Insertion Sort Implementation in C++
     Description
This repository contains a C++ implementation of the Insertion Sort algorithm, along with basic timing functionality to measure its performance on a small dataset.

     Features
Clean, efficient implementation of the Insertion Sort algorithm

Timing mechanism to measure sorting performance

Example usage with a predefined array

    Algorithm Overview
Insertion Sort is a simple sorting algorithm that builds the final sorted array one item at a time. It is efficient for small data sets and is much less efficient on large lists than more advanced algorithms like quicksort or merge sort.

    How It Works
Iterates through the array from the second element

For each element, compares it with the previous elements

Shifts the larger elements one position up to make space for the current element

Inserts the current element in its correct position

    Time Complexity
Best Case: O(n) - when array is already sorted

Average Case: O(n²)

Worst Case: O(n²) - when array is sorted in reverse order

  Space Complexity
O(1) - It's an in-place sorting algorithm

Usage
Clone the repository

Compile the code using a C++ compiler (g++ recommended)

Run the executable

Example Output
Insertion Sort Time: 0.000123 seconds
Requirements
C++ compiler (C++11 or later recommended)

Standard Template Library (STL)
