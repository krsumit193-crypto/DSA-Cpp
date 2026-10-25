
#include <bits/stdc++.h>
using namespace std;

vector<int> ans;

void intersectionoftwo(vector<int>& numsA, vector<int>& numsB) {
    int i = 0;
    int j = 0;

    while (i < numsA.size() && j < numsB.size()) {
        if (numsA[i] < numsB[j]) {
            i++;
        }
        else if (numsA[i] > numsB[j]) {
            j++;
        }
        else {
            if (ans.empty() || ans.back() != numsA[i]) {
                ans.push_back(numsA[i]);
            }
            i++;
            j++;
        }
    }
}

int main() {
    vector<int> numsA = {1, 2, 2, 3, 4};
    vector<int> numsB = {2, 3, 5, 6};

    intersectionoftwo(numsA, numsB);

    for (int k = 0; k < ans.size(); k++) {
        cout << ans[k] << " ";
    }

    return 0;
}
