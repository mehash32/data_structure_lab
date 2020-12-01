#include <stdio.h>
#include <stdlib.h>

struct details
{
    int studentId;
    char name[20];
    int marks;
} student[5];

int main()
{
    int i,highest=0,lowest=100,maximum,minimum;

    for(i=0; i<5; i++)
    {
        printf("Enter Student Details for Student %d:\n",i+1);
        printf("\tStudent id:");
        scanf("%d",&student[i].studentId);
        printf("\tStudent Name:");
        getchar();
        gets(student[i].name);
        printf("\tMarks(out of 100):");
        scanf("%d",&student[i].marks);
        if(student[i].marks >= maximum)
            maximum = student[i].marks;
        if(student[i].marks <= minimum)
            minimum = student[i].marks;
    }
    printf("\nPrinting Data:\n");
    for(i=0; i<5; i++)
    {
        if(maximum==student[i].marks)
        {
            printf("Details of Highest Student %d:\n",i+1);
            printf("\tStudent id: %d\n",student[i].studentId);
            printf("\tStudent Name: %s\n",student[i].name);
            printf("\tMarks: %d\n",student[i].marks);
        }
        if(minimum==student[i].marks)
        {
            printf("Details of Lowest Student %d:\n",i+1);
            printf("\tStudent id: %d\n",student[i].studentId);
            printf("\tStudent Name: %s\n",student[i].name);
            printf("\tMarks: %d\n",student[i].marks);
        }

    }
    return 0;
}
