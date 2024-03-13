#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> sortedSquares(const vector<int>& nums) {
    int n = nums.size();
    vector<int> result(n);
    int left = 0, right = n - 1;
    int index = n - 1;

    while (left <= right) {
        int leftSquare = nums[left] * nums[left];
        int rightSquare = nums[right] * nums[right];
        if (leftSquare > rightSquare) {
            result[index--] = leftSquare;
            left++;
        } else {
            result[index--] = rightSquare;
            right--;
        }
    }

    return result;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> elements(n);
    cout << "Enter the elements in non-decreasing order: ";
    for (int i = 0; i < n; ++i) {
        cin >> elements[i];
    }
    vector<int> squared = sortedSquares(elements);

    cout << "Sorted squares of each number: ";
    for (int num : squared) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
