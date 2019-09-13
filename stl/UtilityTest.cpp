#include "UtilityTest.h"
#include <utility>
#include <iostream>
#include <map>

using namespace std;

void UtilityTest::runTest()
{
    cout << endl
         << "-----UtilityTest-----" << endl;

    pair<int, string> pairA(1, "bulbasaur");
    pair<int, string> pairB(4, "charmander");
    pair<int, string> pairC(4, "charizard");
    pair<int, string> pairD(1, "bulbasaur");

    if (pairA == pairB)
        cout << "Pair A == Pair B" << endl;

    if (pairA == pairC)
        cout << "Pair A == Pair C" << endl;

    if (pairA == pairD)
        cout << "Pair A == Pair D" << endl;
}