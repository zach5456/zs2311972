/* 
 * File:   main.cpp
 * Author: zach5456
 *
 * Created on July 25, 2014, 2:33 PM
 */

#include <iostream>
#include <string>

using namespace std;

/*
 * 
 */
int main() {
  
  string nameA, nameB, nameC;
  string boardA, boardB, boardC, boardD;
 
  cout << "Enter the passengers who have boarded.\n\n";
  getline (cin, nameA);
  getline (cin, nameB);
  getline (cin, nameC);
  cout<< "Enter the passengers who have luggage.\n";
  getline (cin, boardA);
  getline (cin, boardB);
  getline (cin, boardC);
  getline (cin, boardD);
          
  if(boardA == nameA)
  {
    cout << "OK\n";
  }
  else if (boardA == nameB)
  {
    cout << "OK\n";
  }
  else if (boardA == nameC)
  {
    cout << "OK\n";
  }
    if(boardB == nameA)
  {
    cout << "OK\n";
  }
  else if (boardB == nameB)
  {
    cout << "OK\n";
  }
  else if (boardB == nameC)
  {
    cout << "OK\n";
  }
    if(boardC == nameA)
  {
    cout << "OK\n";
  }
  else if (boardC == nameB)
  {
    cout << "OK\n";
  }
  else if (boardC == nameC)
  {
    cout << "OK\n";
  }
    if(boardD == nameA)
  {
    cout << "OK\n";
  }
  else if (boardD == nameB)
  {
    cout << "OK\n";
  }
  else if (boardD == nameC)
  {
    cout << "OK";
  }
    if(boardA != nameA)
  {
    cout << "WARNING: passenger not on board\n";
  }
  else if (boardA != nameB)
  {
    cout << "WARNING: passenger not on board\n";
  }
  else if (boardA != nameC)
  {
    cout << "WARNING: passenger not on board\n";
  }
     if(boardB != nameA)
  {
    cout << "WARNING: passenger not on board\n";
  }
  else if (boardB != nameB)
  {
    cout << "WARNING: passenger not on board\n";
  }
  else if (boardB != nameC)
  {
    cout << "WARNING: passenger not on board\n";
  }
     if(boardC != nameA)
  {
    cout << "WARNING: passenger not on board\n";
  }
  else if (boardC != nameB)
  {
    cout << "WARNING: passenger not on board\n";
  }
  else if (boardC != nameC)
  {
    cout << "WARNING: passenger not on board\n";
  }
   if(boardD != nameA)
  {
    cout << "WARNING: passenger not on board\n";
  }
  else if (boardD != nameB)
  {
    cout << "WARNING: passenger not on board\n";
  }
  else if (boardD != nameC)
  {
    cout << "WARNING: passenger not on board\n";
  }
  
  return 0;
}

