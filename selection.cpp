#include <iostream>
#include <vector>
#include <ctime>
void selectionSort(std::vector<int>& arr) {
   int n = arr.size();
   for (int i = 0; i < n; i++) {
       int minIdx = i;
       for (int j = i + 1; j < n; j++) {
           if (arr[j] < arr[minIdx]) {
               minIdx = j;
           }
       }
       std::swap(arr[i], arr[minIdx]);
   }
}
int main() {
   std::vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
   clock_t start = clock();
   selectionSort(arr);
   clock_t end = clock();
   double time_taken = double(end - start) / CLOCKS_PER_SEC;
   std::cout << "Selection Sort Time: " << time_taken << " seconds
\n";
   return 0
}