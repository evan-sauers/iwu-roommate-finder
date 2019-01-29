// Provided by: Joshua Schoonmaker
// Course number: CIS-492
// FILE: algorithm-test.cpp

#include <cassert>
#include <cstdlib>
#include <iostream>
#include <string>
#include <array>
#include <random>

namespace std

const int arraySize = 20, maxCategoryScore = 10; // Size of the answer array and maximum response score

class questionResponses
{
  String questionText;
  array <String, numberOfResponses> responseValues;
  
  questionResponses::questionResponses(String question, int numberOfResponses) //Constuctor for building the question array
  {
    questionText = question;
    for (int i = 0; i < numberOfResponses; i++)
    {
      
    }
  }
}

class User
{
  int finalScore = 0, category1 = 0, category2 = 0, category3 = 0, category4 = 0, category5 = 0; //Creating response categories to track categories
  array <Response, arraySize> userResponses; //Creating array for user responses (Uninitialized)
}

void initializeResponses(User currentRecord)
{
  for(i = 0, i < arraySize, i++)
  {
    currentRecord.userResponses[i] = rand() % maxCategoryScore;
  }
}

int main()
{
  initializeResponses()
  
  return EXIT_SUCCESS;
}

