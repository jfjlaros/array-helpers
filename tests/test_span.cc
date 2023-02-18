#include <catch.hpp>

#include "../src/span.tcc"

TEST_CASE("Span of type char.", "[span]") {
  char arr[] {'a', 'b', 'c'};

  SECTION("Non-const.") {
    Span<char> span {arr};

    SECTION("Size.") {
      REQUIRE(span.size() == sizeof(arr));
    }

    SECTION("Data.") {
      REQUIRE(span.data() == arr);
    }

    SECTION("Get.") {
      REQUIRE(span[0] == 'a');
      REQUIRE(span[1] == 'b');
      REQUIRE(span[2] == 'c');
    }

    SECTION("Set.") {
      span[1] = 'x';
      REQUIRE(span[1] == 'x');
    }

    SECTION("Range loop.") {
      for (char& el: span) {
        el = 'x';
      }
      for (char const& el: span) {
        REQUIRE(el == 'x');
      }
    }
  }

  SECTION("Const.") {
    Span<char> const span {arr};

    SECTION("Get.") {
      REQUIRE(span[0] == 'a');
      REQUIRE(span[1] == 'b');
      REQUIRE(span[2] == 'c');
    }
  }
}

TEST_CASE("Span of type int.", "[span]") {
  int arr[] {1, 2, 3};
  Span<int> span {arr};

  SECTION("Size.") {
    REQUIRE(span.size() == sizeof(arr) / sizeof(arr[0]));
  }
}

TEST_CASE("Span as parameter.", "[span]") {
  struct S {
    static void fRef(Span<int>& span) {
      REQUIRE(span.size() == 2);
      REQUIRE(span[0] == 1);
      REQUIRE(span[1] == 2);
    }
    static void fVal(Span<int> span) {
      REQUIRE(span.size() == 2);
      REQUIRE(span[0] == 1);
      REQUIRE(span[1] == 2);
    }
  };
  int arr[] {1, 2};

  SECTION("Reference.") {
    Span<int> span {arr};
    S::fRef(span);
  }

  SECTION("Value (copy constructor).") {
    Span<int> span {arr};
    S::fVal(span);
  }

  SECTION("Value (constructor).") {
    S::fVal(arr);
  }
}
