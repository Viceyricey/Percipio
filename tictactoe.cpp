#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

void printMenu();
void printChoice();
bool printBoardPlayer1(vector<char>& positions, char location);
bool printBoardPlayer2(vector<char>& positionsPlayer2, char location, bool GameStatus, vector<char>& positions);
void initialBoard(int move);

int main()
{
  string choice;
  int move = 0;
  char location = '?';
  char locationPlayer2 = '?';
  vector<char> positions = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
  vector<char> positionsPlayer2 = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
  bool GameStatus = true;
  printMenu();
  while (choice != "1" && choice != "2")
  {
    printChoice();
    cin >> choice;
    if (choice == "2") return 0;
  }
  
  while (GameStatus)
  {
    initialBoard(move);
    move++;
    cout << "Player 1 Give location\n=>";
    cin >> location;
    GameStatus = printBoardPlayer1(positions, location);
    if (GameStatus == false) break;
    cout << "\nPlayer 2 Give location\n=>";
    cin >> locationPlayer2;
    GameStatus = printBoardPlayer2(positionsPlayer2, locationPlayer2, GameStatus, positions);
  }


  return 0;
}

void printChoice()
{
  cout << "[1] Play\n";
  cout << "[2] Quit\n>";
}

void printMenu()
{
  cout << "==========================\n";
  cout << "  Welcome to Tic Tac Toe\n";
  cout << "==========================\n";
}

bool printBoardPlayer2(vector<char>& positionsPlayer2, char locationPlayer2, bool GameStatus, vector<char>& positions)
{

  if (!GameStatus)
  {
    return false;
  }
  switch (locationPlayer2)
  {
    case '1': positions[0] = 'O'; break;
    case '2': positions[1] = 'O'; break;
    case '3': positions[2] = 'O'; break;
    case '4': positions[3] = 'O'; break;
    case '5': positions[4] = 'O'; break;
    case '6': positions[5] = 'O'; break;
    case '7': positions[6] = 'O'; break;
    case '8': positions[7] = 'O'; break;
    case '9': positions[8] = 'O'; break;
    default: break;
  }

  if (positions[0] == 'O' && positions[1] == 'O' && positions[2] == 'O')
    { // tl, tm, tr
      cout << "\n================\n";
      cout << "     P2 WIN     \n";
      cout << "================\n";
      return false;
    }
  else if (positions[0] == 'O' && positions[3] == 'O' && positions[6] == 'O')
    { // tl, lm, bl
      cout << "\n================\n";
      cout << "     P2 WIN     \n";
      cout << "================\n";
      return false;
    }
  else if (positions[0] == 'O' && positions[4] == 'O' && positions[8] == 'O')
    { // tl, mm, br
      cout << "\n================\n";
      cout << "     P2 WIN     \n";
      cout << "================\n";
      return false;
    }
  else if (positions[2] == 'O' && positions[5] == 'O' && positions[8] == 'O')
    { // tr, rm, br
      cout << "\n================\n";
      cout << "     P2 WIN     \n";
      cout << "================\n";
      return false;
    }
  else if (positions[8] == 'O' && positions[7] == 'O' && positions[6] == 'O')
    { // br, bm, bl
      cout << "\n================\n";
      cout << "     P2 WIN     \n";
      cout << "================\n";
      return false;
    }
  else if (positions[2] == 'O' && positions[4] == 'O' && positions[6] == 'O')
    { // tr, mm, bl 
      cout << "\n================\n";
      cout << "     P2 WIN     \n";
      cout << "================\n";
      return false;
    }
  else if (positions[1] == 'O' && positions[4] == 'O' && positions[7] == 'O')
    { // tm, mm, bm
      cout << "\n================\n";
      cout << "     P2 WIN     \n";
      cout << "================\n";
      return false;
    }
  else if (positions[3] == 'O' && positions[4] == 'O' && positions[5] == 'O')
    { // lm, mm, rm
      cout << "\n================\n";
      cout << "     P2 WIN     \n";
      cout << "================\n";
      return false;
    }
  cout << "     |     |     \n";
  cout << "  " << positions[0] << "  |  " << positions[1] << "  |  " << positions[2] << "  \n";
  cout << "_____|_____|_____\n";
  cout << "     |     |     \n";
  cout << "  " << positions[3] << "  |  " << positions[4] << "  |  " << positions[5] << "  \n";
  cout << "_____|_____|_____\n";
  cout << "     |     |     \n";
  cout << "  " << positions[6] << "  |  " << positions[7] << "  |  " << positions[8] << "  \n";
  cout << "     |     |     \n";

  return true;

}

bool printBoardPlayer1(vector<char>& positions, char location)
{

switch (location)
{
  case '1': positions[0] = 'x'; break; case '2': positions[1] = 'x'; break; case '3': positions[2] = 'x'; break; case '4': positions[3] = 'x'; break; case '5': positions[4] = 'x'; break; case '6': positions[5] = 'x'; break; case '7': positions[6] = 'x'; break; case '8': positions[7] = 'x'; break; case '9': positions[8] = 'x'; break; default: break;
}

  if (positions[0] == 'x' && positions[1] == 'x' && positions[2] == 'x')
  { // tl, tm, tr
    cout << "\n================\n";
    cout << "     P1 WIN     \n";
    cout << "================\n";
    return false;
  }
  else if (positions[0] == 'x' && positions[3] == 'x' && positions[6] == 'x')
  { // tl, lm, bl
    cout << "\n================\n";
    cout << "     P1 WIN     \n";
    cout << "================\n";
    return false;
  }
  else if (positions[0] == 'x' && positions[4] == 'x' && positions[8] == 'x')
  { // tl, mm, br
    cout << "\n================\n";
    cout << "     P1 WIN     \n";
    cout << "================\n";
    return false;
  }
  else if (positions[2] == 'x' && positions[5] == 'x' && positions[8] == 'x')
  { // tr, rm, br
    cout << "\n================\n";
    cout << "     P1 WIN     \n";
    cout << "================\n";
    return false;
  }
  else if (positions[8] == 'x' && positions[7] == 'x' && positions[6] == 'x')
  { // br, bm, bl
    cout << "\n================\n";
    cout << "     P1 WIN     \n";
    cout << "================\n";
    return false;
  }
  else if (positions[2] == 'x' && positions[4] == 'x' && positions[6] == 'x')
  { // tr, mm, bl 
    cout << "\n================\n";
    cout << "     P1 WIN     \n";
    cout << "================\n";
    return false;
  }
  else if (positions[1] == 'x' && positions[4] == 'x' && positions[7] == 'x')
  { // tm, mm, bm
    cout << "\n================\n";
    cout << "     P1 WIN     \n";
    cout << "================\n";
    return false;
  }
  else if (positions[3] == 'x' && positions[4] == 'x' && positions[5] == 'x')
  { // lm, mm, rm
    cout << "\n================\n";
    cout << "     P1 WIN     \n";
    cout << "================\n";
    return false;
  }

  cout << "     |     |     \n";
  cout << "  " << positions[0] << "  |  " << positions[1] << "  |  " << positions[2] << "  \n";
  cout << "_____|_____|_____\n";
  cout << "     |     |     \n";
  cout << "  " << positions[3] << "  |  " << positions[4] << "  |  " << positions[5] << "  \n";
  cout << "_____|_____|_____\n";
  cout << "     |     |     \n";
  cout << "  " << positions[6] << "  |  " << positions[7] << "  |  " << positions[8] << "  \n";
  cout << "     |     |     \n";

  return true;
}





void initialBoard(int move)
{
  if (move == 0)
  {
    cout << "     |     |     \n";
    cout << "  1  |  2  |  3  \n";
    cout << "_____|_____|_____\n";
    cout << "     |     |     \n";
    cout << "  4  |  5  |  6  \n";
    cout << "_____|_____|_____\n";
    cout << "     |     |     \n";
    cout << "  7  |  8  |  9  \n";
    cout << "     |     |     \n";
    cout << "\n============================\n\n";
    move++;
   }
  }
