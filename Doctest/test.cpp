#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.hpp"
#include "header.hpp"

TEST_CASE("TEST1"){
    CHECK(mul(10,5) == 500);
    CHECK(mul(4,6) ==24 );


}
