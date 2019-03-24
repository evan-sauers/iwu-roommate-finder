// Provided by: Joshua Schoonmaker
// Course number: CIS-492
// FILE: algorithm-test.cpp

// Lines enclosed in /* */ are currently being worked on.

#include <cassert>
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <random>

using namespace std;


/* Global Constant Variable Declarations */

const int maxCategoryScore = 10; // Size of the answer vector and maximum response score


/* Class Initializations */

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
  float finalScore = 0, category1 = 0, category2 = 0, category3 = 0, category4 = 0, category5 = 0;
  int userID = 0; // Creating response categories to track categories
  string gender = "unspecified", sport1 = "unspecified", sport2 = "unspecified"; // Member variables for splitting users into different candidate pools, based on gender and sports respectively
  // Survey  testSurvey; // Survey object associated with each user based on their responses
  vector<User> roommatePool, possibleRoommates; // Vectors for storing the relevant roommate results
  vector<float> roommateCorrelations; // Vector for storing the correlation percentages of each roommate.  Parallel with roommatePool
  
  // Member functions for the User class
  User()
  {
    
  }
  
    void initializePool()
  {
    cout << "User " << userID << " sex: ";
    cin >> gender;
  }
  
  void setID(int IDNumber)
  {
    userID = IDNumber;
  }
  
  void setCategories()
  {
      switch(userID)
      {
        case 1 :
        category1 = 1;
        category2 = 2;
        category3 = 3;
        category4 = 4;
        category5 = 5;
        break;
        case 2 :
        category1 = 3;
        category2 = 4;
        category3 = 3;
        category4 = 5;
        category5 = 1;
        break;
        case 3 :
        category1 = 3;
        category2 = 5;
        category3 = 5;
        category4 = 1;
        category5 = 1;
        break;
        case 4 :
        category1 = 3;
        category2 = 1;
        category3 = 2;
        category4 = 5;
        category5 = 5;
        break;
      }
  }
  
  void addPotentialRoommate(User potentialRoommate)
  {
    possibleRoommates.push_back(potentialRoommate);
  }
  
  int getID()
  {
    return userID;
  }
  
  string getGender()
  {
    return gender;
  }
  
  float getCorrelation(int currentLocation)
  {
    return roommateCorrelations[currentLocation];
  }
  
  void listCategories()
  {
    cout << "Category A = " << category1 << ",  Category B = " << category2 << ",  Category C = " << category3 << ",  Category D = " << category4 << ",  Category E = " << category5 << endl << endl;
  }
  
  void listPotentialRoommates()
  {
    cout << "Current potential roommates for User " << userID <<" (" << possibleRoommates.size() << " options) : ";
    
    //Loop for listing off each roommate currently listed as a potential - unsorted
    for(int i = 0; i < possibleRoommates.size(); i++)
    {
      cout << possibleRoommates[i].getID() << ", ";
    }
    
    cout << endl;
  }
  
  void listCorrelatedRoommates()
  {
    cout << "Current potential roommates and correlations for User " << userID <<" (" << possibleRoommates.size() << " options) : ";
    
    //Loop for listing off each roommate currently listed as a potential - unsorted
    for(int i = 0; i < possibleRoommates.size(); i++)
    {
      cout << possibleRoommates[i].getID() << " (" << roommateCorrelations[i] << "), ";
    }
    
    cout << endl;
  }
  
  void listRoommates()
  {
    cout << "Current sorted roommates for User " << userID <<" (" << roommatePool.size() << " options) : ";
    
    //Loop for listing off each roommate currently listed as a potential - unsorted
    for(int i = 0; i < roommatePool.size(); i++)
    {
      cout << roommatePool[i].getID() << " (" << static_cast<int>(roommatePool[i].finalScore * 100) <<"%), ";
    }
    
    cout << endl;
  }
};  // End of User Class


/* Function Initializations */

/*void initializeResponses(User currentRecord)
{
  for(int i = 0; i < vectorSize; i++)
  {
    currentRecord.userResponses[i] = rand() % maxCategoryScore;
  }
} */

void compareGenders (User &comparingUser, User &comparedUser)
{
  // Are the two users the same gender?
  if(comparingUser.getGender() == comparedUser.getGender())
  {
    // Add the comparedUser to the possible roommates vector of the comparing user
    comparingUser.addPotentialRoommate(comparedUser);
  }
  else
  {
    return;
  }
}


void sortPotentialRoommates(User &comparingUser)
{
  float correlationScore1 = 0, correlationScore2 = 0, correlationScore3 = 0, correlationScore4 = 0, correlationScore5 = 0;
  
  // Compare individual category scores and aggregate into a final correlation rate
  for(int i = 0; i < comparingUser.possibleRoommates.size(); i++) // Creating a loop to compare the current user with all other users
  {
    // Comparing category 1
    if (comparingUser.category1 >= comparingUser.possibleRoommates[i].category1)
    {
      correlationScore1 = comparingUser.possibleRoommates[i].category1 / comparingUser.category1;
      // cout //<< comparingUser.category1 << "  " << comparingUser.possibleRoommates[i].category1 << endl
      //   << "Category 1 Correlation percentage: " << correlationScore1 << endl;
    }
    else
    {
      correlationScore1 = (comparingUser.category1 / comparingUser.possibleRoommates[i].category1);
      // cout //<< comparingUser.category1 << "   " << comparingUser.possibleRoommates[i].category1 << endl
      //   << "Category 1 Correlation percentage: " << correlationScore1 << endl;
    }
    
    // Comparing category 2
    if (comparingUser.category2 >= comparingUser.possibleRoommates[i].category2)
    {
      correlationScore2 = comparingUser.possibleRoommates[i].category2 / comparingUser.category2;
      // cout //<< comparingUser.category2 << "  " << comparingUser.possibleRoommates[i].category2 << endl
      //   << "Category 2 Correlation percentage: " << correlationScore2 << endl;
    }
    else
    {
      correlationScore2 = (comparingUser.category2 / comparingUser.possibleRoommates[i].category2);
      // cout //<< comparingUser.category2 << "   " << comparingUser.possibleRoommates[i].category2 << endl
      //   << "Category 2 Correlation percentage: " << correlationScore2 << endl;
    }
    
    // Comparing category 3
    if (comparingUser.category3 >= comparingUser.possibleRoommates[i].category3)
    {
      correlationScore3 = comparingUser.possibleRoommates[i].category3 / comparingUser.category3;
      // cout //<< comparingUser.category3 << "  " << comparingUser.possibleRoommates[i].category3 << endl
      //   << "Category 3 Correlation percentage: " << correlationScore3 << endl;
    }
    else
    {
      correlationScore3 = (comparingUser.category3 / comparingUser.possibleRoommates[i].category3);
      // cout //<< comparingUser.category3 << "   " << comparingUser.possibleRoommates[i].category3 << endl
      //   << "Category 3 Correlation percentage: " << correlationScore3 << endl;
    }
    
    // Comparing category 4
    if (comparingUser.category4 >= comparingUser.possibleRoommates[i].category4)
    {
      correlationScore4 = comparingUser.possibleRoommates[i].category4 / comparingUser.category4;
      // cout //<< comparingUser.category4 << "  " << comparingUser.possibleRoommates[i].category4 << endl
      //   << "Category 4 Correlation percentage: " << correlationScore4 << endl;
    }
    else
    {
      correlationScore4 = (comparingUser.category4 / comparingUser.possibleRoommates[i].category4);
      // cout //<< comparingUser.category4 << "   " << comparingUser.possibleRoommates[i].category4 << endl
      //   << "Category 4 Correlation percentage: " << correlationScore4 << endl;
    }
    
    // Comparing category 5
    if (comparingUser.category5 >= comparingUser.possibleRoommates[i].category5)
    {
      correlationScore5 = comparingUser.possibleRoommates[i].category5 / comparingUser.category5;
      // cout //<< comparingUser.category5 << "  " << comparingUser.possibleRoommates[i].category5 << endl
      //   << "Category 5 Correlation percentage: " << correlationScore5 << endl;
    }
    else
    {
      correlationScore5 = (comparingUser.category5 / comparingUser.possibleRoommates[i].category5);
      // cout //<< comparingUser.category5 << "   " << comparingUser.possibleRoommates[i].category5 << endl
      //   << "Category 5 Correlation percentage: " << correlationScore5 << endl;
    }
    
    comparingUser.finalScore = ((correlationScore1 + correlationScore2 + correlationScore3 + correlationScore4 + correlationScore5) / 5); // Calculating final correlation rate
    comparingUser.possibleRoommates[i].finalScore = comparingUser.finalScore;
    comparingUser.roommateCorrelations.push_back(comparingUser.finalScore); // Adding the final correlation rate to the parallel Correlation rate vector
  }
    
  // Listing potential roommates and their correlation scores
  comparingUser.listCorrelatedRoommates();
  
  // Copying the possible roommates for preservation
  comparingUser.roommatePool = comparingUser.possibleRoommates; 
  
  // Sorting command
  sort(comparingUser.roommatePool.begin(), comparingUser.roommatePool.end(),
    [](const User& lhs, const User& rhs)  // Lambda function specifying the sort criteria
    {
        return lhs.finalScore > rhs.finalScore; // Returning the order so that the scores decrease
    });
}
  
  
  // ------ DEFUNCT SORTING CODE ------
  // // Scan the current list of roommate matches and place the user where their final correlation fits
  // cout << endl << "Sorting Algorithm Test Code: " << endl;
  // for(int currentPos = 0; currentPos < comparingUser.possibleRoommates.size(); currentPos++)
  // {
  //   // If this is the first user, push them in as the first element
  //   if(currentPos == 0)
  //   {
  //     sortedRoommates.push_back(comparingUser.possibleRoommates[currentPos]);
  //     cout << "First item added to the sorted list" << endl;
  //   }
    
  //   // If no more possible roommates are listed, stop adding to the roommate list
  //   else if(currentPos > (comparingUser.possibleRoommates.size())) 
  //   {
  //     break;
  //   }
    
    
  //   // COMPARING USER IS THE CURRENT TESTUSER.  USER AT POSSIBLEROOMMATES[CURRENTPOS] IS BEING COMPARED TO
  //   // Non-edge cases
  //   else
  //   {
  //     for(int )
  //     cout << comparingUser.possibleRoommates[currentPos].finalScore << " vs. " << sortedRoommates[currentPos].finalScore << endl;
      
  //     // If the current correlation is higher than the previous correlation, put it in front of the previous correlation in the sorted list
  //     // if(comparingUser.roommatePool[currentPos].finalScore > sortedRoommates[currentPos - 1].finalScore)
  //     // {
        
  //     // }
  //     // else
  //     // {

  //     // }
  //   }
  // }
  
  // comparingUser.listCorrelatedRoommates();
  
  // cout << endl;
  // comparingUser.roommatePool = sortedRoommates;
  // comparingUser.listRoommates();
  
  // return;
  // };


int main()
{
  User testUser1, testUser2, testUser3, testUser4; // Creates a test user (uninitialized)
  
  // Setting retrievable ID's for each user.
  testUser1.setID(1);
  testUser2.setID(2);
  testUser3.setID(3);
  testUser4.setID(4);
  
  // Asking for user genders
  testUser1.initializePool();
  testUser2.initializePool();
  testUser3.initializePool();
  testUser4.initializePool();
  
  // Check each of the user's survey results (Simulated with final category scores)
  testUser1.setCategories();
  testUser2.setCategories();
  testUser3.setCategories();
  testUser4.setCategories();
  
  cout << endl << "Test category scores set." << endl << endl;
  
  
  // User category scores set.  Listing scores for review on execution.
  cout << "----- User 1 Scores ------" << endl;
  cout << "User 1 sex: " << testUser1.gender << endl;
  testUser1.listCategories();
  cout << "----- User 2 Scores ------" << endl;
  cout << "User 2 sex: " << testUser2.gender << endl;
  testUser2.listCategories();
  cout << "----- User 3 Scores ------" << endl;
  cout << "User 3 sex: " << testUser3.gender << endl;
  testUser3.listCategories();
  cout << "----- User 4 Scores ------" << endl;
  cout << "User 4 sex: " << testUser4.gender << endl;
  testUser4.listCategories();
  
  
  cout << "Testing User 1 for compatible genders." << endl;
  // Performing a gender comparison (Needs to be functionalized for final version.  Only one user will be compared opposed to all four)
  compareGenders(testUser1, testUser2);
  compareGenders(testUser1, testUser3);
  compareGenders(testUser1, testUser4);
  
  compareGenders(testUser2, testUser1);
  compareGenders(testUser2, testUser3);
  compareGenders(testUser2, testUser4);
  
  compareGenders(testUser3, testUser1);
  compareGenders(testUser3, testUser2);
  compareGenders(testUser3, testUser4);
  
  compareGenders(testUser4, testUser1);
  compareGenders(testUser4, testUser2);
  compareGenders(testUser4, testUser3);
  
  //Verifying if the users were indeed entered into the potential roommate pool
  testUser1.listPotentialRoommates();
  testUser2.listPotentialRoommates();
  testUser3.listPotentialRoommates();
  testUser4.listPotentialRoommates();
  
  cout << endl << endl;
  
  // Performing the comparison and sorting.  Refer to sortPotentialRoommates(User).
  sortPotentialRoommates(testUser1);
  sortPotentialRoommates(testUser2);
  sortPotentialRoommates(testUser3);
  sortPotentialRoommates(testUser4);
  cout << endl << endl;
  
  // Listing off the final sortings for each user
  testUser1.listRoommates();
  testUser2.listRoommates();
  testUser3.listRoommates();
  testUser4.listRoommates();
  cout << endl << endl;

  cout << "Simulation Complete.";

  return EXIT_SUCCESS;
}
