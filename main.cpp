#include "stl/VectorTest.h"
#include "stl/SetTest.h"
#include "stl/PointerTest.h"

using namespace std;

// g++ main.cpp stl/VectorTest.cpp stl/SetTest.cpp stl/PointerTest.cpp && ./main
int main()
{
    VectorTest::runTest();
    SetTest::runTest();
    PointerTest::runTest();
}
