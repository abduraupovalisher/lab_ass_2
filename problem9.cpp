#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compareStudents(const pair<int, int>& s1, const pair<int, int>& s2) {
    if (s1.first == s2.first) {
        return s1.second < s2.second;
    }
    return s1.first > s2.first;
}

int findRank(const vector<pair<int, int>>& total_grades, int studentID) {
    vector<pair<int, int>> sorted_grades = total_grades;
    sort(sorted_grades.begin(), sorted_grades.end(), compareStudents);

    for (int i = 0; i < sorted_grades.size(); ++i) {
        if (sorted_grades[i].second == studentID) {
            return i + 1;
        }
    }

    return -1; // Student not found
}

int main() {
    int N;
    cout << "Enter the number of students: ";
    cin >> N;

    vector<pair<int, int>> total_grades(N);
    cout << "Enter the total grades for each student:" << endl;
    for (int i = 0; i < N; ++i) {
        cout << "Student " << i + 1 << ": ";
        cin >> total_grades[i].first;
        total_grades[i].second = i + 1; // Store student ID
    }

    int studentID;
    cout << "Enter the ID of the student to find the rank: ";
    cin >> studentID;

    int rank = findRank(total_grades, studentID);
    if (rank != -1) {
        cout << "Rank of Student with ID " << studentID << ": " << rank << endl;
    } else {
        cout << "Student with ID " << studentID << " not found." << endl;
    }

    return 0;
}
