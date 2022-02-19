#include "Translator.h"
#include "Model.h"

Translator::Translator(){} // default constructor

Translator::~Translator(){} // default destructor

//function to take in a string of an english word as input and returns a string representing the Tutnese translation
string Translator::translateEnglishWord(string engWord){
  Model m;
  string tutEngWord = "";

  // iterates over the string of the english word and translates into Tutnese
  for(int i = 0; i < engWord.size(); ++i){
    //checks if the string has a letter that appears twice in a row and calls translateDoubleCharacter
    if (i != engWord.size()-1){ // checks if the element at the index i is not the last letter of the word
      if(engWord.at(i) == engWord.at(i+1)){ //checks if the letter at index i and the letter after the index i is the same (two repeated letters in a row)
        tutEngWord  += m.translateDoubleCharacter(engWord.at(i)); // translates the character usings translateDoubleCharacter
        ++i; // skips the next repeated letter
        continue;
      }
    }
    tutEngWord += m.translateSingleCharacter(engWord.at(i)); // translates the letter to Tutnese
  }
  return tutEngWord;
}

// function that takes in a string of an english sentenece as input and returns a string representing the Tutnese translation
string Translator::translateEnglishSentence(string engSentence){
  Translator t; //creates an instance of the Translator class
  string tutEngSentence = "";
  string holder = "";

  //uses the translateEnglishWord function to translate a word and combine into a Tutnese sentence to be returned
  for(int i = 0; i < engSentence.size(); ++i){
    holder += engSentence.at(i);
    //checks for a word in the string and calls translateEnglishWord
    if(isspace(engSentence.at(i)) || i == engSentence.size() - 1){ //checks for a word, looks for a space or if line only has one word, checks for the end of the line
      tutEngSentence += t.translateEnglishWord(holder); //calls translateEnglishWord to translate the word to Tutnese and add it to the final string
      holder = "";
    }
  }
  tutEngSentence += " ";
  return tutEngSentence;

}
