#include <iostream>
#include "Student.h"

using namespace std;

int main()
{
    Student *ptr;
    if(true) {
        Student st;
        ptr = &st;
    }
    cout << ptr->getAge() << endl;

    Student *ptr2 = new Student("Alvaro", 15, 1234123);
    ptr2->print();
    delete ptr2;

    return 0;
}
