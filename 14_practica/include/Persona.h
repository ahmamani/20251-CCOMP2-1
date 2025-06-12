#ifndef PERSONA_H
#define PERSONA_H

#include <string>

class Persona
{
    protected:
        std::string name;
        int age;
    public:
        Persona();
        Persona(std::string name, int age);

        void setName(std::string n);
        std::string getName() const;
        void setAge(int a);
        int getAge() const;
        virtual void print() const = 0;
};

#endif // PERSONA_H
