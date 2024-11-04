#include <iostream>
#include <string>

using namespace std;

struct Student {
    string name;
    int rollNumber;
    float marks;
};

void inputStudentData(Student &student) {
    cout << "Enter student name: ";
    cin >> student.name;
    cout << "Enter roll number: ";
    cin >> student.rollNumber;
    cout << "Enter marks: ";
    cin >> student.marks;
}

void displayStudentData(const Student &student) {
    cout << "Student Name: " << student.name << endl;
    cout << "Roll Number: " << student.rollNumber << endl;
    cout << "Marks: " << student.marks << endl;
}

int main() {
    const int numberOfStudents = 3;
    Student students[numberOfStudents];

  
    for (int i = 0; i < numberOfStudents; ++i) {
        cout << "Entering data for student " << (i + 1) << endl;
        inputStudentData(students[i]);
        cout << endl;
    }

 
    cout << "\nStudent Records:\n";
    for (int i = 0; i < numberOfStudents; ++i) {
        cout << "Student " << (i + 1) << ":" << endl;
        displayStudentData(students[i]);
        cout << endl;
    }

    return 0;
}
