#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int>& arr, int low, int high, int target) {
    if (low > high) {
        return -1;
    }

    int mid = low + (high - low) / 2;

    if (arr[mid] == target) {
        return mid;
    }
    else if (arr[mid] < target) {
        return binarySearch(arr, mid + 1, high, target);
    }
    else {
        return binarySearch(arr, low, mid - 1, target);
    }
}

int main() {
    vector<int> arr = {2, 4, 6, 8, 10, 12};
    int target = 10;

    cout << binarySearch(arr, 0, arr.size() - 1, target);

    return 0;
}