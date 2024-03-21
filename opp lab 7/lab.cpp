#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

class Course; 

class Student {
private:
    int studentID;
    string name;
    string email;
    vector<Course*> coursesEnrolled;

public:
    Student(int id, string n, string e) : studentID(id), name(n), email(e) {}

    void enrollCourse(Course* course);
    void dropCourse(Course* course);
    void viewCourses();
    void saveToFile(ofstream& file);

    // Add getters for private members
    int getStudentID() const { return studentID; }
    const string& getName() const { return name; }
};

class Teacher {
private:
    int teacherID;
    string name;
    string email;
    vector<Course*> coursesTaught;

public:
    Teacher(int tid, string n, string e) : teacherID(tid), name(n), email(e) {}

    void assignCourse(Course* course);
    void removeCourse(Course* course);
    void viewCourses();
    void saveToFile(ofstream& file);

    // Add getters for private members
    int getTeacherID() const { return teacherID; }
    const string& getName() const { return name; }
};



