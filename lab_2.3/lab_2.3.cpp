#include <iostream>
#include "LongLong.h"

using namespace std;

int main()
{
    LongLong l;

    cout << "Enter l : "; cin >> l;

    cout << l << endl;

    cout << "Addition : " << l.getOlder() + l.getYounger() << endl;
    cout << "Multiplication : " << l.getOlder() * l.getYounger() << endl;
    cout << "Comparing : ";
    l.Compare();
}
