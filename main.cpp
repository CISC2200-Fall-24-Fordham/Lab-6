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

  //Test remove the root 
  cout <<"After removing Steve\n";
  avengersRanking.remove("Steve");
  avengersRanking.print (cout);

  //Todo: Add more test cases to remove: remove a leaf node, remove a non-leaf, none-root node... 

  //Test lookup with key and see if the right value is returned 
  assert(avengersRanking.get("Thor") == 3);
  assert(avengersRanking.get("Clint") == 6);
  //Add more testcase, what if the key is not found? 


}

