  Description
This C++ program efficiently finds the second and third largest elements in an array of integers. The implementation handles edge cases and provides clear error messages when the input array doesn't meet requirements.

  Features
Finds second and third largest elements in a single pass (O(n) time complexity)

Uses constant space (O(1) space complexity)

Includes proper error handling for invalid input sizes

Clean, modern C++ implementation using pair and structured bindings

  Algorithm Overview
The algorithm works by maintaining three variables to track the largest, second largest, and third largest elements as it iterates through the array:

Initialize three variables to minimum integer values

For each number in the array:

If the number is greater than the current largest, update all three values

Else if it's greater than the second largest (and not equal to largest), update second and third

Else if it's greater than the third largest (and not equal to first or second), update third

Return the second and third largest values

  Requirements
C++17 or later (for structured bindings)

Standard Template Library (STL)

  Usage
Compile the code with a C++17 compatible compiler:

bash
g++ -std=c++17 find_largest.cpp -o find_largest
Run the executable:

bash
./find_largest
Example Output
For the input array {5, 8, 12, 3, 10}:

Second Largest: 10
Third Largest: 8
Edge Cases Handled
Arrays with fewer than 3 elements (throws exception)

Arrays with duplicate values (properly skips duplicates)

Arrays with negative numbers (works with INT_MIN initialization)

  Time Complexity
O(n) - Single pass through the array

Each element requires at most 3 comparisons

 Space Complexity
O(1) - Uses only a constant amount of additional space

 Possible Improvements
Could be extended to find the k-th largest elements

Could add validation for empty arrays

Could be templatized to work with different numeric types
