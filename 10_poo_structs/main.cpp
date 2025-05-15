#include <iostream>

using namespace std;

struct Student {
    private:
        std::string name;
        int age;
        int code;
    public:
        void print() const {
            cout << name << endl;
            cout << age << endl;
            cout << code << endl;
        }
};

int main()
{
    Student st;
    st.name = "Gustavo";
    st.age = 20;
    st.code = 55555;
    st.print();

    Student st2;
    st2.name = "Adolfo";
    st2.age = 25;
    st2.code = 444444;
    st2.print();

    return 0;
}
