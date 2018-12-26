#ifndef RANDOM_WORD_H
#define RANDOM_WORD_H
#include <string>

class RandomWord
{
public:
  RandomWord(std::string _words[], int size);
  ~RandomWord(){}
  
  std::string GetRandom();
  void PrintAll();

private:
  std::string* words;
  int size;
};

#endif