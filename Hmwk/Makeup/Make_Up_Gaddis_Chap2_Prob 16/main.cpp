/* 
 * File:   main.cpp
 * Author: Stewart, Zach
 * Class: 46024
 *
 * Created on July 25, 2014, 2:58 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
  
  int x = 4, y, z, a;
  for (y = 0;y < x;y++)
  {
    for(z = 0;z <(x - y - 1); z++)
      cout << " ";
    for (a = 0;a < (2 * y + 1); a++)
      cout << "*";
    cout << "\n";
  }
  for(y = 0; y < x; y++)
  {
    for(z = 0;z <= y; z++)
      cout << " ";
    for(a = (2 * x - 2 * y - 3);a > 0; a--)
      cout << "*";
    cout << "\n";
  }

  return 0;
}

