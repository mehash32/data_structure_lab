///Find the maximum and the minimum number from huge random numbers
#include <stdio.h>
#include <time.h>
int main()
{
    int i=0,size=0;
    printf("How many data should enter: ");
    scanf("%d",&size);
    int number[size];
    srand(time(NULL));              ///generate random number each test case
    printf("Random Numbers: \n");
    for(i=0;i<size;i++)
    {                               ///input of random number
        number[i]=rand()%100;
        printf("%d\t",number[i]);
    }
    int maximum=number[0],minimum=number[0];
    for(i=0;i<size;i++)
    {                               ///finding maximum and minimum
        if(number[i] >= maximum)
            maximum = number[i];
        if(number[i] <= minimum)
            minimum = number[i];
    }
    printf("\n\nLargest Number = %d\nSmallest Number = %d\n",maximum,minimum);
    return 0;
}
