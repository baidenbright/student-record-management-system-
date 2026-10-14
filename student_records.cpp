#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int MAX_STUDENTS = 100;
    int scores[MAX_STUDENTS];
    int numberOfStudents;

    cout << "Enter the number of students (1-100): ";
    cin >> numberOfStudents;

    if (numberOfStudents < 1 || numberOfStudents > MAX_STUDENTS) {
        cout << "Invalid number of students.\n";
        return 1;
    }

    for (int i = 0; i < numberOfStudents; ++i) {
        do {
            cout << "Enter score for student " << i + 1 << " (0-100): ";
            cin >> scores[i];

            if (scores[i] < 0 || scores[i] > 100) {
                cout << "Invalid score. Enter a value from 0 to 100.\n";
            }
        } while (scores[i] < 0 || scores[i] > 100);
    }

    int total = 0;
    int highest = scores[0];
    int lowest = scores[0];

    cout << "\nStudent Scores:\n";
    for (int i = 0; i < numberOfStudents; ++i) {
        cout << "Student " << i + 1 << ": " << scores[i] << '\n';
        total += scores[i];

        if (scores[i] > highest) highest = scores[i];
        if (scores[i] < lowest) lowest = scores[i];
    }

    double average = static_cast<double>(total) / numberOfStudents;

    cout << "\nClass Results\n";
    cout << "Total Score: " << total << '\n';
    cout << "Average Score: " << fixed << setprecision(2) << average << '\n';
    cout << "Highest Score: " << highest << '\n';
    cout << "Lowest Score: " << lowest << '\n';

    return 0;
}
