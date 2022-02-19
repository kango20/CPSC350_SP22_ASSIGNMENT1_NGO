#include <iostream>
#include <string>
using namespace std;

class Translator{
  public:
    Translator(); // default constructor
    ~Translator(); // default destructor
    string translateEnglishWord(string engWord); //function to take in a string of an english word as input and returns a string representing the Tutnese translation
    string translateEnglishSentence(string engSentence); // function that takes in a string of an english sentenece as input and returns a string representing the Tutnese translation
    
  private:
};
