#include "Student.h"
#include "iostream"
using namespace std;

Course::Course(int id, string name, int credits) {
  this->id = id;
  this->name = std::move(name);
  this->credits = credits;
}


int Course::getId() {
  return id;
}

string Course::getName() {
  return name;
}

int Course::getCredits() {
  return credits;
}

bool Course::hasStudent(Student student) {
  for (int id : students) {
    if (id == student.getId()) {
      return true;
    }
  }
  return false;
}

bool Course::addStudent(Student student) {
  if (!hasStudent(student) && student.takesCourse(*this)) {
    students.push_back(student.getId());
    return true;
  }
  return false;
}

void Course::dropStudent(Student student) {
  for (int i = 0; i < students.size(); i++) {
    if (students[i] == student.getId()) {
      students.erase(students.begin() + i);
    }
  }
}

void Course::printDetails() {
  cout<<"Course ID: "<< getId() << ", Name: " << getName();
  cout << ", Credits: " << getCredits() << endl;
  cout<<"Enrolled Students: ";
  for (int s : students) {
    cout << s << " ";
  }
  cout << endl;
}
