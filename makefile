compile: MU_Person.h student.h main.cpp
	g++ LL.cpp NODE.cpp LL_test.cpp  -o inh
make:inh
		./inh
run:inh
	rm inh