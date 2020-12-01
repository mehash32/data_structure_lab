#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main()
{
    int arrayList[20];
    int i=0,number=0;
    srand(time(NULL));              ///generate random number each test case
    printf("Before Insertion: \n");
    for(i=0;i<19;i++)
    {                               ///input of random number
        arrayList[i]=(rand() % 20);
        printf("%d\t",arrayList[i]);
    }
    for(i=19;i>=8;i--)              ///shift to the next position
        arrayList[i] = arrayList[i-1];
    arrayList[i]=(rand() % 20);
    printf("\nAfter Insertion: \n");
    for(i=0;i<20;i++)
        printf("%d\t",arrayList[i]);
    return 0;
}
