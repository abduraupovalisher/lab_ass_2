#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cout << "Enter the number of students: ";
    cin >> N;

    vector<vector<int>> grades(N, vector<int>(3));
    cout << "Enter the grades for each student:" << endl;
    for (int i = 0; i < N; ++i) {
        cout << "Student " << i + 1 << ": ";
        cin >> grades[i][0] >> grades[i][1] >> grades[i][2];
    }

    vector<pair<int, int>> total_grades;

    for (int i = 0; i < N; ++i) {
        total_grades.push_back({grades[i][0] + grades[i][1] + grades[i][2], -(i + 1)});
    }

    sort(total_grades.begin(), total_grades.end());

    int studentID;
    cout << "Enter the ID of the student to find the rank: ";
    cin >> studentID;

    int rank = 1;
    for (int i = 0; i < N; ++i) {
        if (-total_grades[i].second == studentID) {
            cout << "Rank of Student with ID " << studentID << ": " << rank << endl;
            return 0;
        }
        rank++;
    }

    cout << "Student with ID " << studentID << " not found." << endl;

    return 0;
}
