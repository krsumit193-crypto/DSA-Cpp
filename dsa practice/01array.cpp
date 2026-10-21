#include <bits/stdc++.h>
using namespace std;

int largestNumber(vector<int>& num) {
    int largest = INT_MIN;

    for (int i = 0; i < num.size(); i++) {
        if (num[i] > largest) {
            largest = num[i];
        }
    }

    return largest;
}

int main() {
    vector<int> num = {10, 5, 20, 8, 15};

    cout << largestNumber(num);

    return 0;
}