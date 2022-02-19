#include <iostream>
#include <string>
using namespace std;

class Model{
  public:
    Model(); //default constructor
    ~Model(); // default destructor
    string translateSingleCharacter(char character); //function to take a character as input and returns a string representing its encoding in Tutnese
    string translateDoubleCharacter(char twoCharacter); //function to take a single character as input that appears twice in a row and returns a string representing its encoding in Tutnese
    
  private:
};
