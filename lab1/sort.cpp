#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[])
{
    int i;
    int tab[argc-1];
    for(i=1;i<argc;i++)
        tab[i-1]=atoi(argv[i]);
    for(i=1;i<argc;i++)
        cout<<tab[i-1]<<" ";
    cout<<endl;
    int n = sizeof(tab)/sizeof(tab[0]);
    sort(tab,tab+n);
    for(i=1;i<argc;i++)
        cout<<tab[i-1]<<" ";

}