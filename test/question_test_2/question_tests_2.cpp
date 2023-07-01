#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question2.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("roll")
{
	for (int i = 0; i < 10; i++)
	{
		int random = roll_die();
		bool test_roll = random < 7 && random > 0;
		REQUIRE(test_roll);
	}
	
}