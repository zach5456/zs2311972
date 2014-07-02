/* 
   * File:   main.cpp
 * Author: Stewart, Zach
 * Class: 46024
 *
 * Created on July 2, 2014, 11:04 AM
 */

#include <iostream>
#include <iomanip>
using namespace std;

/*
 * 
 */
int main() {

  float testA, testB, testC, testD, testE;
  float average;
  
  cout << "This program will calculate the average test score. \n";
  cout << "Enter the score of the first test. \n";
  cin >> testA;
    
  cout << "Enter the score of the second test. \n";
  cin >> testB;
          
  cout << "Enter the score of the third test. \n";
  cin >> testC;
          
  cout << "Enter the score of the fourth test. \n";
  cin >> testD;
  
  cout << "Enter the score of the fifth test. \n";
  cin >> testE;

  average = (testA + testB + testC + testD + testE) / 5.0;
   
  cout << setprecision(3) << showpoint;
  cout << "The average of the tests is " << average << "." << endl;
          
  return 0;
}

