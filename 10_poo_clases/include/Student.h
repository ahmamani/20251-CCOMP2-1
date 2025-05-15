#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student
{
    private:
        std::string name;
        int age;
        int code;
    public:
        void setName(std::string n) {
            name = n;
        }
        void setAge(int a) {
            age = a;
        }
        void setCode(int c) {
            code = c;
        }
        std::string getName() const {
            return name;
        }
        int getAge() const {
            return age;
        }
        int getCode() const {
            return code;
        }

};

#endif // STUDENT_H
