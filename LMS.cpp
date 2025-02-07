#include "LMS.h"
#include "Student.h"
#include "Course.h"
#include "iostream"
using namespace std;

LMS::LMS(string name) {
  this->name = std::move(name);
}

void LMS::addStudent(Student student) {
  this->students.push_back(student);
}

void LMS::addCourse(Course course) {
  this->courses.push_back(course);
}

void LMS::addStudentToCourse(int student_id, int course_id) {
  for (Student &s: students) {
    if (s.getId() == student_id) {
      for (Course &c: courses) {
        if (c.getId() == course_id) {
          s.takeCourse(c);
          c.addStudent(s);
          return;
        }
      }
    }

  }
}



void LMS::printDetails() {
  cout << "LMS Name: " << name << endl;
  cout << "Students:" << endl;
  for (Student s: students) {
    s.printDetails();
  }

  cout << "Courses:" << endl;
  for (Course c: courses) {
    c.printDetails();
  }
}
