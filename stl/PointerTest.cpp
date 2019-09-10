#include <iostream>
#include "PointerTest.h"

using namespace std;

void alterVar(int &x, int y)
{
    x = 7;
    y = 7;
}

void PointerTest::runTest()
{
    cout << "-----PointerTest-----" << endl;

    int x = 3, y = 3;

    cout << "Before [" << x << "] / [" << y << "]" << endl; // 3 / 3
    alterVar(x, y);
    cout << "After [" << x << "] / [" << y << "]" << endl; // 7 / 3
}