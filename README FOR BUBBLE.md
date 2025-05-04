
Bubble Sort in C++
This project demonstrates a basic implementation of the Bubble Sort algorithm in C++. It also measures the time taken to sort a small array using the clock() function from the C++ Standard Library.

📋 Description
The code performs the following steps:

1 Defines a vector of integers.

2 Sorts the vector using the Bubble Sort algorithm.

3 Measures and prints the time taken to sort the array.

🧾 Code Breakdown
- bubbleSort(std::vector<int>& arr): A function that implements the Bubble Sort algorithm.

 -clock_t start = clock();: Starts timing the sort.

- clock_t end = clock();: Ends timing after the sort.

- double time_taken = double(end - start) / CLOCKS_PER_SEC;: Calculates the duration.

🛠️ Requirements
- A C++ compiler (e.g., g++, clang++)

- C++11 or later

🚀 How to Compile and Run
1 Save the code in a file, e.g., bubble_sort.cpp.

2 Open a terminal and run:
📈 Sample Output
css
Copy
Edit
Bubble Sort Time: 0.000012 seconds
(Note: The exact time may vary depending on your system.)

📚 Notes
Bubble Sort is not efficient for large datasets (O(n²) time complexity).

This implementation is meant for educational purposes.
