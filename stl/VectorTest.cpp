#include <iostream>
#include <algorithm>
#include <vector>
#include "VectorTest.h"

using namespace std;

void VectorTest::runTest()
{
    cout << endl
         << "-----VectorTest-----" << endl;

    vector<int> v = {5, 9, 3};

    v.pop_back();
    v.push_back(5);

    sort(v.begin(), v.end());

    for (auto i : v)
        cout << i << endl; // 5 / 5 / 9

    if (find(v.begin(), v.end(), 9) != v.end())
    {
        cout << "Vector contains 9" << endl;
    }
}