#include "word.h"
#include <iostream>
#include <string>
#include <bits/stdc++.h> 
#include <ctime>

#define my_sizeof(type) ((char *)(&type+1)-(char*)(&type)) 

RandomWord::RandomWord(std::string _words[], int _size)
{
  size = _size;
  words = _words;
}

std::string RandomWord::GetRandom()
{
  int random;
  srand(time(0));
  random = (rand() % size);
  return words[random];
}

// Prints comma-seperated list of words
void RandomWord::PrintAll()
{
  for(int i = 0; i < size; i++)
  {
    std::cout << words[i] << ((i == (size-1)) ? "\n" : ", ");
  }
}