/* 
    * File:   main.cpp
 * Author: Stewart, Zach
 * Class: 46024
 *
 * Created on July 2, 2014, 12:53 PM
 */

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

/*
 * 
 */
int main() {

  float replacementCost, insurance;
  
  cout << "Enter the amount it would take to replace the structure." <<endl;
  cin >> replacementCost;
  
  insurance = replacementCost * 0.80;
  cout << "The recommended insurance is $" << insurance << "." << endl;
  
  return 0;
}

