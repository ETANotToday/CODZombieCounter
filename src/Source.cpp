#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

int GetAmountOfZombies(int Zombie_Round, int Zombie_Players);
void ZombieHealth(int Zombie_Health);

int main(){
  /*
    Get Map Name
  */
  int Zombie_Round = 0, Zombie_Players = 0;
  std::cout << "Please enter round number: ";
  std::cin >> Zombie_Round;
  std::cout << "Please enter amount of players: ";
  std::cin >> Zombie_Players;
  GetAmountOfZombies(Zombie_Round,Zombie_Players);
}


int GetAmountOfZombies(int Zombie_Round, int Zombie_Players){
  switch(Zombie_Players){
    case 1: //1 Player
      switch(Zombie_Round){
        //Past Round Ten, I use math.
        case 1:
            std::cout << "Zombies: 6";
          break;
        case 2:
            std::cout << "Zombies: 8";
          break;
        case 3:
            std::cout << "Zombies: 13";
          break;
        case 4:
            std::cout << "Zombies: 18";
          break;
        case 5:
            std::cout << "Zombies: 24";
          break;
        case 6:
            std::cout << "Zombies: 27";
          break;
        case 7:
            std::cout << "Zombies: 28";
          break;
        case 8:
            std::cout << "Zombies: 28";
          break;
        case 9:
            std::cout << "Zombies: 28"; //Not a mistake.
          break;
        case 10:
            std::cout << "Zombies: 33";
          break;
        default:
            ZombieHealth(Zombie_Round);
          break;
      }
      break;
    case 2: //2 Player
      break;
    case 3: //3 Player
      break;
    case 4: //4 Player
      break;
  }
}

void ZombieHealth(int Zombie_Round){
  unsigned long long Zombie_Health = 0;
  int Health = 1045;
  for (int RoundStart = 11; RoundStart <= Zombie_Round; RoundStart++) //11 MUST NOT REMOVED OR ALTERED
  {
    Health = lround(Health * 1.1);
  }
  std::cout << "\nZombie Health is: " << Health << std::endl;
}
