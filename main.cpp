#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
    unsigned int n,loop,degress,edge,i,j;
    n=loop=degress=edge=0;
    time_t t;
    srand(time(&t));
    cout<<"Please enter your n*n matrix: ";
    cin>>n;
    int matrix[n][n];
    for (i=0;i<n;i++)
        for (j=0;j<n;j++)
            matrix[i][j]=rand() % 2;
    //Disable Arrow
     for (i=0;i<n;i++)
        for (j=0;j<n;j++)
            matrix[i][j]=matrix[j][i];
    cout<<endl<<"Result's"<<endl<<endl;
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
            cout<<"   "<<matrix[i][j];
    cout<<endl;
    }
    for (i=0;i<n;i++)
        for (j=0;j<n;j++)
            if (i==j && matrix[i][j]==1)
            loop++;
            else if(i!=j && matrix[i][j]==1)
            edge++;
    cout<<endl<<"[loop]:"<<loop<<endl;
    edge=(edge/2);
    cout<<"[edge]:"<<edge<<endl<<endl;
    for (i=0;i<n;i++)
    {
        degress=0;
        for (j=0;j<n;j++)
            if (i!=j && matrix[i][
                j]==1)
            degress++;
        cout<<"[degress "<<i<<"]:"<<degress<<endl;
    }
    return 0;
}
