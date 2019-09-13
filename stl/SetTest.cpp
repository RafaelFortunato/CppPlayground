

#include "SetTest.h"
#include <iostream>
#include <set>

using namespace std;

void SetTest::runTest()
{
    cout << endl
         << "-----SetTest-----" << endl;

    set<int> s;
    s.insert(4);
    s.insert(3);
    s.insert(4);

    for (auto i : s)
        cout << i << endl; // 3 / 4

    if (s.find(4) != s.end())
    {
        cout << "Set contains 4" << endl;
    }

    int arr[] = {9, 7, 4, 5, 6, 1, 2};
    removeDuplicates(arr, 7);
}

void SetTest::removeDuplicates(int arr[], int n)
{
    set<int> s;

    for (int i = 0; i < n; i++)
    {
        s.insert(arr[i]);
    }

    for (auto value : s)
    {
        cout << value << " ";
    }
}
