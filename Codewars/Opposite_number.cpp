/*
https://www.codewars.com/kata/56dec885c54a926dcd001095/train/cpp
given a number (integer / decimal / both depending on the language), 
find its opposite (additive inverse).
Examples:
1: -1
14: -14
-34: 34
*/

// using namespace std;
// #include <cstdio>
#include <string>
#include <iostream>
#include <windows.h>
using namespace std;

int opposite(int number) 
{
    return -number;
}

double  opposite(double  number) 
{
    return -number;
}


main(){
    system("cls"); int tm = 6000;
    // for (int i=0;i<12;i++){
    //     printf("\n"); }
    int i = 10; double f = 13.13; string s;
    printf("Oppsite number for %5d  is %5d \n", i, opposite(i));
    printf("Oppsite number for %8.2f  is %8.2f \n", f, opposite(f));
    Sleep(tm); // "windows.h"

    // cin >> s;
}