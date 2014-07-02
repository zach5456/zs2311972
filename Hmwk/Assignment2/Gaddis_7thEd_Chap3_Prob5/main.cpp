/* 
   * File:   main.cpp
 * Author: Stewart, Zach
 * Class: 46024
 *
 * Created on July 2, 2014, 12:12 PM
 */

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

/*
 * 
 */
int main() {

  string movieName;
  float ticketAdult = 6.00, ticketChild = 3.00, gross, net, amountPaid;
  
  cout << "Enter the name of the movie you'd like to calculate income." << endl;
  getline(cin, movieName);
  
  cout << "Enter the amount of adult tickets sold." << endl;
  cin >> ticketAdult;
  
  cout << "Enter the amount of child tickets sold." << endl;
  cin >>ticketChild;
  
  gross = ticketAdult + ticketChild;
  cout << "The gross amount made was $" << gross << "." << endl;
  
  amountPaid = gross * 0.20;
  net = gross - amountPaid;
  cout << setprecision(6) << showpoint << net << endl;
  cout << "The net amount made is $" << net << "." << endl;
  
  amountPaid = gross * 0.20;
  cout << setprecision(6) << showpoint << amountPaid << endl;
  cout << "The amount paid is $" << amountPaid << "." << endl;
  
  return 0;
}

