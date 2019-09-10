#include <iostream>
#include <algorithm>
#include <vector>
#include "VectorTest.h"

using namespace std;

void VectorTest::runTest()
{
    cout << "-----VectorTest-----" << endl;

    vector<int> v = {5, 9, 3};

    v.pop_back();
    v.push_back(5);

    sort(v.begin(), v.end());

    for (auto i : v)
        cout << i << endl; // 5 / 5 / 9
}