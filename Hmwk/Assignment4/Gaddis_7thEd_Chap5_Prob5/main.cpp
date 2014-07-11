/* 
 * File:   main.cpp
 * Author: Stewart, Zach
 * Class: 46024
 *
 * Created on July 10, 2014, 11:11 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main() {

  float fee = 2500;
  int year = 1;  
  
  cout << fixed << showpoint << setprecision(2);
  cout << "Year\tPrice" << endl;
  
  while (year <= 6)
  {
    fee = (fee * 0.04) + fee;
    cout << "The total for " << year << "is $" << fee << endl;
    year++;
  }
  
  return 0;
}

