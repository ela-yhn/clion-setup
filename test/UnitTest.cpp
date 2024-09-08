// https://github.com/catchorg/Catch2/blob/v2.x/docs/assertions.md
#include <catch.hpp>
#include <iostream>

#include <factorial.hpp>

// ==============================================================================
// ============================== Testing examples ==============================
// ==============================================================================
TEST_CASE("always passing") {
	REQUIRE(1 == 1);

	SECTION("example: basic assertion") {
		// TODO: fix the following test to get it to pass
		REQUIRE(1 == 2);
	}

	SECTION("example: throwing an exception") {
		// we will learn about exceptions in Week 4
		REQUIRE_THROWS_AS(throw std::logic_error(""), std::logic_error);
	}
}

TEST_CASE("factorial") {
	SECTION("factorial(0)") {
		REQUIRE(factorial(0) == 1);
	}

	SECTION("factorial(1)") {
		REQUIRE(factorial(1) == 1);
	}

	SECTION("factorial(3)") {
		REQUIRE(factorial(3) == 6);
	}

	SECTION("factorial(10)") {
		REQUIRE(factorial(10) == 3628800);
	}
}
