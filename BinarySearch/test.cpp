//
// Created by Maik Schmidt on 31.03.23.
//
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Binary_Search.h"
#include "vector"


TEST_CASE("random")
{
    std::vector<int> vec = {3};
CHECK(find(vec , 3 ) == 0);
}

TEST_CASE("random2")
{
    std::vector<int> vec = {3 , 4 , 5 };
    CHECK(find(vec , 3 ) == 0);
}

TEST_CASE("random3")
{
    std::vector<int> vec = {3 , 4 , 5 , 9};
    CHECK(find(vec , 3 ) == 0);
}




TEST_CASE("random5")
{
    std::vector<int> vec = {3 , 4 , 5  };
    CHECK(find(vec , 4 ) == 1);
}

TEST_CASE("random6")
{
    std::vector<int> vec = {3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 , 12 , 13 };
    CHECK(find(vec , 4 ) == 1);
}

TEST_CASE("random7")
{
    std::vector<int> vec = {3 , 4 , 5 , 7 , 8 , 9 , 10 , 11 , 12 , 13 };
    REQUIRE_THROWS_AS(find(vec , 6 ) , std::domain_error);
}


TEST_CASE("random8")
{
    std::vector<int> vec = {3 , 7 , 6 , 5 , 8 , 9 , 99 , 11 , 4 , 13 };
    CHECK(find(vec , 6 ) == 2);
}

TEST_CASE("random9")
{
    std::vector<int> vec = {};
    REQUIRE_THROWS_AS(find(vec , 6 ) , std::domain_error);
}


TEST_CASE("random10")
{
    std::vector<int> vec = { 10 , 9 , 8 , 7 , 6 , 5 , 4 , 3 , 2 , 1 , 0 };
    REQUIRE_THROWS_AS(find(vec , 6 ) , std::domain_error);
}
