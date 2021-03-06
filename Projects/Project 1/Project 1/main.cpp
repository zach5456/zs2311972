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
  
  //set up function prototypes
  int dragonFight(float, short);
  int ogreFight(float, short);
  int dragon(short, short);
  int ogre(short, short);
  void chest();
  void door();
  
  //set variables
  const int TOWER = 1;
  const int CAVE = 2;
  const int NAMES = 3;
  string name[NAMES];
  float dragonHp = 150, ogreHp = 150;
  short hp = 100, mp = 30;
  int choice;
  
  //Explaining what's happening in the game and making a story
  //Use 2 dimensional array to get names of characters
  cout << "You are a squire in the kingdom of Zir.\n";
  cout << "Enter your name.\n";
  getline(cin, name[0]);
  cout << "Who is the king you serve?\n";
  getline(cin, name[1]);
  cout << name[0] << ", you are going on a quest to become a knight sent by ";
  cout << name[1] << "\n";
  cout << "You also have a special ability that allows you to ";
  cout << "regen 2 HP per round you fight.\n";
  cout << "Who is the knight you squire for?\n";
  getline(cin, name[2]);
  cout << "Before going " << name[2]<< " gives you a sword and shield.\n";
  cout << name[0] << ", your mission is to slay either the dragon or the ogre\n";
  cout << name[0] << ", you are in the forest and find the ogre's cave and the";
  cout << "dragon's tower.\n";
  cout << name[0] << ", do you choose to enter the cave or the tower.\n";
  
  //Display quest options
  cout << "1. Tower\n";
  cout << "2. Cave\n";
  cin >> choice;
  
  //Make choice where to go
  if (choice == TOWER)
  {
    cout << name[0] << " has chosen to enter the tower and fight the dragon.\n";
    
    //Run trap function
    chest();
    cout << "You finally arrive at the lair of the dragon. \n";
    cout << "Prepare yourself for battle.\n\n";
    
    //Run fight function
    dragonHp = dragonFight(dragonHp, mp);
    hp = dragon(hp, mp);
    
    //Run end of game sequence    
    if (hp <= 0 && dragonHp <= 0)
      {
        cout << name[0] << " and the dragon both have died.\n";
        cout << "Although you died, you slain the dragon.\n";
        cout << name[0] << " is posthumously knighted and celebrated throughout ";
        cout << "the kingdom. GAMEOVER.\n";
      }
    else if (hp >= 0 && dragonHp >= 0)
      {
        cout << name[0] << " has fled from the battle with the dragon.\n";
        cout << "You are banished from the kingdom and must live the ";
        cout << "rest of your life in disgrace.\n";
        cout << "GAME OVER " << name[0] << " Coward of the Kingdom.\n";
      }
    else if (hp <= 0)
      {
        cout << name[0] << " has died on your quest.\n";
        cout << "The kingdom mourns your death.\n";
        cout << "GAME OVER";
      }
    else if (dragonHp <= 0)
      {
        cout << name[0] << " has slain the dragon.\n";
        cout << "You return victoriously to the kingdom with the dragon's ";
        cout << "head as proof of your victory.\n";
        cout << "King Mark knights you and the kingdoms cheers.\n";
        cout << "CONGRADULATIONS SIR " << name[0] << " YOU WIN!\n";
      }
  }     
  else
  {
    cout << name[0] << " has chosen to enter the cave and fight the ogre.\n";
    
    //Run trap function
    door();
    cout << "You finally arrive at the den of the ogre. \n";
    cout << "Prepare yourself for battle.\n\n";
    
    //Start fight function
    ogreHp = ogreFight(ogreHp, mp);
    hp = ogre(hp, mp);
  
  //Run end of game sequence
  if (hp <= 0 && ogreHp <= 0)
    {
      cout << name[0] << " and the dragon both have died.\n";
      cout << "Although you died, you slaid the dragon.\n";
      cout << name[0] << " is posthumously knighted and celebrated throughout ";
      cout << "the kingdom. GAMEOVER.\n";
    }
  else if (hp >= 0 && ogreHp >= 0)
    {
      cout << name[0] << " has fled from the battle with the ogre.\n";
      cout << "You are banished from the kingdom and must live the ";
      cout << "rest of your life in disgrace.\n";
      cout << "GAME OVER " << name[0] << " Coward of the Kingdom.\n";
    }
  if (hp <= 0)
    {
      cout << name[0] << " has died on your quest.\n";
      cout << "The kingdom mourns your death.\n";
      cout << "GAME OVER";
    }
  else if (ogreHp <= 0)
    {
      cout << name[0] << " has slain the ogre.\n";
      cout << "You return victoriously to the kingdom with the dragon's ";
      cout << "head as proof of your victory.\n";
      cout << "King Mark knights you and the kingdoms cheers.\n";
      cout << "CONGRADULATIONS SIR " << name[0] << " YOU WIN!";
    }
  }
  return 0;
}

//Trap sequence
void chest()
{
  char chest;
  cout << "As you ascend the tower you come across a chest do you open it?\n";
  cout << "Y/N\n";
  cin >> chest;
  switch (chest)
      {
        case 'y':
    case 'Y': cout << "You triggered a trap but it was inactive. Let this be ";
              cout << "a warning for next time.\n\n";
                  break;
        case 'n':
        case 'N': cout << "You ignore the booby trapped chest and move on.\n\n";
                  break;
        default: cout << "That is not a valid option. Enter you choice ";
                 cout << "again.\n\n";
                 cin >> chest;
                 
                 switch (chest)
                  {
                    case 'y':
                    case 'Y': cout << "You triggered a trap but it was ";
                              cout << "inactive. Let this be a warning for ";
                              cout << "next time.\n\n";
                              break;
                    case 'n':
                    case 'N': cout << "You ignore the booby trapped chest and";
                              cout <<" move on.\n\n";
                  }
      }
  return;
}

//Trap sequence
void door()
{
  char door;
  cout << "As you enter the cave you come across a door marked with Treasure";
  cout << "Room do you open it?\n";
  cout << "Y/N\n";
  cin >> door;
      switch (door)
      {
        case 'y':
        case 'Y': cout << "You triggered a trap but it was inactive. Let this ";
                  cout << "be a warning for next time.\n\n";
                  break;
        case 'n':
        case 'N': cout << "You ignore the booby trapped room and move on.\n\n";
                  break;
        default: cout << "That is not a valid option. Enter you choice ";
                 cout << "again.\n\n";
                 cin >> door;
                 
                 switch (door)
                  {
                    case 'y':
                    case 'Y': cout << "You triggered a trap but it was  ";
                              cout << "inactive. Let this be a warning for ";
                              cout << "next time.\n\n";
                              break;
                    case 'n':
                    case 'N': cout << "You ignore the booby trapped door and";
                              cout <<" move on.\n\n";
                  }
      }
      return;
}

//You doing damage sequence
int dragonFight(float dragonHp = 150, short mp = 30)
{
  char fight;
  int endFight;
  do
      {
        int sword = rand() % 10 + 1, spell = rand() % 25 + 15;
        
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
          cout << "The dragon still has " << dragonHp << " HP left.\n\n";
          cout << "Do you want to keep fighting? 1. Yes or 2. No.\n\n";
          cin >> endFight;
          
      } while (endFight != 2);
      return dragonHp;
}

//Damage done to you sequence
int dragon(short hp = 100, short mp = 30)
{
  int endFight;
  int dragonDmg = rand() % 12 + 1;
  do
  {      
  cout << "The dragon does " << dragonDmg << " damage to you.\n";
  hp = hp - dragonDmg;
  hp++;
  cout << "You still have " << hp << " left and " << mp << " left.\n";
                
  cout << "Do you want to keep fighting? 1. Yes or 2. No.\n\n";
  cin >> endFight;
          
      } while (endFight != 2);
      return hp;
  }

//You fighting sequence
int ogreFight(float ogreHp = 150, short mp = 30)
{
  char fight;
  int endFight;
  do
      {
        int sword = rand() % 12 + 1, spell = rand() % 25 + 15;
        
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
        cout << "The ogre still has " << ogreHp << " HP left.\n\n";
        cout << "Do you want to keep fighting? 1. Yes or 2. No.\n\n";
        cin >> endFight;
          
      } while (endFight != 2);
      return ogreHp;
}

//Damage done to you sequence
int ogre(short hp = 100, short mp = 100)
{
  char endFight;
  int ogreDmg = rand() % 13 + 1;
  do
  {    
  cout << "The ogre does " << ogreDmg << " damage to you.\n";
  hp = hp - ogreDmg;
  hp++;
  cout << "You still have " << hp << " HP and " << mp << " MP left.\n";
  cout << "Do you want to keep fighting? 1. Yes or 2. No.\n\n";
  cin >> endFight;
          
      } while (endFight != 2);
      return hp;      
  }