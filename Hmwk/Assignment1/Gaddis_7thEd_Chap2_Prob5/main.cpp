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

  float apples = 28, oranges = 37, pears = 24, grapes = 32, peaches = 33, sum;
  float totalEaten;
  sum = apples + oranges + pears + grapes + peaches;
  totalEaten = sum / 5;
  
  cout << "The average fruit eaten is " << totalEaten << endl;        
          
  return 0;
}
