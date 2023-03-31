#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include <string>

int roman_literal(char c)
{
	switch (c)
	{
	case 'I': return 1;
	case 'V': return 5;
	case 'X': return 10;
	case 'L': return 50;
	case 'C': return 100;
	case 'D': return 500;
	case 'M': return 1000;
	default: return -1;
	}
}

bool contains_only_roman_literals(const std::string& roman_number) 
{
	for (char c : roman_number)
	{
		if (roman_literal(c) == -1)
		{
			return false;
		}
	}
	return true;
}

bool middle_literals_cant_repeat(const std::string& roman_number)
{
	char previous = roman_number[0];
	for (size_t i = 1; i < roman_number.size(); ++i)
	{
		auto current = roman_number[i];
		if (current == previous)
		{
			if (current == 'V' || current == 'L' || current == 'D')
			{
				return false;
			}
		}
		previous = current;
	}
	return true;
}

bool no_repetition_larger_than_three(const std::string& roman_number)
{
	char previous = roman_number[0];
	int repetition = 1;
	for (size_t i = 1; i < roman_number.size(); ++i)
	{
		auto current = roman_number[i];
		if (current == previous)
		{
			repetition += 1;
			if (repetition > 3)
			{
				return false;
			}
		}
		else {
			repetition = 1;
		}
	}
	return true;
}

bool no_repetition_before_larger(const std::string& roman_number)
{
    char previous = roman_number[0];
    for (size_t i = 1; i < roman_number.size(); ++i)
    {
        auto current = roman_number[i];
        if (current == previous)
        {
            if(roman_literal(current) < roman_literal(roman_number[i+1]))
                return false;
        }
    }
    return true;
}

bool no_predesessor_to_small(const std::string& roman_number)
{
    char previous = roman_number[0];
    for (size_t i = 1; i < roman_number.size(); ++i)
    {
        auto current = roman_number[i];
        if (roman_literal(current)/ roman_literal(previous) > 10)
            return false;
    }
    return true;
}

bool is_roman_number(const std::string& roman_number)
{
	bool result = !roman_number.empty();
	result = result && contains_only_roman_literals(roman_number);
	result = result && middle_literals_cant_repeat(roman_number);
	result = result && no_repetition_larger_than_three(roman_number);
    result = result && no_repetition_before_larger(roman_number);
    result = result && no_predesessor_to_small(roman_number);
	return result;
}

int calculate_roman_number(const std::string& roman_number) 
{
	int result = 0;
	char previous = roman_number[0];
	for (size_t i=1; i<roman_number.size(); ++i)
	{
		char current = roman_number[i];
		if (roman_literal(previous) < roman_literal(current))
		{
			result -= roman_literal(previous);
		}
		else {
			result += roman_literal(previous);
		}
		previous = current;
	}
	result += roman_literal(previous);
	return result;
}

TEST_CASE("Einzelwerte")
{
	CHECK(calculate_roman_number("I") == 1);
	CHECK(calculate_roman_number("V") == 5);
	CHECK(calculate_roman_number("X") == 10);
	CHECK(calculate_roman_number("L") == 50);
	CHECK(calculate_roman_number("C") == 100);
	CHECK(calculate_roman_number("D") == 500);
	CHECK(calculate_roman_number("M") == 1000);
}

TEST_CASE("Summen") {
	CHECK(calculate_roman_number("III") == 3);
	CHECK(calculate_roman_number("MDCLXVI") == 1666);
}

TEST_CASE("Differenz") {
	CHECK(calculate_roman_number("IV") == 4);
	CHECK(calculate_roman_number("MCMLXXXIV") == 1984);
}

TEST_CASE("Nonsense") {
	CHECK(is_roman_number("T") == false);
	CHECK(is_roman_number("MT") == false);
	CHECK(is_roman_number("VV") == false);
	CHECK(is_roman_number("LL") == false);
	CHECK(is_roman_number("MDDX") == false);
	CHECK(is_roman_number("IIII") == false);
	CHECK(is_roman_number("") == false);
	CHECK(is_roman_number("IM") == false);
	CHECK(is_roman_number("IIX") == false);
}