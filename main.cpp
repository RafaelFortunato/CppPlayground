#include "stl/VectorTest.h"
#include "stl/SetTest.h"
#include "stl/PointerTest.h"
#include "stl/UtilityTest.h"
#include "stl/StackTest.h"
#include "stl/TemplateTest.h"
#include "stl/FriendTest.h"

using namespace std;

/**
g++ *.cpp stl/*.cpp && ./a.out
 **/
int main()
{
    VectorTest::runTest();
    SetTest::runTest();
    PointerTest::runTest();
    UtilityTest::runTest();
    StackTest::runTest();
    TemplateTest::runTest();
    FriendTest::runTest();
}
