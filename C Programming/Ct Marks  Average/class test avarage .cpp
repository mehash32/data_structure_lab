#include<stdio.h>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;
struct details
{
    int id;
    char name[20];
}student[2];

int main()
{
    int i,j,k;
    double avarage;
    int ct[3];
    for(i=0;i<2;i++)
    {

    printf("Enter Student Details for Student %d:\n",i+1);
        printf("\tStudent id:");
        scanf("%d",&student[i].id);
        printf("\tStudent Name:");
        getchar();
        gets(student[i].name);
        for(j=0;j<3;j++)
        {
        printf("\tMarks(out of 30):");
        scanf("%d",&ct[j]);

        }
        sort(ct,ct+3);
        printf(" best two marks are %d & %d\n",ct[1],ct[2]);
        avarage=(double)((ct[1]+ct[2])/2.0);
         printf("Details of Student %d:\n",i+1);
        printf("\tStudent id: %d\n",student[i].id);
        printf("\tStudent Name: %s\n",student[i].name);
       cout<<fixed<<setprecision(2)<<"Average : "<<avarage<<endl;


    }


    return 0;


}
