#include <iostream>
#include <vector>
using namespace std;

int searchValue(const vector<int>& vec, int num) {
    for (int i = 0; i < vec.size(); ++i) {
        if (vec[i] == num) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n, num;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> elements(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> elements[i];
    }

    cout << "Enter the number to search: ";
    cin >> num;

    int index = searchValue(elements, num);
    cout<<index;
    return 0;
}
