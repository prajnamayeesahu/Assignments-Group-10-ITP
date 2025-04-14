#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;
int freq(const int arr[], int n) {
  unordered_map<int, int> frequency;
  int maxFrequency = 0;
  int maxOccurringElement = -1;
  for (int i = 0; i < n; ++i) {
    frequency[arr[i]]++;
    if (frequency[arr[i]] > maxFrequency) {
      maxFrequency = frequency[arr[i]];
      maxOccurringElement = arr[i];
    }
  }
  return maxOccurringElement;
}
int main() {
  int arr[] = {2, 3, 4, 4, 5, 5, 5, 6};
  int n = sizeof(arr) / sizeof(arr[0]);
  int maxElement = freq(arr, n);
  cout << "The most occurring element is: " << maxElement << endl;
  
}