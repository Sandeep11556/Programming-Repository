#include <stdio.h>

// Brian Kernighan’s Algorithm
int findSetBitCountEx(int number)
{
    int count=0;
    while(number){
        count++;
        number&=(number-1);
    }
    return count;
}

int findSetBitCount(int number)
{
    int count=0;
    while(number){
        count+=(number&1);
        number>>=1;
    }
    return count;
}
