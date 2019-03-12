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
  public:
  // Member variables for the Response class
  string questionText = "uninitialized";
  vector<string> responses;
  
  // Default constructor for Response class
  Response(int questionNumber)
  {
    cout << "Step #1" << endl; // Execution Test #1
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
      questionText = "What genre of movies/television shows/books do you dislike?";
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
      case 3 :
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
      case 4 :
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
      case 5 :
      questionText = "What level of cleanliness do you prefer your room to be?";
      responses.push_back("Spotless/Very Clean");
      responses.push_back("Neat");
      responses.push_back("Lived In");
      responses.push_back("No Preference");
      break;
      case 6 :
      questionText = "How do you feel about roommates borrowing each others items?";
      responses.push_back("My roommate can borrow items without asking");
      responses.push_back("My roommate can borrow items with asking");
      responses.push_back("I do not wish to share my items");
      responses.push_back("No preference");
      break;
      case 7 :
      questionText = "How do you feel about having friends in your room?";
      responses.push_back("I want our room to be a social gathering place where friends can come over anytime.");
      responses.push_back("Friends are welcome, but at reasonable hours.");
      responses.push_back("Friends are allowed every once in a while, with the other person’s permission.");
      responses.push_back("I prefer to keep our room private. We can hang out with friends somewhere else.");
      responses.push_back("No preference.");
      break;
      case 8 :
      questionText = "What are your preferences on food in the room?";
      responses.push_back("I don’t mind sharing food. We’ll take turns buying snacks for the room.");
      responses.push_back("I don’t mind sharing food, with the other person’s permission.");
      responses.push_back("I don’t want to share food.");
      responses.push_back("No preference.");
      break;
      case 9 :
      questionText = "Are you a morning or a night person?";
      responses.push_back("Morning");
      responses.push_back("Night");
      responses.push_back("No preference");
      break;
      case 10 :
      questionText = "What time do you usually wake up in the morning?";
      responses.push_back("Before 6 AM");
      responses.push_back("Between 6 AM to 8 AM");
      responses.push_back("Between 8 AM to 10 AM");
      responses.push_back("After 10 AM");
      break;
      case 11 :
      questionText = "What time do you usually go to bed in the evening?";
      responses.push_back("Before 8 PM");
      responses.push_back("Between 8 PM to 10 PM");
      responses.push_back("Between 10 PM to 12 AM");
      responses.push_back("After 12 AM");
      break;
      case 12 :
      questionText = "What noise level do you prefer while sleeping?";
      responses.push_back("Absolute silence");
      responses.push_back("Soft noise (music/television on low)");
      responses.push_back("Medium noise (fan/white noise)");
      responses.push_back("Loud noise");
      responses.push_back("No preference");
      break;
      case 13 :
      questionText = "What lighting do you prefer while sleeping?";
      responses.push_back("I like the lights on.");
      responses.push_back("I don’t mind a small amount of light.");
      responses.push_back("I need complete darkness.");
      responses.push_back("No preference.");
      break;
      case 14 :
      questionText = "What temperature do you prefer the room to be set?";
      responses.push_back("Cold (under 65)");
      responses.push_back("Cool (between 65 and 70)");
      responses.push_back("Warm (between 70 and 75)");
      responses.push_back("Hot (above 75)");
      responses.push_back("No preference");
      break;
      case 15 :
      questionText = "What noise level do you prefer while studying?";
      responses.push_back("Absolute silence");
      responses.push_back("Soft noise");
      responses.push_back("Medium noise");
      responses.push_back("Loud noise");
      responses.push_back("No preference");
      break;
      case 16 :
      questionText = "When do you prefer to study?";
      responses.push_back("In the morning");
      responses.push_back("In the afternoon");
      responses.push_back("In the evening");
      responses.push_back("Throughout the day");
      responses.push_back("No preference");
      break;
      case 17 :
      questionText = "What social environment do you prefer while studying?";
      responses.push_back("Alone");
      responses.push_back("In small groups");
      responses.push_back("In large groups");
      responses.push_back("Depends on the situation");
      responses.push_back("No preference");
      break;
      case 18 :
      questionText = "My personality is usually:";
      responses.push_back("Laid-back. I don’t need much to be entertained.");
      responses.push_back("Somewhere in the middle.");
      responses.push_back("Energetic. I like to try new things and keep moving.");
      break;
      case 19 :
      questionText = "In my social interactions, I am:";
      responses.push_back("Extroverted. I like to usually be around people and expressing myself.");
      responses.push_back("Somewhere in the middle.");
      responses.push_back("Introverted. I like to usually be alone and keep to myself.");
      break;
      case 20 :
      questionText = "When it comes to issues or arguments, I tend to:";
      responses.push_back("State my opinions and am confident in sharing how I think.");
      responses.push_back("Somewhere in the middle.");
      responses.push_back("Keep my opinions to myself and respect others who do the same.");
      break;
      case 21 :
      questionText = "When ordering my life, I tend to be:";
      responses.push_back("More of a free-spirit, and make decisions based on my heart.");
      responses.push_back("Somewhere in the middle.");
      responses.push_back("More level-headed, and make decisions based on reasoning.");
      break;
      case 22 :
      questionText = "When making decisions, I tend to be:";
      responses.push_back("Spontaneous, making the decision as it happens.");
      responses.push_back("Somewhere in the middle.");
      responses.push_back("Prepared, I like to follow a structured plan.");
      break;
    }
    
    cout << "Step #2" << endl; // Execution Test #2
    generateRandomResponse();
    
    cout << "Step #3" << endl; // Execution Test #3
    /*for (int i = 0; i < responses.size(); i++)
    {
      cout << responses[i] << endl;
    }*/
    
  // Member functions for the Response class
  }
  
  string getResponse(int questionNumber)
  {
    return responses[questionNumber + 1];
  }
  
  
  void generateRandomResponse() // Eliminates all but 1 response option based on RNG
  {
    int randomResponse = rand() % responses.size();
    string chosenResponse = responses[randomResponse];
    
    responses.assign(1, chosenResponse);
    
    cout << "Random response checks out" << endl;
  }
};

class Survey // Simulates the surveys being submitted by students.  Made up of 22 response objects
{
  public:
  // Member variables for the Survey class
  int numberOfResponses = 22; // There are a total of 22 questions with responses
  vector <Response> responseList;
  string isRandom = "Y";
  
  Survey()
  {
    cout << "Populate survey with random responses? (y/n)" << endl;
    cin >> isRandom;
    
    if (isRandom == "Y" || isRandom == "y")
    {
      setRandomResponses();
      cout << "Step #5" << endl; // Execution Test #5
    }
    else
    {
      cout << "Not yet implemented." << endl;
    }
  }
  
  // Member functions for the Survey class
  string getResponse(int questionNumber) // Getting the result from a specific survey answer
    {
      return responseList[questionNumber + 1].getResponse(questionNumber);
    }
    
  void setRandomResponses() // Populates the Survey with Response objects
  {
    cout << "Initializing function setRandomResponses()" << endl;
    for(int currentResponse = 0; currentResponse < numberOfResponses; currentResponse++)
    {
      cout << "------ Response #" << (currentResponse + 1) << ": ------" << endl;
      
      
      //Response function call for filling a single response with random answers
      responseList[currentResponse] = Response(currentResponse);
      cout << "Step #4" << endl; // Execution Test #4
    }
  }
  
  void setSpecificResponse() // Changes a specific response to a random answer
  {
    for(int currentResponse = 0; currentResponse < numberOfResponses; currentResponse++)
    {
      //Response function call for filling a single response with random answers
    }
  }
};


class User
{
  public:
  // Member variables for the User class
  int finalScore = 0, category1 = 0, category2 = 0, category3 = 0, category4 = 0, category5 = 0; // Creating response categories to track categories
  string gender = "unspecified", sport1 = "unspecified", sport2 = "unspecified"; // Member variables for splitting users into different candidate pools, based on gender and sports respectively
  Survey  testSurvey; // Survey object associated with each user based on their responses
  vector<User> roommatePool; // Pool object for storing the relevant roommate results (vector)
  
  // Member functions for the User class
  User()
  {
    initializePool();
  }
  
    void initializePool()
  {
    cout << "What is your gender? (Male/Female/Other)";
    cin >> gender;
    
    
  }
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
    
  // Once the categories have been totalled up, compare 
  
  
  return EXIT_SUCCESS;
}
