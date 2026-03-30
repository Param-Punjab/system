#include <iostream>
using namespace std;

void linear_search(int arr[], int t, int n) {
    cout << "Linear Search" << endl;
    int s = 0;
    for (int i = 0; i < n; i++) {
        s += 1;
        if (arr[i] == t) {
            cout << "Fount !" << endl;
            cout << "Index: " << i << endl;
            cout << "Steps: " << s << endl;
        }
    }
}

void binary_search(int arr[], int t, int n) {
    cout << "Binary Search" << endl;
    int s = 0;
    int f = 0;
    int l = n;
    int m;
    while(true) {
        s += 1;
        m = (f + l)/2;
        if (t < arr[m]) {
            l = m;
        } else if (t > arr[m]) {
            f = m;
        } else if (t == arr[m]) {
            cout << "Found !" << endl;
            cout << "Index: " << m << endl;
            cout << "Steps: " << s << endl;
            break;
        } else {
            cout << "Not found" << endl;
            break;
        }

    }
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 45, 67, 89};
    int t = 23;
    int n = 10;

    linear_search(arr, t, n);
    binary_search(arr, t, n);
    return 0;
}
