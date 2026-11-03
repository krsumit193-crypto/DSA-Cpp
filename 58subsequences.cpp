#include <bits/stdc++.h>
using namespace std;

void generate(int index, vector<int>& arr, vector<int>& ds) {

    if (index == arr.size()) {
        for (int x : ds)
            cout << x << " ";
        cout << endl;
        return;
    }

    // Pick
    ds.push_back(arr[index]);
    generate(index + 1, arr, ds);

    // Not Pick
    ds.pop_back();
    generate(index + 1, arr, ds);
}

int main() {

    vector<int> arr = {3, 1, 2};
    vector<int> ds;

    generate(0, arr, ds);

    return 0;
}