/* 
 * File:   main.cpp
 * Author: Stewart, Zach
 * Class: 46024
 *
 * Created on July 10, 2014, 10:29 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main() {

  int number;
  
  cout << "Enter any number, and I will count up to that number." << endl;
  cin >> number;
  
    while (number <=0) 
  {    
    cout << "You have entered a negative number.\n";
    cout << "Please enter a number greater than 0.\n";
    cin >> number;
  }
  
for (int count = 1; count <= number; count++)
    cout << count << endl;
  
  return 0;
}

