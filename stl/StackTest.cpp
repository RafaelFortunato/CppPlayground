#include "StackTest.h"
#include <iostream>
#include <stack>

using namespace std;

void StackTest::runTest()
{
    cout << endl
         << "-----StackTest-----" << endl;

    stack<int> myStack;
    myStack.push(1);
    myStack.push(5);
    myStack.push(9);

    while (!myStack.empty())
    {
        cout << myStack.top() << endl;
        myStack.pop();
    }
}
