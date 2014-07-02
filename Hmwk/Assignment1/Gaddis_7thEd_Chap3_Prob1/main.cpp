/* 
  * File:   main.cpp
 * Author: Stewart, Zach
 * Class: 46024
 *
 * Created on July 2, 2014, 10:19 AM
 */

#include <iostream>
using namespace std;

/*
 * 
 */
int main() {

  float tankSize, milesDriven, mpg;
  
  
  cout << "This program shows the MPG of any car. \n";
  cout << "Enter how many gallons your car's tank can hold. \n";
  cin >> tankSize;
  
  cout << "Enter how many miles can be driven on a full tank. \n";
  cin >> milesDriven;
  
  mpg = milesDriven / tankSize;
  cout << "The MPG is " << mpg << "." << endl;
  
  return 0;
}

