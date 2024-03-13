#include <iostream>
using namespace std;

void printTriangle(int n) {
    for (int i = n; i > 0; --i) {
        for (int j = 0; j < i; ++j) {
            cout << "*";
        }
        cout << endl;
    }
}

void printSquare(int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << "*";
        }
        cout << endl;
    }
}

void printSquareValue(int n) {
    cout << n * n << endl;
}

int main() {
    int n;
    cout << "Enter a value for n: ";
    cin >> n;

    cout << "Triangle Pattern:" << endl;
    printTriangle(n);

    cout << "Square Pattern:" << endl;
    printSquare(n);

    cout << "Square Value of " << n << ":" << endl;
    printSquareValue(n);

    return 0;
}
