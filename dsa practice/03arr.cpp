#include<bits/stdc++.h>
using namespace std;

bool isSorted(vector<int>& num) {

    if(num.size() == 1) {
        return true;
    }

    for(int i = 0; i < num.size() - 1; i++) {

        if(num[i + 1] < num[i]) {
            return false;
        }
    }

    return true;
}

int main() {

    vector<int> num = {1, 32, 3, 4, 5};

    cout << isSorted(num);

}