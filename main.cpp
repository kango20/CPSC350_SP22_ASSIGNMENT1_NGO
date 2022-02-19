#include "FileProcessor.h"

int main(int argc, char **argv){
  FileProcessor file; // creates an instance of FileProcessor class
  file.processFile(argv[1], argv[2]); // translates the provided input file to Tutnese using the file processor
  return 0; // exit
}
