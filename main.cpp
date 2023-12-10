#include <cstdlib>
#include <ctime>
#include <iostream>

char bot() {
  int randomNumber = std::rand() % 3;
  char rockPaperScissor[] = {'r', 'p', 's'};
  return rockPaperScissor[randomNumber];
}

int Compare(char user, char bot) {
  if (user == 'r' && bot == 'p')
    return 0;
  else if (user == 'p' && bot == 's')
    return 0;
  else if (user == 's' && bot == 'r')
    return 0;

  else if (user == 'r' && bot == 's')
    return 1;
  else if (user == 'p' && bot == 'r')
    return 1;
  else if (user == 's' && bot == 'p')
    return 1;

  else if (user == bot)
    return 2;

  else
    return 3;
}

void PrintResult(int res) {
  if (res == 0)
    std::cout << "Bot won!" << std::endl;
  else if (res == 1)
    std::cout << "You won!" << std::endl;
  else if (res == 2)
    std::cout << "It is a draw! " << std::endl;
  else if (res == 3)
    std::cout << "Not valid! " << std::endl;
}

int main() {
  std::srand(std::time(0));
  while (true) {
    char userInput;
    std::cout << "Rock, paper or scissor[r/p/s]: ";
    std::cin >> userInput;

    char botInput = bot();

    std::cout << "bots move: " << botInput << ", userInput: " << userInput
              << std::endl;
    PrintResult(Compare(userInput, botInput));
  }
  return 0;
}
