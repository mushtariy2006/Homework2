#include "Student.h"
#include "iostream"
#include "Course.h"
#include "vector"
using namespace std;

Student::Student(int id, string name) {
  this -> id = id;
  this -> name = name;
}

int Student::getId() const {
  return id;
}

string Student::getName() {
  return name;
}

vector<int> Student::getEnrolledCourses() {
  return enrolledCourses;
}

bool Student::takesCourse(Course course) {
  for (int enrolledCourse : enrolledCourses) {
    if (course.getId() == enrolledCourse) {
      return true;
    }
  }
  return false;
}


bool Student::takeCourse(Course course) {

  if (takenCredits > MAX_ALLOWED_CREDITS) {
    return false;
  }
  for (int enrolledCourse : enrolledCourses) {
    if (course.getId() == enrolledCourse) {
      return false;
    }
  }
  enrolledCourses.push_back(course.getId());
  takenCredits += course.getCredits();

  return true;
}


void Student::dropCourse(Course &course) {
  {
    for (int i = 0; i < enrolledCourses.size(); i++) {
      if (course.getId() == enrolledCourses[i]) {
        enrolledCourses.erase(enrolledCourses.begin() + i);
      }
    }
  }
}

void Student::printDetails() {
  cout << "Student ID: " << id << ", Name: " << name << endl;
  cout << "Enrolled Courses: ";
  for (int enrolledCourse : enrolledCourses) {
    cout << enrolledCourse << " ";
  }
  cout << endl;
}

