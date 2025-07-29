#include <vector>
#include <string>

using namespace std;

void display_misses(int misses);

void printMenu();

void menuChoice();

string createWord();

void printRules();

void printStatus(string word, int misses, int guesses, vector<int> positions, char guess, string array[], int hits);
// Declare functions
