#ifndef STUDENT_H
#define STUDENT_H

#include "vector"
#include "string"
#include "Course.h"
using namespace std;

class Course;

class Student {
private:
  int id;
  int takenCredits = 0;
  string name;
  vector<int> enrolledCourses;
  int MAX_ALLOWED_CREDITS = 18;

public:
  Student(int id, string name);
  int getId() const;
  string getName();

  vector<int> getEnrolledCourses();

  bool takesCourse(Course course);

  bool takeCourse(Course course);

  void dropCourse(Course &course);

  void printDetails();
};


#endif //STUDENT_H
