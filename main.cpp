#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "BSTMap.h"
#include "doctest.h"
#include <sstream>
#include <string>

using namespace std;

TEST_CASE("bstmap") {
  // a map from avengers to my personal ranking
  BSTMap avengersRanking;
  avengersRanking.put("Steve", 1);
  avengersRanking.put("Tony", 2);
  avengersRanking.put("Thor", 3);
  avengersRanking.put("Bruce", 4);
  avengersRanking.put("Natasha", 5);
  avengersRanking.put("Clint", 6);
  avengersRanking.put("Wanda", 7);
  // ds::BSTPrinter::print<string, int>(avengersRanking, cout);

  SUBCASE("get") {
    CHECK(avengersRanking.get("Thor") == 3);
    CHECK(avengersRanking.get("Clint") == 6);
  }

  SUBCASE("remove") {
    avengersRanking.remove("Steve");
    stringstream ss;
    avengersRanking.print(ss);
    CHECK(ss.str() == "                                                     Thor:3                                                     \n"
                      "                            ┌───────────────────────────+───────────────────────────┐                           \n"
                      "                         Bruce:4                                                 Tony:2                         \n"
                      "                            +─────────────┐                                         +─────────────┐             \n"
                      "                                      Natasha:5                                                Wanda:7          \n"
                      "                                   ┌──────+                                                                     \n"
                      "                                Clint:6                                                                         \n");
  }
}

