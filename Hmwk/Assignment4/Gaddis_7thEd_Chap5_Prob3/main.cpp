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

  const int START_YEAR = 1;
  const int END_YEAR = 25;
  float rise = 1.5, total, year;
  
  cout << fixed << showpoint << setprecision(1);
  
  cout << "Year\tRise" << endl;
  
  for (year = START_YEAR; year <= END_YEAR; year++)
  {
    total = year * rise;
    cout << year << "\t" << total << endl;
  }
  
  return 0;
}

