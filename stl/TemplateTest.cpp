#include "TemplateTest.h"
#include <iostream>

using namespace std;

template <typename T>
void print(T value)
{
    cout << value << endl;
}

void TemplateTest::runTest()
{
    cout << endl
         << "-----TemplateTest-----" << endl;

    print(true);
    print(13);
    print(0.9760f);
    print('c');
    print("String Print");
}
