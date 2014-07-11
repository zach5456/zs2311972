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

  const int START_MIN = 10;
  const int END_MIN = 30;
  float cal = 3.9, total, time;
  
  cout << fixed << showpoint << setprecision(2);
  
  cout << "Time\tCalories" << endl;
  
  for (time = START_MIN; time <= END_MIN; time += 5)
  {
    total = time * cal;
    cout << time << "\t" << total << endl;
  }
  
  return 0;
}

