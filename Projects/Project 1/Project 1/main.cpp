/* 
 * File:   main.cpp
 * Author: Stewart, Zach
 * Class: 46024
 *
 * Created on July 14, 2014, 7:00 PM
 */

#include <iostream>
#include <cstdlib>

using namespace std;

/*
 * 
 */
int main() {
  
  //set variables
  const int TOWER = 1;
  const int CAVE = 2;
  int choice, fight;
  int hp = 100, mp = 20, dragonHp = 150, ogreHp = 150;
  char chest;
  
  //Explaining what's happening in the game and making a story
  cout << "You are a squire in the kingdom of Zir.\n";
  cout << "You are going on a quest to get knighthood set by King Mark\n";
  cout << "Before going Sir Brian give you a sword and shield.\n";
  cout << "Your mission is to slay either the dragon or the ogre\n";
  cout << "You are in the forest and find the ogre's cave and the dragon's";
  cout << "tower. Do you choose to enter the cave or the tower.\n";
  
  //Display quest options
  cout << "1. Cave\n";
  cout << "2. Tower\n";
  cin >> choice;
  
  if (choice == TOWER)
    cout << "You have chosen to enter the tower and fight the dragon.\n";
    cout << "As you ascend the tower you come across a chest do you open it?\n";
    cout << "Y/N\n";
    cin >> chest;
    
    //Run trap sequence
    switch (chest)
      {
        case 'y':
        case 'Y': cout << "You triggered a trap and have died. GAME OVER\n";
                  break;
        case 'n':
        case 'N': cout << "You ignore the booby trapped chest and move on.\n";
                  break;
        default: cout << "That is not a valid option. Enter you choice ";
                 cout << "again. \n";
                 cin >> chest;
                 
                 switch (chest)
                  {
                    case 'y':
                    case 'Y': cout << "You triggered a trap and have died. ";
                              cout <<"GAME OVER\n";
                              break;
                    case 'n':
                    case 'N': cout << "You ignore the booby trapped chest and";
                              cout <<" move on.\n";
                  }
      }
    cout << "You finally arrive at the lair of the dragon. \n";
    cout << "Prepare yourself for battle.\n";
    do
      {
        cout << "You have " << hp << " HP and " << mp << " Mana remaining.\n";
        cout << "1. Fight\t\t2. Magic (Fireball/10 MP)\n";
        cin >> fight;
        
          switch (fight)
            {
              case '1': cout << "You do " << rand() % 1 + 10 << ".\n";
                        break;
              case '2': cout << "You do " << rand() % 1 + 25 << ".\n";
                        break;
              default: cout << "That's not a valid option. Please enter your ";
                       cout << "coice again.\n";
                       cin >> fight;
                      
                       switch (fight)
                        {
                          case '1': cout << "You do " << rand() % 1 + 10 << ".";
                                    cout << "\n";
                                    break;
                          case '2': cout << "You do " << rand() % 1 + 25 << ".";
                                    cout << "\n";
                        }
            }
          cout << "The dragon does " << rand() % 1 + 12 << " damage to you.\n";
      }
  return 0;
}

