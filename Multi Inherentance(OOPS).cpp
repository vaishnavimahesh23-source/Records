#include <iostream>
using namespace std;

// Base class 1
class Teacher {
protected:
    string teacherName;
    string subject;

public:
    void setTeacherDetails() {
        cout << "Enter teacher name: ";
        getline(cin, teacherName);
        cout << "Enter subject taught: ";
        getline(cin, subject);
    }

    void displayTeacher() {
        cout << "Teacher Name: " << teacherName << endl;
        cout << "Subject: " << subject << endl;
    }
};

// Base class 2
class Person {
protected:
    int age;

public:
    void setAge() {
        cout << "Enter age: ";
        cin >> age;
        cin.ignore(); // To consume the newline character after integer input
    }

    void displayAge() {
        cout << "Age: " << age << endl;
    }
};

// Derived class inheriting from both Teacher and Person
class Student : public Teacher, public Person {
private:
    string studentName;
    int studentID;

public:
    void setStudentDetails() {
        cout << "Enter student name: ";
        getline(cin, studentName);
        cout << "Enter student ID: ";
        cin >> studentID;
        cin.ignore(); // To consume the newline character after integer input
    }

    void displayStudent() {
        cout << "Student Name: " << studentName << endl;
        cout << "Student ID: " << studentID << endl;
    }
};

int main() {
    Student s;

    s.setTeacherDetails();
    s.setAge();
    s.setStudentDetails();

    cout << "\n Displaying all details:"<<endl;
    s.displayTeacher();
    s.displayAge();
    s.displayStudent();

    return 0;
}
