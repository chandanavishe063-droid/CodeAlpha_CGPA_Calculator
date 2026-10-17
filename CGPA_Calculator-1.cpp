#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int n;
    double totalCredits = 0;
    double totalGradePoints = 0;

    string course[100];
    double grades[100], credit[100];

    cout << "===== CGPA CALCULATOR =====\n";
    cout << "Enter number of courses: ";
    cin >> n;

    if (n <= 0 || n > 100) {
        cout << "Invalid number of courses!";
        return 0;
    }

    for (int i = 0; i < n; i++) {
        cout << "\nEnter course name: ";
        cin >> course[i];

        cout << "Enter grade point (0-10): ";
        cin >> grades[i];

        cout << "Enter credit hours: ";
        cin >> credit[i];

        if (grades[i] < 0 || grades[i] > 10 || credit[i] <= 0) {
            cout << "Invalid input!";
            return 0;
        }

        totalGradePoints += grades[i] * credit[i];
        totalCredits += credit[i];
    }

    double cgpa = totalGradePoints / totalCredits;

    cout << fixed << setprecision(2);
    cout << "\n===== RESULT =====\n";

    for (int i = 0; i < n; i++) {
        cout << course[i]
             << " Grade: " << grades[i]
             << " Credits: " << credit[i] << "\n";
    }

    cout << "\nTotal Credits: " << totalCredits;
    cout << "\nTotal Grade Points: " << totalGradePoints;
    cout << "\nFinal CGPA: " << cgpa << "\n";

    return 0;
}
