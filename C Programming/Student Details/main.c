#include <stdio.h>
#include <stdlib.h>

struct details
{
    int studentId;
    char name[20];
    int marks;
}student[5];

int main()
{
    int i;

    for(i=0;i<5;i++)
    {
        printf("Enter Student Details for Student %d:\n",i+1);
        printf("\tStudent id:");
        scanf("%d",&student[i].studentId);
        printf("\tStudent Name:");
        getchar();
        gets(student[i].name);
        printf("\tMarks:");
        scanf("%d",&student[i].marks);
    }
        printf("\nPrinting Data:\n");
        for(i=0;i<5;i++)
    {
        printf("Details of Student %d:\n",i+1);
        printf("\tStudent id: %d\n",student[i].studentId);
        printf("\tStudent Name: %s\n",student[i].name);
        printf("\tMarks: %d\n",student[i].marks);
    }
    return 0;
}
