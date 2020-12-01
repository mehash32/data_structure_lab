#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define BUBBLE 800
int main()
{
	int myArray[BUBBLE];
	int i, j;
	int temp = 0;
	int num;

	srand(time(NULL));

	//fill array
	for (i = 0; i < BUBBLE; i ++)
	{
		   num = rand() % BUBBLE + 1;
		   myArray[i] = num;
	}


	//sort array
	for(i = 0; i < BUBBLE; i++)
	{

		for (j = 0; j < BUBBLE-1; j++)
        {
            if (myArray[j] > myArray[j+1])
			{
				temp = myArray[j];
				myArray[j] = myArray[j+1];
				myArray[j+1] = temp;
			}
        }/*End inner for loop*/
	}/*End outer for loop*/


	//print array
	for (i = 0; i < BUBBLE; i++)
	{
		printf("%d\n",myArray[i]);
	}

	system("PAUSE");
	return 0;
}/*End of main*/




/*
# include <stdio.h>
# include <stdlib.h>
# include <time.h>
int genrand(int minv,int maxv);
int generate_int_rnd_number(int min_value,int max_value);
void bubbleSort(int numbers[],int array_size);
int main()
{
int min_value,max_value,N,i,numbers[100],array_size;
printf("Enter Min Value:");
scanf("%d",&min_value);
printf("Enter Max Value:");
scanf("%d",&max_value);
printf("Enter Number of Random Variables:");
scanf("%d",&N);
srand(time(0));
numbers[i]=generate_int_rnd_number(min_value,max_value);
numbers[i]=(numbers[100],array_size);
return 0;
}
int genrand(int minv,int maxv)
{
return (rand()%(maxv-minv)+minv);
}
int generate_int_rnd_number(int min_value,int max_value)
{
int i,N,numbers[i];
printf("Your Lucky Numbers:\n");
for (i=0; i < N; i++)
{
numbers[i]=genrand(min_value,max_value);
printf("%d\n",numbers[i]);
}
}
void bubbleSort(int numbers[],int array_size)
{
int i,temp,j,N;
for (i=0; i < array_size-1; i++)
for (j=0; j < array_size-i-1; j++)
if (numbers[j] > numbers[j+1])
{
temp=numbers[j];
numbers[j]=numbers[j+1];
numbers[j+1]=temp;
}
printf("Your Lucky Numbers(sorted):\n");
for (i=0; i < N; i++)
printf("%d\n",numbers[i]);
}
*/
