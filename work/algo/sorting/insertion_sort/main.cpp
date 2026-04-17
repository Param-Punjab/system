#include <iostream>
#include <vector>

std::vector<int> insertion(std::vector<int> arr, int n) {
  int k = arr.size();
  int size = arr.size();
  for (int i = 0; i < arr.size(); i++) {
    if (n >= arr[i]) {
      continue;
    } else {
      k += 1;
      arr.resize(k);
      for (int j = k - 1; j > i; j--) {
        arr[j] = arr[j - 1];
      }
      arr[i] = n;
      break;
    }
  }
  return arr;
}

std::vector<int> insertion_sort(std::vector<int> arr) {
  int k = 1, temp = 0, c = 0;
  do {
    if (arr[k] > arr[k-1]) {k++;}
    else if (arr[k] < arr[k-1]) {
      for (int i = 0; i < k; i++) {
        if (arr[k] > arr[c]) {
          c++;
        } else if (arr[k] < arr[c]) {
          temp = arr[k];
          for (int j = k; j > c; j--) {
            arr[j] = arr[j-1];
          }
          arr[c] = temp;
          k++; c = 0;
          break;
        }
      }
    }
  } while (k < arr.size());
  return arr;
}


// Print funciton to print array
void print(std::vector<int> arr) {
  for (int i = 0; i < arr.size(); i++) {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;
}

int main() {
  std::vector<int> arr = {2, 8, 6, 1, 0};

  print(arr);

  arr = insertion_sort(arr);

  print(arr);
  return 0;
}
