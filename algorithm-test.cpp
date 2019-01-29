// Provided by: Joshua Schoonmaker
// Course number: CIS-492
// FILE: algorithm-test.cpp
//

#include <cassert>
#include <cstdlib>
#include <iostream>
#include <string>
#include <array>
#include <random>

namespace std

class User
{
  const int arraySize = 20, maxCategoryScore = 10; // Size of the answer array and maximum response score
  int finalScore = 0, category1 = 0, category2 = 0, category3 = 0, category4 = 0, category5 = 0;
  array <String, arraySize> userResponses;
}

void initializeResponses()
{
  for(i = 0, i < arraySize, i++)
  {
    userResponses[i] = rand() % maxCategoryScore
  }
}

int main()
{
  initializeResponses()
  
  return EXIT_SUCCESS;
}

