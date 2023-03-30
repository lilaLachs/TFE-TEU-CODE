
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "A1.h"


TEST_CASE("random")
{
  CHECK(foo(5) == 5);
}
