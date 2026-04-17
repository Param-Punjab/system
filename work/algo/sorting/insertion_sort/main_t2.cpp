#include <iostream>
#include <vector>

void print(std::vector<int> arr) {
    for (int i = 0; i < arr.size(); i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

std::vector<int> insertion(std::vector<int> arr, int k) {
    for (int i = 0; i < (arr).size(); i++) {
        if (k > (arr)[(arr).size()-1]) {
            (arr).push_back(k);
            break;
        }  
        else if (k > (arr)[i]) {
            continue;
        } 
        else {
            (arr).resize((arr).size() + 1);

            for (int j = (arr).size()-1; j > i; j--) {
                (arr)[j] = (arr)[j-1];
            }

            (arr)[i] = k;
            break;
        }
    }
    return arr;
}


int main() {
    std::vector<int> arr_O = {1, 3, 5, 7, 9};
    std::vector<int> arr_E = {2, 4, 6, 8, 10};


    return 0;
}