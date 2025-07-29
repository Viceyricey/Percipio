#include <iostream>
#include <cctype>
#include <vector>
#include "ufo_functions.hpp"
using namespace std;



int main()
{
  int misses = 0;
  int guesses = 0;
  string word;
  char guess = '?';
  int pos;
  vector<int> positions;
  int hits = 0;

  bool playing = true;

  printMenu();
  menuChoice();
  word = createWord();

  string array[word.size()];

  printRules();

  while (playing)
  {
    
    printStatus(word, misses, guesses, positions, guess, array, hits);
    if (guesses == 0) cout << "Input your first guess\n>";
    else cout << ">";
    cin >> guess;
    guesses++;
    positions.clear();
    if (isdigit(guess))
    {
      cout << "Must be a letter\n";
      exit(0);
    }
    pos = word.find(guess);
    if (pos != string::npos)
    {
      for (int i = 0; i < word.size(); i++)
      {
        if (word[i] == guess) positions.push_back(i);
      }

      cout << "Character found\n";
      for (int i = 0; i < positions.size(); i++)
      {
        cout << "Position: " << positions[i] << endl; 
      }
      

    }
    else
    {
      misses++;
      display_misses(misses);
      if (misses == 6)
      {
        cout << "\n\n=================\n";
        cout << "Nah that's crazy\n";
        cout << "=================\n";
        exit(0);
      }
    }    


  }
  

}

