Insertion Sort in C++
This C++ program implements the Insertion Sort algorithm and measures the time it takes to sort an array using this algorithm. The program uses the standard vector container to store the data, and the time is measured using the clock() function from the ctime library.

Features
Insertion Sort Algorithm: The core sorting algorithm used in this program.

Time Measurement: The execution time of the sorting process is measured and displayed in seconds.

C++ Standard Libraries: Uses iostream, vector, and ctime for input/output, dynamic array handling, and time measurement.

Insertion Sort Algorithm
Insertion Sort is a simple comparison-based sorting algorithm. It works by building the sorted array one element at a time. It takes an element from the unsorted part of the array and finds its correct position in the sorted part.

Time Complexity:
Best Case: O(n) (when the array is already sorted)

Average and Worst Case: O(n²) (when the array is reversed or in random order)

Code Explanation
insertionSort function:
The function iterates through each element in the array starting from the second element.

It stores the current element (key) and compares it with the elements in the sorted portion of the array.

Elements larger than the key are moved one position ahead, making space for the key.

The key is placed at the correct position in the sorted part of the array.

main function:
Initializes an array of integers.

Measures the time taken for the sorting process using clock().

Calls the insertionSort function to sort the array.

Outputs the time taken to sort the array.

How to Compile and Run
Save the code in a file, for example insertion_sort.cpp.

Compile the code using a C++ compiler. For example, with g++: