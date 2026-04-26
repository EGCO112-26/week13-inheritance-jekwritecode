#include "NODE.h"
using namespace std;

class MU_person:public NODE{
private: long id;
string name;
protected:

public:
	MU_person(long=112 ,string="Cid");
  void display_person();
  ~MU_person();
};



MU_person::~MU_person(){
    cout<<"Destructor id="<<id<<endl;
}
MU_person::MU_person(long id,string n):NODE(id){
  name=n;
 cout<<"MU person constructor "<<id<<endl;
}

void MU_person::display_person(){
  cout<<"Show info for the person"<<endl;
  cout<<"id: "<<id<<endl;
  cout<<"name: "<<name<<endl;
    
}