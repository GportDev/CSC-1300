/*
    Title: Mod4d.cpp
    Author: Gabriel Porteiro
    Date: 11/20/2023
    Purpose: Use dynamic allocated structure arrays
*/

#include <iostream>
#include <string>

using namespace std;

struct Course {
    int numCourses;
    int* creditHours;
};

// Course is nested inside student
struct Student{
    string name;
    string house;
    Course courseInfo;
};

void enterData(Student*);
int calculateHours(Student);

const int SIZE = 5;

int main() {
    Student studentArray[SIZE];
    int totalHours;

    cout << "Which of the students can work in addition to going to school?\n\n";
    enterData(studentArray);

    for(int i=0; i < SIZE; i++) {
        totalHours = calculateHours(studentArray[i]);
        if(totalHours > 30) {
            
        } else {

        }
    }

    return 0;
}

void enderData(Student* studentArray) {
    cout << "Enter each student's information." << endl;

    for(int i = 0; i < SIZE; i++) {
        cout << "******* Student " << i + 1 << "*******" << endl;
        cout << "Name: ";
        getline(cin, studentArray[i].name);

        cout << "House: ";
        getline(cin, studentArray[i].house);

        cout << "Number of classes this semester: ";
        cin >> studentArray[i].courseInfo.numCourses;

        studentArray[i].courseInfo.creditHours = new int [studentArray[i].courseInfo.numCourses];

        cout << "Credit hours for each course:\n ";
        for (int j = 0; j < studentArray[i].courseInfo.numCourses; j++) {
            cout << "Course: " << j+1 << " - ";
            cin >> studentArray[i].courseInfo.creditHours[j];
        }

        cin.ignore();
        cout << endl;
    };
}

int calculateHours(Student student) {
    int total = 0;

    for(int i = 0; i < student.courseInfo.numCourses; i++) {
        total += student.courseInfo.creditHours[i] + (student.courseInfo.creditHours[i] * 3);
    }

    return total;
}