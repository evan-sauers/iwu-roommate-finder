// Provided by: Joshua Schoonmaker
// Course number: CIS-492
// FILE: algorithm-test.cpp

// Lines enclosed in /* */ are currently being worked on.

#include <cassert>
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <random>

using namespace std;

const int maxCategoryScore = 10; // Size of the answer vector and maximum response score

class Response // Simulates the database positions where responses are stored
{
  // Member variables for the Response class
  string questionText = "uninitialized";
  vector<string> responses;
  
  // Member functions for the Response class
  // Default constructor for Response class
  Response(int questionNumber)
  {
    switch(questionNumber)
    {
      case 0 :
      questionText = "What genre of movies/television shows/books do you enjoy the most?";
      responses.push_back("No Preference");
      responses.push_back("Action/Adventure");
      responses.push_back("Comedy");
      responses.push_back("Crime");
      responses.push_back("Drama");
      responses.push_back("Historical");
      responses.push_back("Horror");
      responses.push_back("Musicals");
      responses.push_back("Romantic");
      responses.push_back("Science Fiction");
      responses.push_back("Sports");
      responses.push_back("Westerns");
      break;
      case 1 :
      questionText = "What genre of movies/television shows/books do you also enjoy?";
      responses.push_back("No Preference");
      responses.push_back("Action/Adventure");
      responses.push_back("Comedy");
      responses.push_back("Crime");
      responses.push_back("Drama");
      responses.push_back("Historical");
      responses.push_back("Horror");
      responses.push_back("Musicals");
      responses.push_back("Romantic");
      responses.push_back("Science Fiction");
      responses.push_back("Sports");
      responses.push_back("Westerns");
      break;
      case 2 :
      questionText = "What genre of music do you enjoy the most?";
      responses.push_back("No Preference");
      responses.push_back("Classical");
      responses.push_back("Classic Rock");
      responses.push_back("Hard Rock");
      responses.push_back("Pop");
      responses.push_back("R&B");
      responses.push_back("Country");
      responses.push_back("Alternative");
      responses.push_back("Christian/Worship");
      break;
      case 3 :
      questionText = "What genre of music do you also enjoy?";
      responses.push_back("No Preference");
      responses.push_back("Classical");
      responses.push_back("Classic Rock");
      responses.push_back("Hard Rock");
      responses.push_back("Pop");
      responses.push_back("R&B");
      responses.push_back("Country");
      responses.push_back("Alternative");
      responses.push_back("Christian/Worship");
      break;
      /*
      case 4 :
      questionText = "What genre of movies/television shows/books do you dislike?";
      break;
      case 5 :
      questionText = "What level of cleanliness do you prefer your room to be?";
      break;
      case 6 :
      questionText = "How do you feel about roommates borrowing each others items?";
      break;
      case 7 :
      questionText = "How do you feel about having friends in your room?";
      break;
      case 8 :
      questionText = "What are your preferences on food in the room?";
      break;
      case 9 :
      questionText = "Are you a morning or a night person?";
      break;
      case 10 :
      questionText = "What time do you usually wake up in the morning?";
      break;
      case 11 :
      questionText = "What time do you usually go to bed in the evening?";
      break;
      case 12 :
      questionText = "What noise level do you prefer while sleeping?";
      break;
      case 13 :
      questionText = "What lighting do you prefer while sleeping?";
      break;
      case 14 :
      questionText = "What temperature do you prefer the room to be set?";
      break;
      case 15 :
      questionText = "What noise level do you prefer while studying?";
      break;
      case 16 :
      questionText = "When do you prefer to study?";
      break;
      case 17 :
      questionText = "What social environment do you prefer while studying?";
      break;
      case 18 :
      questionText = "My personality is usually:";
      break;
      case 19 :
      questionText = "In my social interactions, I am:";
      break;
      case 20 :
      questionText = "When it comes to issues or arguments, I tend to:";
      break;
      case 21 :
      questionText = "When ordering my life, I tend to be:";
      break;
      case 22 :
      questionText = "When making decisions, I tend to be:";
      break;
      */
    }
  }
  
  void generateRandomResponse() // Eliminates all but 1 response option based on RNG
  {
    int randomResponse = rand() % responses.size();
    string chosenResponse = responses[randomResponse];
    
    responses.assign(1, chosenResponse);
  }
};

class Survey // Simulates the surveys being submitted by students.  Made up of 22 response objects
{
  // Member variables for the Survey class
  int numberOfResponses = 22; // There are a total of 22 questions with responses
  vector <Response> responseList;
  
  // Member functions for the Survey class
  void setRandomResponses() // Populates the Survey with Response objects
  {
    for(int currentResponse = 0; currentResponse < numberOfResponses; currentResponse++)
    {
      //Response function call for filling a single response with random answers
    }
  }
  
  void setRandomResponse() // Changes a specific response to a random answer
  {
    for(int currentResponse = 0; currentResponse < numberOfResponses; currentResponse++)
    {
      //Response function call for filling a single response with random answers
    }
  }
};

class User
{
  // Member variables for the User class
  int finalScore = 0, category1 = 0, category2 = 0, category3 = 0, category4 = 0, category5 = 0; // Creating response categories to track categories
  string gender = "unspecified", sport1 = "unspecified", sport2 = "unspecified"; // Member variables for splitting users into different candidate pools, based on gender and sports respectively
  Survey  testSurvey; // Survey object associated with each user based on their responses
  
  // Member functions for the User class
  
};

/*void initializeResponses(User currentRecord)
{
  for(int i = 0; i < vectorSize; i++)
  {
    currentRecord.userResponses[i] = rand() % maxCategoryScore;
  }
} */

int main()
{
  User testUser; // Creates a test user (uninitialized)
  
  // Sort user into appropriate pool based on gender and sports team 
  
  // Check each of the user's survey results
  
    // Increment the appropriate category's total depending on responses present
    
  // Once the categories have been totalled up, compare with other records in the pool to calculate a correlation rate
  
  // Add highest correlation rates to the user's potential roommate queue
  
  return EXIT_SUCCESS;
}
