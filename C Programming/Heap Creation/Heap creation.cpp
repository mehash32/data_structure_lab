#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,limit,point,flag=0,count,leftchild,rightchild,temp;
    cout << "---------------------------\n";
    cout << "Heap creation in array \n";
    cout << "---------------------------\n";
    srand(time(0));
    cout << "how many number: ";
    cin >> limit;
    int arra[limit+1]={0};
    cout << "generating " << limit << "random number : \n";
    for(i=1;i<=limit;i++)
    {
        arra[i]=(rand()%90)+10;
        cout << arra[i] << ", ";
    }
    cout << "\nData Input complete...\n\n";

    for(i=1;i<=limit;i++)
    {
        flag=i;
        for(j=flag/2;j>0;)
        {
            if(arra[j]<arra[flag])
            {
                temp=arra[flag];
                arra[flag]=arra[j];
                arra[j]=temp;
                j=j/2;
                flag=flag/2;
            }
            else
                break;
        }
    }
    cout << "Heap creation is complete as\n";
    for(i=1;i<=limit;i++)
        cout << arra[i] << ", ";
    cout << "\n";
    cout << "Enter a position to test : ";
    cin >> flag;
    cout << "\n-----------------------------------------\n";
    if((flag*2)<=limit)
    {
        cout << "Index " << flag << " value " << arra[flag] << " \n\nLeft children index is " << flag*2 ;
        cout << " and value " << arra[flag*2] << "\n";
        if((flag*2)+1 <=limit)
                    cout << "Right children index is " << (flag*2)+1 << " and value " << arra[(flag*2)+1] << "\n";

    }
    else
    {
        cout << "This index is leaf point\nIndex " << flag << " value " ;
        cout << arra[flag] << "\nParent index " << flag/2 <<  " and value " << arra[flag/2] << "\n";
    }
    return 0;
}
