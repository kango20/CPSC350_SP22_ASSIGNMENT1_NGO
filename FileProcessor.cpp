#include "FileProcessor.h"
#include "Translator.h"

FileProcessor::FileProcessor(){} // default constructor

FileProcessor::~FileProcessor(){} // default destructor

//function that takes in a string representing the input file with English text and output file with the Tutnese translation
void FileProcessor::processFile(string inputFile, string outputFile){

  Translator t;
  ifstream inFS; // input file stream
  ofstream outFS; // output file stream
  string line;

  //opens the input file and output file
  inFS.open(inputFile);
  outFS.open(outputFile);

  //writes the Tutnese translation of the input file to the output file
  while(getline(inFS, line)){
    outFS << t.translateEnglishSentence(line) << endl; //write it then read again
  }


  //Done with file, so close it
  inFS.close();
  outFS.close();
}
