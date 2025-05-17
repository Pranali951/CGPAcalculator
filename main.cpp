/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int n, credit, totalCredits = 0;
    float gradePoint, totalGradePoints = 0.0;

    cout << "Enter the number of courses: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "\nCourse " << i << ":\n";

        cout << "Enter credits: ";
        cin >> credit;

        cout << "Enter grade points (out of 10): ";
        cin >> gradePoint;

        totalCredits += credit;
        totalGradePoints += gradePoint * credit;
    }

    float cgpa = totalGradePoints / totalCredits;

    cout << "\nTotal Credits = " << totalCredits << endl;
    cout << "Total Grade Points = " << totalGradePoints << endl;
    cout << "CGPA = " << cgpa << endl;

    return 0;
}

