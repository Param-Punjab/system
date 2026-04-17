#include <iostream>

void insertionSort(int *A, int n) {

}

void printArray(int *A, int n) {
  for (int i = 0; i < n; i++) {
    std::cout << A[i] << " ";
  }
}

int main() {
  // 4, 5, 6, 7, 3, 2

  int n = 6;
  int A[] = {12, 57, 65, 7, 23, 9};

  printArray(A, n);

  // insertionSort(A, n);

  return 0;
}