
#include <bits/stdc++.h>
using namespace std;

void findCombination(int index, vector<int>& arr, int target,
                     vector<int>& ds,
                     vector<vector<int>>& ans) {
    if (index == arr.size()) {
        if (target == 0) {
            ans.push_back(ds);
        }
        return;
    }

    // Pick: same element can be used again
    if (arr[index] <= target) {
        ds.push_back(arr[index]);

        findCombination(index, arr, target - arr[index], ds, ans);

        ds.pop_back();
    }

    // Not pick: move to the next element
    findCombination(index + 1, arr, target, ds, ans);
}

int main() {
    vector<int> arr = {2, 3, 6, 7};
    int target = 7;

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
