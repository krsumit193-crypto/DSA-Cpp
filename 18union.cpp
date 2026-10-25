
#include <bits/stdc++.h>
using namespace std;

vector<int> ans;

void unionoftwo(vector<int>& numsA, vector<int>& numsB) {
    int i = 0;
    int j = 0;

    while (i < numsA.size() && j < numsB.size()) {
        if (numsA[i] < numsB[j]) {
            if (ans.empty() || ans.back() != numsA[i])
                ans.push_back(numsA[i]);
            i++;
        }
        else if (numsA[i] > numsB[j]) {
            if (ans.empty() || ans.back() != numsB[j])
                ans.push_back(numsB[j]);
            j++;
        }
        else {
            if (ans.empty() || ans.back() != numsA[i])
                ans.push_back(numsA[i]);
            i++;
            j++;
        }
    }

    while (i < numsA.size()) {
        if (ans.empty() || ans.back() != numsA[i])
            ans.push_back(numsA[i]);
        i++;
    }

    while (j < numsB.size()) {
        if (ans.empty() || ans.back() != numsB[j])
            ans.push_back(numsB[j]);
        j++;
    }
}

int main() {
    vector<int> numsA = {1, 2, 2, 3, 4};
    vector<int> numsB = {2, 3, 5, 6};

    unionoftwo(numsA, numsB);

    for (int k = 0; k < ans.size(); k++) {
        cout << ans[k] << " ";
    }
}
