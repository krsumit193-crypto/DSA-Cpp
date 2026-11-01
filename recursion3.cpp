
#include <iostream>
using namespace std;

int sumNumbers(int n) {
    if (n == 0) {
        return 0;
    }

    return n + sumNumbers(n - 1);
}

int main() {
    int n;
    cin >> n;

    cout << sumNumbers(n) << endl;

    return 0;
}
