/* 
    * File:   main.cpp
 * Author: Stewart, Zach
 * Class: 46024
 *
 * Created on July 2, 2014, 12:37 PM
 */

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

/*
 * 
 */
int main() {

  float eaten, calories, cookie, serving = 4, servingCalories = 300;
  
  cout << "Enter amount of cookies eaten." << endl;
  cin >> eaten;
         
  cookie = servingCalories / serving;
  
  calories = cookie * eaten;
  cout << "The total calories eaten is " << calories << "." << endl;
  
  return 0;
}

