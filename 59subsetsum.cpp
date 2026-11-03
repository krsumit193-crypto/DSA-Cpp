#include <bits/stdc++.h>
using namespace std;

void subsetSum(int index, int sum, vector<int>& arr, vector<int>& ans) {

    if (index == arr.size()) {
        ans.push_back(sum);
        return;
    }

    // Pick
    subsetSum(index + 1, sum + arr[index], arr, ans);

    // Not Pick
    subsetSum(index + 1, sum, arr, ans);
}

int main() {

    vector<int> arr = {3, 1, 2};
    vector<int> ans;

    subsetSum(0, 0, arr, ans);

    sort(ans.begin(), ans.end());

    for (int x : ans)
        cout << x << " ";

    return 0;
}