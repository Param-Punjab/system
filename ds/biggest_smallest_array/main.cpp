#include <iostream>
using namespace std;

int smallest_number(int arr[], int n) {
    int smallest = arr[0];
    for (int i = 0; i <= n; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    return smallest;
}

int biggest_number(int arr[], int n) {
    int biggest = arr[0];
    for (int i = 0; i <= n; i++) {
        if (arr[i] > biggest) {
            biggest = arr[i];
        }
    }
    return biggest;
}

int main() {

    int arr[] = {5, 3, 8, 1, 9, 2};
    int n = 5;

    cout << "Biggest Number: " << biggest_number(arr, n)<< endl;
    cout << "Smallest Number: " << smallest_number(arr, n) << endl;
    return 0;
}
