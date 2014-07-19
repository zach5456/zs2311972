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
#include <string>
#include <iomanip>

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
  short hp = 100, mp = 30;
  float dragonHp = 150, ogreHp = 150;
  char chest, fight, door;
  string name;

  
  //Explaining what's happening in the game and making a story
  cout << "You are a squire in the kingdom of Zir.\n";
  cout << "Enter your name.\n";
  getline(cin, name);
  cout << name << ", you are going on a quest to become a knight set by ";
  cout << "King Mark\n";
  cout << "You also have a special ability that allows you to ";
  cout << "regen 2 HP per round you fight.\n";
  cout << "Before going Sir Brian give you a sword and shield.\n";
  cout << name << ", your mission is to slay either the dragon or the ogre\n";
  cout << name << ", you are in the forest and find the ogre's cave and the";
  cout << "dragon's tower.\n";
  cout << name << ", do you choose to enter the cave or the tower.\n";
  
  //Display quest options
  cout << "1. Tower\n";
  cout << "2. Cave\n";
  cin >> choice;
  
  //Make choice where to go
  if (choice == TOWER)
  {
    cout << name << " has chosen to enter the tower and fight the dragon.\n";
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
                    case 'Y': cout << "You triggered a trap and have taken ";
                              cout << "serious damage.\n";
                              hp = hp - 50;
                              break;
                    case 'n':
                    case 'N': cout << "You ignore the booby trapped chest and";
                              cout <<" move on.\n\n";
                  }
      }
    cout << "You finally arrive at the lair of the dragon. \n";
    cout << "Prepare yourself for battle.\n\n";
    
    //Run fight sequence
    do
      {
        int sword = rand() % 10 + 1, spell = rand() % 25 + 15;
        
        cout << "You have " << hp << " HP and " << mp << " Mana remaining.\n";
        cout << left << "1. Fight\t\t2. Magic (Fireball/10 MP)\n";
        cin >> fight;
          //Decide how to fight
          switch (fight)
            {
              case '1': cout << "You do " << sword << " damage.\n";
                        dragonHp = dragonHp - sword;
                        break;
              case '2': if (mp <=1)
                          {
                            cout << "You do not have enough Mana.\n";
                            cout << "You must fight with your sword.\n";
                            cout << "You do " << sword << " damage.";
                            cout << "\n\n";
                          }
                        else
                            {
                              cout << "You do " << spell << " damage.\n\n";
                              dragonHp = dragonHp - spell;
                              mp = mp - 10;
                            }
                        break;
              default: cout << "That's not a valid option. Please enter your ";
                       cout << "choice again.\n";
                       cin >> fight;
                      
                       switch (fight)
                        {
                          case '1': cout << "You do " << sword << "";
                                    cout << "damage.\n\n";
                                    dragonHp = dragonHp - sword;
                                    break;
                          case '2': if (mp <=1)
                                      {
                                        cout << "You do not have enough";
                                        cout << " Mana.\n";
                                        cout << "You must fight with your";
                                        cout << " sword.\n";
                                        cout << "You do " << sword << " ";
                                        cout << "damage.";
                                        cout << "\n\n";
                                      }
                                    else
                                        {
                                          cout << "You do " << spell << " ";
                                          cout << "damage.\n\n";
                                          dragonHp = dragonHp - spell;
                                          mp = mp - 10;
                                        }
                        }
            }
        
        int dragonDmg = rand() % 12 + 1;
        
        cout << "The dragon does " << dragonDmg << " damage to you.\n";
        hp = hp - dragonDmg;
                
        cout << "The dragon still has " << dragonHp << " HP left.\n\n";
        hp++;
        cout << "Do you want to keep fighting? 1. Yes or 2. No.\n\n";
        cin >> endFight;
          
      } while (endFight != 2);
    //Run end of game sequence    
    if (hp <= 0 && dragonHp <= 0)
      {
        cout << name << " and the dragon both have died.\n";
        cout << "Although you died, you slain the dragon.\n";
        cout << name << " is posthumously knighted and celebrated throughout ";
        cout << "the kingdom. GAMEOVER.\n";
      }
    else if (hp >= 0 && dragonHp >= 0)
      {
        cout << name << " has fled from the battle with the dragon.\n";
        cout << "You are banished from the kingdom and must live the ";
        cout << "rest of your life in disgrace.\n";
        cout << "GAME OVER " << name << " Coward of the Kingdom.\n";
      }
    else if (hp <= 0)
      {
        cout << name << " has died on your quest.\n";
        cout << "The kingdom mourns your death.\n";
        cout << "GAME OVER";
      }
    else
      {
        cout << name << " has slain the dragon.\n";
        cout << "You return victoriously to the kingdom with the dragon's ";
        cout << "head as proof of your victory.\n";
        cout << "King Mark knights you and the kingdoms cheers.\n";
        cout << "CONGRADULATIONS SIR " << name << " YOU WIN!\n";
      }
  }     
  else
  {
    cout << name << " has chosen to enter the cave and fight the ogre.\n";
    cout << "As you enter the cave you come across a door marked with Treasure";
    cout << "Room do you open it?\n";
    cout << "Y/N\n";
    cin >> door;
    
    //Run trap sequence
    switch (door)
      {
        case 'y':
        case 'Y': cout << "You triggered a trap and have died. GAME OVER\n";
                  break;
        case 'n':
        case 'N': cout << "You ignore the booby trapped room and move on.\n";
                  break;
        default: cout << "That is not a valid option. Enter you choice ";
                 cout << "again. \n";
                 cin >> door;
                 
                 switch (door)
                  {
                    case 'y':
                    case 'Y': cout << "You triggered a trap and have taken ";
                              cout <<"serious damage.";
                              hp = hp - 50;
                              break;
                    case 'n':
                    case 'N': cout << "You ignore the booby trapped door and";
                              cout <<" move on.\n\n";
                  }
      }
    cout << "You finally arrive at the den of the ogre. \n";
    cout << "Prepare yourself for battle.\n\n";
    
    //Start fight sequence
    do
      {
        int sword = rand() % 12 + 1, spell = rand() % 25 + 15;
        
        cout << "You have " << hp << " HP and " << mp << " Mana remaining.\n";
        cout << left << "1. Fight\t\t2. Magic (Iceball/10 MP)\n";
        cin >> fight;
        
          //Decide how to fight
          switch (fight)
            {
              case '1': cout << "You do " << sword << " damage.\n";
                        ogreHp = ogreHp - sword;
                        break;
              case '2': if (mp <=1)
                          {
                            cout << "You do not have enough Mana.\n";
                            cout << "You must fight with your sword.\n";
                            cout << "You do " << sword << " damage.\n\n";
                            ogreHp = ogreHp - sword;
                          }
                        else
                            {
                              cout << "You do " << spell << " damage.\n\n";
                              ogreHp = ogreHp - spell;
                              mp = mp - 10;
                            }
                        break;
              default: cout << "That's not a valid option. Please enter your ";
                       cout << "choice again.\n";
                       cin >> fight;
                      
                       switch (fight)
                        {
                          case '1': cout << "You do " << sword << " ";
                                    cout << "damage.\n\n";
                                    ogreHp = ogreHp - sword;
                                    break;
                          case '2': if (mp <=1)
                                      {
                                        cout << "You do not have enough";
                                        cout << "Mana.\n";
                                        cout << "You must fight with your";
                                        cout << "sword.\n";
                                        cout << "You do " << sword << " ";
                                        cout << "damage.\n\n";
                                        ogreHp = ogreHp - sword;
                                      }
                                    else
                                        {
                                          cout << "You do " << spell << " ";
                                          cout << "damage.\n\n";
                                          ogreHp = ogreHp - spell;
                                          mp = mp - 10;
                                        }
                        }
            }
        
        int ogreDmg = rand() % 13 + 1;
        
        cout << "The ogre does " << ogreDmg << " damage to you.\n";
        hp = hp - ogreDmg;
        cout << "The ogre still has " << ogreHp << " HP left.\n\n";
        hp++;
        cout << "Do you want to keep fighting? 1. Yes or 2. No.\n\n";
        cin >> endFight;
          
      } while (endFight != 2);
  
  //Run end of game sequence
  if (hp <= 0 && ogreHp <= 0)
    {
      cout << name << " and the dragon both have died.\n";
      cout << "Although you died, you slaid the dragon.\n";
      cout << name << " is posthumously knighted and celebrated throughout ";
      cout << "the kingdom. GAMEOVER.\n";
    }
  else if (hp >= 0 && ogreHp >= 0)
    {
      cout << name << " has fled from the battle with the ogre.\n";
      cout << "You are banished from the kingdom and must live the ";
      cout << "rest of your life in disgrace.\n";
      cout << "GAME OVER " << name << " Coward of the Kingdom.\n";
    }
  if (hp <= 0)
    {
      cout << name << " has died on your quest.\n";
      cout << "The kingdom mourns your death.\n";
      cout << "GAME OVER";
    }
  else
    {
      cout << name << " has slain the ogre.\n";
      cout << "You return victoriously to the kingdom with the dragon's ";
      cout << "head as proof of your victory.\n";
      cout << "King Mark knights you and the kingdoms cheers.\n";
      cout << "CONGRADULATIONS SIR " << name << " YOU WIN!";
    }
  }
  return 0;
}


