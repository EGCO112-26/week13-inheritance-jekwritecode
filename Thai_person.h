class Thai_person{
	private: 
		long nat_id;
	public: 
		Thai_person(long=0);
		void display_nat();
 };

Thai_person::Thai_person(long nid){
		nat_id=nid;
        cout<<"Nat id:"<<nat_id<<endl;
		cout<<"MU student constructor  "<<nat_id<<endl;
}
void Thai_person::display_nat(){
  cout<<"Nat_id: "<<nat_id<<endl;
    
}