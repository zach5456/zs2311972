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

  int time, mph, distance;
  int blah = 1;
  
  cout << "Enter the time traveled." << endl;
  cin >> time;
  while (time <= 0)
  {
    cout << "Please enter a number larger than 0." << endl;
    cin >> time;
  }
 
  cout << "Enter your speed in MPH." << endl;
  cin >> mph;
  while (mph <= 0)
  {
    cout << "Please enter a speed faster than 0." << endl;
    cin >> mph;
  }  
  
  while (blah <= time)
    {
      distance = blah * mph;
      cout << blah << "\t" << distance << endl; 
      blah++;
    }
  return 0;
 }

