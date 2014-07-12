/* 
 * File:   main.cpp
 * Author: Stewart, Zach
 * Class: 46024
 *
 * Created on July 11, 2014, 6:21 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main() {

  float inc;
  int pop, days;
  
  cout << "Please enter the starting population." << endl;
  cin >> pop;
  while (pop <2)
  {
    cout << "Please enter a starting population larger than 2." << endl;
    cin >> pop;
  }
  
  cout << "Please enter the average population increase as a %." << endl;
  cin >> inc;
  while (inc <=0)
  {
    cout << "Please enter a % larger than 0." << endl;
    cin >> inc;
  }
  
  cout << "Please enter the number of days they will increase." << endl;
  cin >> days;
  while (days <0)
  {
    cout << "Please enter a number of days larger than 0." << endl;
    cin >> days;
  }
  
  for (int count = 1; count <= days; count++)
  {
   pop = pop + (pop * inc/100);
   cout << "The population for day " << count << " is " << pop << endl;
  }
  
  return 0;
}

