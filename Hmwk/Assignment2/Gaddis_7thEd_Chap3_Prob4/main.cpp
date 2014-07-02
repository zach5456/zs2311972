/* 
   * File:   main.cpp
 * Author: Stewart, Zach
 * Class: 46024
 *
 * Created on July 2, 2014, 11:35 AM
 */

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

/*
 * 
 */
int main() {
  
  string monthA, monthB, monthC;
  float average, rainA, rainB, rainC;
  
  cout << "Enter the first month you want to calculate the amount of rain ";
  cout << "for. \n";
  getline(cin, monthA);
  
  cout << "Enter the second month you want to calculate the amount of rain ";
  cout <<"for. \n";
  getline(cin, monthB);
          
  cout << "Enter the third month you want to calculate the amount of rain ";
  cout <<"for. \n";
  getline(cin, monthC);
          
  cout << "Enter the amount of rain for the first month. \n";
  cin >> rainA;
          
  cout << "Enter the amount of rain for the second month. \n";
  cin >> rainB;
          
  cout << "Enter the amount of rain for the first month. \n";
  cin >> rainC;
  
  average = (rainA + rainB + rainC) / 3.00;
  
  cout << setprecision(2) << fixed;
  cout << "The average rain for, " << monthA << ", " << monthB << ", and ",
  cout << monthC << " is " << average << "." << endl;

  return 0;
}
