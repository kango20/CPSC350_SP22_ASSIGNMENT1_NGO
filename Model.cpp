#include "Model.h"

Model::Model(){} //default constructor

Model::~Model(){} // default destructor

//function to take a character as input and returns a string representing its encoding in Tutnese
string Model::translateSingleCharacter(char character){
  string charToTutnese;

  //checks the char input and outputs the Tutnese translation
  switch(character){
    case 'B':
      charToTutnese = "Bub";
      break;
    case 'C':
      charToTutnese = "Cash";
      break;
    case 'D':
      charToTutnese = "Dud";
      break;
    case 'F':
      charToTutnese = "Fuf";
      break;
    case 'G':
      charToTutnese = "Gug";
      break;
    case 'H':
      charToTutnese = "Hash";
      break;
    case 'J':
      charToTutnese = "Jay";
      break;
    case 'K':
      charToTutnese = "Kuck";
      break;
    case 'L':
      charToTutnese = "Lul";
      break;
    case 'M':
      charToTutnese = "Mum";
      break;
    case 'N':
      charToTutnese = "Nun";
      break;
    case 'P':
      charToTutnese = "Pub";
      break;
    case 'Q':
      charToTutnese = "Quack";
      break;
    case 'R':
      charToTutnese = "Rug";
      break;
    case 'S':
      charToTutnese = "Sus";
      break;
    case 'T':
      charToTutnese = "Tut";
      break;
    case 'V':
      charToTutnese = "Vuv";
      break;
    case 'W':
      charToTutnese = "Wack";
      break;
    case 'X':
      charToTutnese = "Ex";
      break;
    case 'Y':
      charToTutnese = "Yub";
      break;
    case 'Z':
      charToTutnese = "Zub";
      break;
    case 'b':
      charToTutnese = "bub";
      break;
    case 'c':
      charToTutnese = "cash";
      break;
    case 'd':
      charToTutnese = "dud";
      break;
    case 'f':
      charToTutnese = "fuf";
      break;
    case 'g':
      charToTutnese = "gug";
      break;
    case 'h':
      charToTutnese = "hash";
      break;
    case 'j':
      charToTutnese = "jay";
      break;
    case 'k':
      charToTutnese = "kuck";
      break;
    case 'l':
      charToTutnese = "lul";
      break;
    case 'm':
      charToTutnese = "mum";
      break;
    case 'n':
      charToTutnese = "nun";
      break;
    case 'p':
      charToTutnese = "pub";
      break;
    case 'q':
      charToTutnese = "quack";
      break;
    case 'r':
      charToTutnese = "rug";
      break;
    case 's':
      charToTutnese = "sus";
      break;
    case 't':
      charToTutnese = "tut";
      break;
    case 'v':
      charToTutnese = "vuv";
      break;
    case 'w':
      charToTutnese = "wack";
      break;
    case 'x':
      charToTutnese = "ex";
      break;
    case 'y':
      charToTutnese = "yub";
      break;
    case 'z':
      charToTutnese = "zub";
      break;
    default: // if none of the characters match the tutnese translation, return the character as is
      charToTutnese = character;
      break;
  }
  return charToTutnese;
}

//function to take asingle character as input that appears twice in a row and returns a string representing its encoding in Tutnese
string Model::translateDoubleCharacter(char twoCharacter){
  Model m;
  string doubletoTutnese = "";
  string charToString = "";
  charToString.append(1, twoCharacter); //take in the char input and represent it as a string

  // checks if the inputted character is a vowel
  if (twoCharacter == 'a' || twoCharacter == 'e' || twoCharacter == 'i' || twoCharacter == 'o' || twoCharacter == 'u'){
    doubletoTutnese = "squat" + charToString; // add squat in front of the vowel
  }
  else if (ispunct(twoCharacter)){
    doubletoTutnese += charToString;
  }
  else{
    doubletoTutnese = "squa" + m.translateSingleCharacter(twoCharacter); //if consonant, adds squa in front of the consonant
  }
  return doubletoTutnese;
}
