#include <iostream>

using namespace std;

int main()
{
    int i,j;
    float m1[2][3]={{1,2,5},{8,1.2,4}}, m2[2][3]={{6,4.2,3},{2.1,9,7}}, m3[2][3];
    cout<<"Dodawane macierze: "<<endl;
    cout<<"Macierz 1:"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            cout<<m1[j][i]<<"\t";
        }
        cout<<endl;
    }
    cout<<"Macierz 2: "<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            cout<<m2[j][i]<<"\t";
        }
        cout<<endl;
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            m3[j][i]=m1[j][i]+m2[j][i];
        }
    }
    cout<<"Macierz po dodaniu: "<<endl;
        for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            cout<<m3[j][i]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}