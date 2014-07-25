/* 
 * File:   main.cpp
 * Author: Stewart, Zach
 * Class: 46024
 *
 * Created on July 25, 2014, 3:13 PM
 */

#include <iostream>
#include <string>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
  
  string name, address, city, state, major, zip, tele;
  
  cout << "Enter your name.\n";
  getline (cin, name);
  cout << "Enter your address.\n";
  getline (cin, address);
  cout << "Enter your city.\n";
  getline (cin, city);
  cout << "Enter your state.\n";
  getline (cin, state);
  cout << "Enter your zipcode.\n";
  getline (cin, zip);
  cout << "Enter your telephone number.\n";
  getline (cin, tele);
  cout << "Enter your college major.\n";
  getline (cin, major);
  
  cout << name << "\n" << address << city << state << zip << "\n";
  cout << tele << "\n" << major << "\n";

  return 0;
}

