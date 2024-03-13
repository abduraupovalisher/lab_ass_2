#include <iostream>
using namespace std;

bool canDivideCake(int a, int b, int N) {
    int pieces = 1;
    while (a % 2 == 0) {
        a /= 2;
        pieces *= 2;
    }
    while (b % 2 == 0) {
        b /= 2;
        pieces *= 2;
    }
    return pieces >= N;
}

int main() {
    int a, b, N;
    cout << "Enter the dimensions of the cake (a b): ";
    cin >> a >> b;
    cout << "Enter the number of people (N): ";
    cin >> N;

    if (canDivideCake(a, b, N)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}