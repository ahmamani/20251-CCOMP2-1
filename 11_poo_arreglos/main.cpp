#include <iostream>
#include "Student.h"

using namespace std;

int main()
{
    Student st1("Alvaro", 15, 1234123);
    Student st2("Juan", 20, 555555);
    Student st3("Jose", 19, 666666);
    Student st4("Andres", 21, 77777);

	Student *arr = new Student[4];
	Student *ptr = arr;

	arr[0] = st1;		
	arr[1] = st2;		
	arr[2] = st3;		
	arr[3] = st4;		

	for(int i = 0; i < 4; i++, ptr++)
		ptr->print();
	ptr--;
	for(int i = 0; i < 4; i++, ptr--)
		ptr->print();
	

	delete[] arr;
    return 0;
}
