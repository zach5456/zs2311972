/* 
 * File:   main.cpp
 * Author: Stewart, Zach
 * Class: 46024
 *
 * Created on July 14, 2014, 7:00 PM
 */

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

/*
 * 
 */
int main() {
   //seed random function here
  unsigned seed = time (0);
  srand(seed);
  
  //set variables
  const int TOWER = 1;
  const int CAVE = 2;
  int choice , endFight;
  int hp = 100, mp = 20, dragonHp = 150, ogreHp = 150;
  char chest, fight;

  
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
        int sword = rand() % 1 + 10, spell = rand() % 1 + 25;
        
        cout << "You have " << hp << " HP and " << mp << " Mana remaining.\n";
        cout << "1. Fight\t\t2. Magic (Fireball/10 MP)\n";
        cin >> fight;
        
          switch (fight)
            {
              case '1': cout << "You do " << sword << " damage.\n";
                        dragonHp = dragonHp - sword;
                        break;
              case '2': if (mp <=0)
                          {
                            cout << "You do not have enough Mana.\n";
                            cout << "You must fight with your sword.\n";
                            cout << "You do " << sword << " damage.";
                            cout << "\n";
                          }
                        else
                          cout << "You do " << spell << " damage.\n";
                          dragonHp = dragonHp - spell;
                          mp = mp - 10;
                        break;
              default: cout << "That's not a valid option. Please enter your ";
                       cout << "choice again.\n";
                       cin >> fight;
                      
                       switch (fight)
                        {
                          case '1': cout << "You do " << sword << " damage.\n";
                                    dragonHp = dragonHp - sword;
                                    break;
                          case '2': cout << "You do " << spell << " damage.\n";
                                    dragonHp = dragonHp - spell;
                                    mp = mp - 10;
                        }
            }
        
        int dragonDmg = rand() % 1 + 12;
        
        cout << "The dragon does " << dragonDmg << " damage to you.\n";
        hp = hp - dragonDmg;
                
        cout << "The dragon still has " << dragonHp << " HP left.\n";
        cout << "Do you want to keep fighting? 1. Yes or 2. No.\n";
        cin >> endFight;
          
      } while (endFight != 2);
      
  if (hp <= 0)
    {
      cout << "You have died on your quest.\n";
      cout << "The kingdom mourns your death.\n";
      cout << "GAME OVER";
    }
  else
    {
      cout << "You have slain the dragon.\n";
      cout << "You return victoriously to the kingdom with the dragon's ";
      cout << "head as proof of your victory.\n";
      cout << "King Mark knights you and the kingdoms cheers.\n";
      cout << "CONGRADULATIONS YOU WIN!";
    }
        
  return 0;
}

