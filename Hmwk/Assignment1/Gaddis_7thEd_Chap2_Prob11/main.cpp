/* 
 * File:   main.cpp
 * Author: Stewart, Zach
 * Class: 46024
 *
 * Created on June 26, 2014, 11:22 PM
 */

#include <iostream>
using namespace std;

int main() {

  float gasTank = 20.0, town = 21.5, highway = 26.8, distance;
  
  distance = gasTank * town;
  cout << "The total distance driven in town is " << distance << "." << endl;
  
  distance = gasTank * highway;
  cout << "The total distance driven in town is " << distance << "." << endl;
  
  return 0;
}
