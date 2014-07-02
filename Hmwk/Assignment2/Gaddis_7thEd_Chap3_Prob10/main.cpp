/* 
   * File:   main.cpp
 * Author: Stewart, Zach
 * Class: 46024
 *
 * Created on July 2, 2014, 10:43 AM
 */

#include <iostream>
using namespace std;

/*
 * 
 */
int main() {

  int c;
  float f;
  
  cout << "This program converts Celsius to Fahrenheit. \n";
  cout << "Enter the degrees in Celsius. \n";
  cin >> c;
          
  f = (9.0 / 5.0) * c + 32;
          
  cout << "The temperature in Fahrenheit is " << f << "." << endl;
  
  return 0;
}

