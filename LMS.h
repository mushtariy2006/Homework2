#ifndef LMS_H
#define LMS_H

#include "vector"
#include "string"

class Student;
class Course;

using namespace std;

class LMS {
private:
  string name;
  vector<Student> students;
  vector<Course> courses;
public:
  explicit LMS(string name);
  void addStudent(Student student);
  void addCourse(Course course);
  void addStudentToCourse(int student_id, int course_id);
  void printDetails();
};

#endif // LMS_H
