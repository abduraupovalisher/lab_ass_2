#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Student {
    int id;
    int totalGrade;
};

bool compareStudents(const Student& s1, const Student& s2) {
    if (s1.totalGrade == s2.totalGrade) {
        return s1.id < s2.id;
    }
    return s1.totalGrade > s2.totalGrade;
}

int findRank(const vector<vector<int>>& grades, int studentID) {
    vector<Student> students;
    for (int i = 0; i < grades.size(); ++i) {
        int total = grades[i][0] + grades[i][1] + grades[i][2];
        students.push_back({i + 1, total});
    }

    sort(students.begin(), students.end(), compareStudents);

    for (int i = 0; i < students.size(); ++i) {
        if (students[i].id == studentID) {
            return i + 1;
        }
    }

    return -1;
}

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

    int studentID;
    cout << "Enter the ID of the student to find the rank: ";
    cin >> studentID;

    int rank = findRank(grades, studentID);
    if (rank != -1) {
        cout << "Rank of Student with ID " << studentID << ": " << rank << endl;
    } else {
        cout << "Student with ID " << studentID << " not found." << endl;
    }

    return 0;
}
