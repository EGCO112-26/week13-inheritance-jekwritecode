#include <iostream>
#include "NODE.h"
using namespace std;

NODE::NODE(int i){
      id=i;
      next=NULL;
      cout<<"adding "<< i<<endl;
}
  NODE:: ~NODE(){
      cout<<"Node "<<id<<" is being deleted"<<endl;
}
NODE* NODE::move_next(){
      return next;
}
void  NODE:: show_node(){
         cout<<"Node data:"<<id<<endl;
 }
void NODE::insert(NODE*& i){
     i->next=this;

     }