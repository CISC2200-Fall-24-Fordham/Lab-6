#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "BSTMap.h"
#include <iostream>
#include <sstream>
#include <string>
#include <assert.h>

using namespace std;

int main()
{
  // a map from avengers to my personal ranking
  BSTMap avengersRanking;
  avengersRanking.put("Steve", 1);
  avengersRanking.put("Tony", 2);
  avengersRanking.put("Thor", 3);
  avengersRanking.put("Bruce", 4);
  avengersRanking.put("Natasha", 5);
  avengersRanking.put("Clint", 6);
  avengersRanking.put("Wanda", 7);
  avengersRanking.print (cout);





    cout <<"After removing Steve\n";
    avengersRanking.remove("Steve");
    avengersRanking.print (cout);

    assert(avengersRanking.get("Thor") == 3);
    assert(avengersRanking.get("Clint") == 6);


}

