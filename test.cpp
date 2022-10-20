#define CATCH_CONFIG_MAIN // This should come **before** including the 'catch.hpp'.
#include "catch.hpp"

using namespace std;

TEST_CASE( "DUMMY" ) {
    REQUIRE( 3 == 3 );
}