#include <iostream>
#include <vector>

void print(std::vector<int> arr) {
  for (int i = 0; i < arr.size(); i++) {
    std::cout << arr[i] << " ";
  }
}

int main() {
  std::vector<int> arr = {64, 34, 25, 12, 22, 11, 90};


  for (int i = 0; i < arr.size(); i++) {
    for (int j = i+1; j < arr.size(); j++) {
      if (arr[i] > arr[j]) {
        std::swap(arr[i], arr[j]);
      }
    }
  }

  print(arr);

  return 0;
}
