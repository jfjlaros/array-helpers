#include <catch.hpp>

#include "../src/size.tcc"


TEST_CASE("Size of char array.", "[size]") {
  char arr[3] {};

  REQUIRE(arraySize(arr) == sizeof(arr));
}

TEST_CASE("Size of int array.", "[size]") {
  int arr[3] {};

  REQUIRE(arraySize(arr) == sizeof(arr) / sizeof(arr[0]));
}
