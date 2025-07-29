#include <iostream>
#include <vector>
#include "ufo_functions.hpp"
#include <random>
#include <string>


using namespace std;
// Define functions

void printStatus(string word, int misses, int guesses, vector<int> positions, char guess, string array[], int hits)
{
 // int letterCount = word.size();
 // string array[letterCount];

  if (guesses == 0) // THIS IS LITERALLY ONLY IF IT IS THE FIRST TIME
  {
    for (int i = 0; i < word.size(); i++)
    {
      array[i] = "_";
    }
    
    for (int j = 0; j < word.size(); j++)
    {
      cout << array[j] + " ";
    }
    cout << endl;
    cout << "The word is: " << word << endl;
  }

  if (!positions.empty())
  {
    for (int k = 0; k < word.size(); k++)
    {
      if (positions[0] == k) 
      {
        array[k] = guess;
        positions.erase(positions.begin());

      }
    }

    int end = 0;

    positions.clear();
    for (int j = 0; j < word.size(); j++)
    {
      if (array[j] == "_") end++;
      cout << array[j] + " ";
    }
    if (end < 1)
    {
      cout << "\n============\n";
      cout << "You win nice\n";
      cout << "============\n";
      exit(0);
    }

    cout << "\n";
    end = 0;

  }
  
}

void printRules()
{
  cout << "=========================================\n";
  cout << "I am thinking of a word, your job is to\n";
  cout << "guess it letter by letter. The downside\n";
  cout << "is that you have limited wrong guesses\n";
  cout << "otherwise you get abducted.. so good luck\n";
  cout << "=========================================\n";


}

string createWord()
{
  random_device rd;
  mt19937 gen(rd());
  uniform_int_distribution<> dist(0, 4);

  int randomNumber = dist(gen);
  
  string list[5] = {"dinosaur", "bread", "xylophone", "jazz", "elephant"};

  return list[randomNumber];
  //cout << "Word: " << list[randomNumber] << endl;

}

void menuChoice()
{
  int choice = 0;
  cout << "[1] Play\n";
  cout << "[2] Quit\n>";

  cin >> choice;

  if (choice == 2)
  {
    cout << "Fine I didn't wanna play anyway\n";
    exit(0);
  }
  else if (choice == 1)
  {
    ;
  }
  else
  {
    cout << "You suck at this\n";
    exit(0);
  }
}

void printMenu()
{
  cout << "=============================\n";
  cout << "     Hello, welcome to UFO\n";
  cout << "   This is basically hangman\n";
  cout << "=============================\n";

}


void display_misses(int misses) {

  if (misses == 0 || misses == 1) {

    std::cout << "                 .                            \n";
    std::cout << "                 |                            \n";
    std::cout << "              .-\"^\"-.                       \n";
    std::cout << "             /_....._\\                       \n";
    std::cout << "         .-\"`         `\"-.                  \n";
    std::cout << "        (  ooo  ooo  ooo  )                   \n";
    std::cout << "         '-.,_________,.-'    ,-----------.   \n";
    std::cout << "              /     \\        (  Send help! ) \n";
    std::cout << "             /   0   \\      / `-----------'  \n";
    std::cout << "            /  --|--  \\    /                 \n";
    std::cout << "           /     |     \\                     \n";
    std::cout << "          /     / \\     \\                   \n";
    std::cout << "         /               \\                   \n";

  }
  else if (misses == 2) {

    std::cout << "                 .                            \n";
    std::cout << "                 |                            \n";
    std::cout << "              .-\"^\"-.                       \n";
    std::cout << "             /_....._\\                       \n";
    std::cout << "         .-\"`         `\"-.                  \n";
    std::cout << "        (  ooo  ooo  ooo  )                   \n";
    std::cout << "         '-.,_________,.-'    ,-----------.   \n";
    std::cout << "              /  0  \\        (  Send help! ) \n";
    std::cout << "             / --|-- \\      / `-----------'  \n";
    std::cout << "            /    |    \\    /                 \n";
    std::cout << "           /    / \\    \\                    \n";
    std::cout << "          /             \\                    \n";
    std::cout << "         /               \\                   \n";

  }
  else if (misses == 3) {

    std::cout << "                 .                            \n";
    std::cout << "                 |                            \n";
    std::cout << "              .-\"^\"-.                       \n";
    std::cout << "             /_....._\\                       \n";
    std::cout << "         .-\"`         `\"-.                  \n";
    std::cout << "        (  ooo  ooo  ooo  )                   \n";
    std::cout << "         '-.,_________,.-'    ,-----------.   \n";
    std::cout << "              /--|--\\        (  Send help! ) \n";
    std::cout << "             /   |   \\      / `-----------'  \n";
    std::cout << "            /   / \\   \\    /                \n";
    std::cout << "           /           \\                     \n";
    std::cout << "          /             \\                    \n";
    std::cout << "         /               \\                   \n";

  }
  else if (misses == 3) {

    std::cout << "                 .                            \n";
    std::cout << "                 |                            \n";
    std::cout << "              .-\"^\"-.                       \n";
    std::cout << "             /_....._\\                       \n";
    std::cout << "         .-\"`         `\"-.                  \n";
    std::cout << "        (  ooo  ooo  ooo  )                   \n";
    std::cout << "         '-.,_________,.-'    ,-----------.   \n";
    std::cout << "              /--|--\\        (  Send help! ) \n";
    std::cout << "             /   |   \\      / `-----------'  \n";
    std::cout << "            /   / \\   \\    /                \n";
    std::cout << "           /           \\                     \n";
    std::cout << "          /             \\                    \n";
    std::cout << "         /               \\                   \n";

  }
  else if (misses == 4) {

    std::cout << "                 .                            \n";
    std::cout << "                 |                            \n";
    std::cout << "              .-\"^\"-.                       \n";
    std::cout << "             /_....._\\                       \n";
    std::cout << "         .-\"`         `\"-.                  \n";
    std::cout << "        (  ooo  ooo  ooo  )                   \n";
    std::cout << "         '-.,_________,.-'    ,-----------.   \n";
    std::cout << "              /  |  \\        (  Send help! ) \n";
    std::cout << "             /  / \\  \\      / `-----------' \n";
    std::cout << "            /         \\    /                 \n";
    std::cout << "           /           \\                     \n";
    std::cout << "          /             \\                    \n";
    std::cout << "         /               \\                   \n";

  }
  else if (misses == 5) {

    std::cout << "                 .                            \n";
    std::cout << "                 |                            \n";
    std::cout << "              .-\"^\"-.                       \n";
    std::cout << "             /_....._\\                       \n";
    std::cout << "         .-\"`         `\"-.                  \n";
    std::cout << "        (  ooo  ooo  ooo  )                   \n";
    std::cout << "         '-.,_________,.-'    ,-----------.   \n";
    std::cout << "              / / \\ \\        (  Send help! )\n";
    std::cout << "             /       \\      / `-----------'  \n";
    std::cout << "            /         \\    /                 \n";
    std::cout << "           /           \\                     \n";
    std::cout << "          /             \\                    \n";
    std::cout << "         /               \\                   \n";

  }
  else if (misses == 6) {

    std::cout << "                 .                            \n";
    std::cout << "                 |                            \n";
    std::cout << "              .-\"^\"-.                       \n";
    std::cout << "             /_....._\\                       \n";
    std::cout << "         .-\"`         `\"-.                  \n";
    std::cout << "        (  ooo  ooo  ooo  )                   \n";
    std::cout << "         '-.,_________,.-'    ,-----------.   \n";
    std::cout << "              /     \\        (  Send help! ) \n";
    std::cout << "             /       \\      / `-----------'  \n";
    std::cout << "            /         \\    /                 \n";
    std::cout << "           /           \\                     \n";
    std::cout << "          /             \\                    \n";
    std::cout << "         /               \\                   \n";

  }

}
