#include <iostream>
using namespace std;
#include "student.h"

int main(){
//MU_person m;
//m.display_person();

student m1(6613121,"Vivi",2);//,m2(6812007),m3;
m1.display(); //id gpa name
m1.display_person();

 // student m1(6613118,3.9,"Atom");
//student m2(6613112),m3,*p;
  //m1.display(); // id gpa name
  cout<<endl<<"======="<<endl;
  
//  p=new student(6613265,1.7,"Hok");
 // delete p;
  
  return 0;
   }

// Add constructor --> set name 
// modify display() -->id/name/gpa