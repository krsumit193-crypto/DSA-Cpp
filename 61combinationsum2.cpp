
#include <bits/stdc++.h>
using namespace std;

void findCombination(int index, vector<int>& arr, int target,
                     vector<int>& ds, vector<vector<int>>& ans) {
    if (target == 0) {
        ans.push_back(ds);
        return;
    }

    for (int i = index; i < arr.size(); i++) {
        // Skip duplicate elements at the same recursion level
        if (i > index && arr[i] == arr[i - 1]) {
            continue;
        }

        if (arr[i] > target) {
            break;
        }

        ds.push_back(arr[i]);

        // Move to i + 1: each element is used only once
        findCombination(i + 1, arr, target - arr[i], ds, ans);

        ds.pop_back();
    }
}

int main() {
    vector<int> arr = {10, 1, 2, 7, 6, 1, 5};
    int target = 8;

    sort(arr.begin(), arr.end());

    vector<int> ds;
    vector<vector<int>> ans;

    findCombination(0, arr, target, ds, ans);

    for (auto& combination : ans) {
        cout << "{ ";
        for (int num : combination) {
            cout << num << " ";
        }
        cout << "}" << endl;
    }

    return 0;
}
