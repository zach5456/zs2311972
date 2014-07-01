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

  float waterLevel, riseRate = 1.5e-3;
  
  waterLevel = riseRate * 5;
  cout << "The ocean will be " << waterLevel << " higher in 5 years." << endl;
  
  waterLevel = riseRate * 7;
  cout << "The ocean will be " << waterLevel << " higher in 7 years." << endl;
  
  waterLevel = riseRate * 10;
  cout << "The ocean will be " << waterLevel << " higher in 10 years." << endl;
          
  return 0;
}
