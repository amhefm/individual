Overview
This C++ program implements the Selection Sort algorithm, which is a simple comparison-based sorting algorithm. The program also includes functionality to measure the time taken to perform the sorting using the clock() function from the C++ standard library.

Features:
Selection Sort: A sorting algorithm that repeatedly selects the smallest element from the unsorted portion of the array and swaps it with the first unsorted element.

Time Measurement: Uses clock() to measure the execution time of the sorting process.

Example Array: Demonstrates the sorting of an array of integers.

Requirements
C++11 or later compiler (such as GCC or Clang).

Code Explanation
Selection Sort Function:

The selectionSort function sorts an array of integers in ascending order using the Selection Sort algorithm.

The algorithm works by iterating over the array, finding the minimum element in the unsorted portion, and swapping it with the first unsorted element.

Time Measurement:

The clock() function records the processor time before and after the sorting operation, and the difference is converted into seconds using CLOCKS_PER_SEC.

The time taken is displayed on the console.

Array Sorting:

The program sorts an example array (arr = {64, 34, 25, 12, 22, 11, 90}).

After sorting, you can optionally print the sorted array if desired by adding a loop after the sorting code.