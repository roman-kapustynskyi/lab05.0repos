#include "pch.h"
#include "CppUnitTest.h"
double g(const double a, const double b);
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest050
{
    TEST_CLASS(UnitTest050)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            double expected = 7.0;
            double actual = g(1.0, 2.0);

            Assert::AreEqual(expected, actual, 0.0001);
        }
    };
}