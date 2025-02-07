#ifndef COURSE_H
#define COURSE_H

#include "string"
#include "vector"
#include "Student.h"
using namespace std;

class Student;

class Course {
private:
  int id;
  string name;
  int credits;
  vector<int> students;
public:
  Course(int id, string name, int credits); // Declaration only

  int getId();
  string getName();
  int getCredits();

  bool hasStudent(Student student);
  bool addStudent(Student student);
  void dropStudent(Student student);
  void printDetails();
};

#endif // COURSE_H
