#include<bits/stdc++.h>
using namespace std;
int main()
{

    char x[4]={'A','B','C','D'};

    /*int ar[4][4]=
    {
     {0,6,4,10},
     {6,0,0,5},
     {4,0,0,7},
     {10,5,7,0}
     };
     */
     int ar[4][4];
    int i,j,k;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            cin>>ar[i][j];
        }
    }

    cout<<"Vertex\t\t"<<" Adjacent List"<<endl;
    for(i=0;i<4;i++)
    {

        cout<<x[i]<<"\t\t";
        for(j=0;j<4;j++)
        {
            /*
            if(i==j)
                continue;
            else
            {
                cout<<x[j]<<","<<ar[i][j]<<" ";
            }
            */
            if(ar[i][j]!=0){
               cout<<x[j]<<","<<ar[i][j]<<" ";
            }
        }
        cout<<"\n";
    }
}

