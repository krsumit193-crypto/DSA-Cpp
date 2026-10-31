
#include <iostream>
#include <vector>
using namespace std;

int countRotations(vector<int>& arr) {
    int low = 0;
    int high = arr.size() - 1;

    while (low <= high) {
        if (arr[low] <= arr[high]) {
            return low;
        }

        int mid = low + (high - low) / 2;
        int next = (mid + 1) % arr.size();
        int prev = (mid - 1 + arr.size()) % arr.size();

        if (arr[mid] <= arr[next] && arr[mid] <= arr[prev]) {
            return mid;
        }

        if (arr[mid] >= arr[low]) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    return 0;
}

int main() {
    vector<int> arr = {5, 6, 7, 1, 2, 3, 4};

    cout << countRotations(arr);

    return 0;
}
