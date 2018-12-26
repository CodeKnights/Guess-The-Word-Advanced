#include <iostream>
#include <string>
#include <algorithm>
#include "word.h"

using namespace std;

string lowercase(string str)
{
 transform(str.begin(), str.end(), str.begin(), ::tolower);
 return str;
}

int Game(RandomWord* rw, int attempts) {

  string currentWord = lowercase(rw->GetRandom());
  string input;
  char play;

  for(int i=1;input != currentWord;i++)
  {
    cout<<"No.of Attempts left"<<" "<<(attempts-i)+1<<" : ";
    cin>>input;
    if (i < attempts && i >= 0){
      
      if(lowercase(input) == currentWord)
      {
        cout<<"Congratulations, You've guessed the correct word\n";
        return 0;
      }
      else
      {
        cout << "Bad guess, Please try again.\n";
      }
    }
    else {
      cout << "You failed\n";
      return 0;
    }
  }

  return 0;
}

int main() {
  string words[10] = {"Apple", "Orange", "Car", "Bike", "Banana", "Tree", "Cat", "Dog", "Cake", "Cookie"};
  char play = 'Y';
  RandomWord *randomWord = new RandomWord(words, 10);

  cout<<"This is a Word Guessing Game\n";
  cout<<"The words are : ";
  randomWord->PrintAll();
  cout << "\n";

  while(play =='Y'|play =='y')
  {
    Game(randomWord,5);
    cout<<"Do u want to play the game another time? [Y/N] ";
    cin>>play;
  }

  cout << "Thanks for playing <3 \n";

  return 0;
}
