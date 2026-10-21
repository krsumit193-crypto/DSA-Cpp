#include <bits/stdc++.h>
using namespace std;

int seclargestNumber(vector<int>& num) {
    int largest = INT_MIN;
    int seclargest = INT_MIN;

    for (int i = 0; i < num.size(); i++) {
        if (num[i] > largest) {
          seclargest=largest;
            largest = num[i];
        }else if(num[i]>seclargest && num[i]<largest)
        seclargest=num[i];
    }

    return seclargest;
}

int main() {
    vector<int> num = {10, 5, 20, 8, 15};

    cout << seclargestNumber(num);

    return 0;
}