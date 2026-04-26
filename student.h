#include "MU_Person.h"
class student:public MU_person{
private:
          double gpa;; 
	
public:
    student(long=111 ,string="Nattawut",double=2.5);
    ~student();
    void display(); // display_person
   
};

student::student(long i,string n,double g) :MU_person(i,n){
       
        gpa=g;
        cout<<"MU student constructor  "<<gpa<<endl;
         
  
}
student::~student(){
     cout<<"-------"<<endl;
     cout<<"student destructor "<<gpa<<endl; 
}


void student::display(){
    display_person();
    cout<<"GPA: "<<gpa<<endl;
}