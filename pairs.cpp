#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

int main() {

    // Vector of pairs
    vector<pair<string, int>> students = {
        {"Rahul", 85},
        {"Aman", 92},
        {"Sumit", 88},
        {"Riya", 95}
    };

    // Display students
    cout << "Student Details:\n";

    for (auto student : students) {
        cout << "Name: " << student.first
             << " | Marks: " << student.second << endl;
    }

    // Sort according to marks
    sort(students.begin(), students.end(),
         [](pair<string, int> a, pair<string, int> b) {
             return a.second > b.second;
         });

    cout << "\nStudents sorted by marks:\n";

    for (auto student : students) {
        cout << student.first << " -> "
             << student.second << endl;
    }

    return 0;
}