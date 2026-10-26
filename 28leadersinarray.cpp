
#include <bits/stdc++.h>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> ans;
    int maximum = arr[arr.size() - 1];

    ans.push_back(maximum);

    for (int i = arr.size() - 2; i >= 0; i--) {
        if (arr[i] >= maximum) {
            maximum = arr[i];
            ans.push_back(arr[i]);
        }
    }

    reverse(ans.begin(), ans.end());
    return ans;
}

int main() {
    vector<int> arr = {10, 22, 12, 3, 0, 6};

    vector<int> ans = leaders(arr);

    for (int x : ans) {
        cout << x << " ";
    }

    cout << endl;
    return 0;
}
