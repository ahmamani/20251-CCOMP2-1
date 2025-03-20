#include <iostream>

using namespace std;

int main()
{
    char var = '1';

    long val = static_cast<int>(var);

    cout << var << " - " << val << endl;
    return 0;
}
