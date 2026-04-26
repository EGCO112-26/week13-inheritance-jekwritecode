#include <iostream>
#include <cstdlib>
#include "student.h"
#include "LL.h"
using namespace std;
int main(int argc, char *argv[])
{  LL A;
    int i;
    NODE *t;
   for (int i = 1; i <argc; i += 3) {
        string n =argv[i+2];
        t=new student(atoi(argv[i]),n,atof(argv[i+1]));
        A.add_node(t);
}
    A.show_all();
   
    return 0;
}