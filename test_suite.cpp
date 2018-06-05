#include <boost/test/included/unit_test.hpp>
using namespace boost::unit_test_framework;
int add(int a, int b) {
    return a + b;
}

int mult(int a, int b) {
    return a * b;
}

void test_add() {
    BOOST_TEST(add(1, 2) == 3);
}

void test_mult() {
    BOOST_TEST(mult(10, 100) == 1000);
}

test_suite* init_unit_test_suite(int argc, char** argv) {
    test_suite* test = BOOST_TEST_SUITE("BOOST TEST SUITE EXAMPLE");
    test->add(BOOST_TEST_CASE(test_add));
    test->add(BOOST_TEST_CASE(test_mult));

    return test;
}
