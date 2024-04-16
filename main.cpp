#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "BSTMap.h"
#include <iostream>
#include <sstream>
#include <string>
#include <assert.h>

using namespace std;

int main()
{
  // a map from rankings to avengers 
  BSTMap avengersRanking;
  avengersRanking.put(4,"Bruce");
  avengersRanking.put(2,"Tony");
  avengersRanking.put(3,"Thor");
  avengersRanking.put(1,"Steve");
  avengersRanking.put(5,"Natasha");
  avengersRanking.put(6,"Clint");
  avengersRanking.put(7,"Wanda");
  avengersRanking.print (cout);

  //Test remove the root 
  cout <<"After removing 4\n";
  avengersRanking.remove(4);
  avengersRanking.print (cout);

  

  //Todo: Add more test cases to remove: remove a leaf node, remove a non-leaf, none-root node... 

  //Test lookup with key and see if the right value is returned 
  assert(avengersRanking.get(3)=="Thor");
  assert(avengersRanking.get(6)=="Clint");
  //Add more testcase, what if the key is not found? 


}

