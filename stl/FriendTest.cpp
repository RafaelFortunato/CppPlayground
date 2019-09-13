#include "FriendTest.h"
#include <iostream>

using namespace std;

void FriendTest::runTest()
{
    cout << endl
         << "-----FriendTest-----" << endl;

    PrivateFieldClass privateFieldClass;
    cout << privateFieldClass.privateField << endl;
}