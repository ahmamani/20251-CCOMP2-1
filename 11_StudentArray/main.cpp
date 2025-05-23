#include <iostream>
#include "Student.h"
#include "StudentArray.h"

using namespace std;

int main()
{
    Student st1("Alvaro", 15, 1234123);
    Student st2("Juan", 20, 555555);
    Student st3("Jose", 19, 666666);
    Student st4("Andres", 21, 77777);

	Student arr[4];
	arr[0] = st1;
	arr[1] = st2;
	arr[2] = st3;
	arr[3] = st4;

   	StudentArray starr(arr, 4); 
	starr.print();

	starr.push_back(st4);
	starr.push_back(st3);
	starr.push_back(st2);
	starr.push_back(st1);
	starr.print();

	return 0;
}


























