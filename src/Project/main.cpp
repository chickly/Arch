#include "student.h"
int main() {
  Student* pStu = new Student;
  pStu->name    = "wuzhongqiang";
  pStu->age     = 25;
  pStu->score   = 92.5f;
  pStu->say();
  delete pStu;
}