/* 
 * File:   main.cpp
 * Author: zach5456
 *
 * Created on August 1, 2014, 3:26 PM
 */

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

/*
 * 
 */
int main() {
  int prob, i = 0;
  unsigned short number, reverse = 0;
  srand(time(0));
  int num = rand() % 1000 + 1, guess, tries = 3, again;
  bool repeat = true;

  cout << "Select problem 1-6." << endl;
  cin >> prob;
  
  if (prob == 1){
      cout << "Enter a number." << endl;
      cin >> number;

      for( ; number!= 0 ; )
        { 
          reverse = reverse * 10;
          reverse = reverse + number%10;
          number = number/10;
        }
      static_cast<signed short>(reverse);
      cout << "Reverse is:  " << reverse << endl;
  }
  else if (prob == 2){
    cout << "Guess a number between 1 - 1000." << endl;
    cin >> guess;
    do
    {
        if (guess > number)
        {
          cout << "Too High. Try again." << endl;
          cin >> guess;
        }
        else if (guess < number)
        {
          cout << "Too low. Try again." << endl;
          cin >> guess;
        }
        else if (guess == number)
        {
          cout << "Congratulations, you guessed the number.\n";
          cout << "Would you like to play again (y or n)\n";
          cin >> repeat;
          if (repeat != 'y')
          {
            repeat = false;
          }
        }
      tries--;
    }while (repeat && guess != number && tries > 0);
      if (tries == 0)
        {
         cout << "Too many tries.\n";
        }
  }
  else if (prob == 3)
  {
    
  }
  return 0;
}

