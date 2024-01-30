#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>

// TEST_CASE("Sums all numbers up in given vector", "[sum]") {
//     std::vector<int> v{1,2,3,4,5};
    
//     SECTION("Vector eleemnts are added up (sum)", ""){
//         REQUIRE(v{1,2,3,4,5} == 15);
//     }
       

   
// }

TEST_CASE( "Sums all numbers in a vector", "[sumVect]" ) {
    std::vector<double> vec = {1,2,3,4};
    REQUIRE(Sum(vec) == 10);
}