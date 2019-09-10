#include "SetTest.h"
#include <iostream>
#include <set>

using namespace std;

void SetTest::runTest()
{
    cout << "-----SetTest-----" << endl;

    set<int> s;
    s.insert(4);
    s.insert(3);
    s.insert(4);

    for (auto i : s)
        cout << i << endl; // 3 / 4
}