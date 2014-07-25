/* 
 * File:   main.cpp
 * Author: Stewart, Zach
 * Class: 46024
 *
 * Created on July 25, 2014, 2:50 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
  int x,tab,rows = 5,y;
    for(x = 1;x <= rows;x++)
    {
        for(tab = 1;tab <= rows-x;tab++)
        {
           cout<<"  ";
        }
        while(y != 2 * x - 1)
        {
           cout<<"* ";
           y++;
        }
        y=0;
        cout<<"\n";
    }
  return 0;
}

