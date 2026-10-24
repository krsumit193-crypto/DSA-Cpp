#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector<int>& arr, int target) {
    int low = 0;
    int high = arr.size() - 1;
    int ans = arr.size();

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] >= target) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return ans;
}

int main() {
    vector<int> arr = {1, 2, 4, 4, 7, 9};
    int target = 4;

    cout << lowerBound(arr, target) << endl;

    return 0;
}