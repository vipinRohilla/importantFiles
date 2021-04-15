#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

void play_game(){
  int random = rand() % 251;
  std::cout << "Guess a number: ";

  while(true)
  {
    int guess;
    std::cin >> guess;
    if(guess == random)
    {
      std::cout << "you win!\n";
      break;
    }
    else if(guess < random )
    {
      std::cout << "too low\n";
    }
    else
    {
      std::cout << "too high\n";
    }
  }


}
int main()
{
  srand(time(NULL));

  int choice;

  do{
    std::cout << "0. Quit \n1. Play Game\n";
    std::cin >> choice;

    switch (choice)
    {
      case 0:
        std::cout << "Thanks for nothing";
        break;
      case 1:
        play_game();
        break;
    }

  }while(choice != 0);



  return 0;
}
