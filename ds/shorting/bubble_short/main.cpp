#include <iostream>
using namespace std;

void bubble_short(int arr[], int n) {
    int count = 0;
    int temp;
    for (int i = 0; i <= n; i++ ) {
        for (int j = 0; j <= n-1; j++ ) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        cout << "{ ";
        for (int i = 0; i <= n-1; i++) {
            cout << arr[i] << ", ";
            count += 1;
        }
        cout << arr[n] << " } count = " << count << endl;
        count = 0;
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = 6;
    bubble_short(arr, n);

    return 0;
}
