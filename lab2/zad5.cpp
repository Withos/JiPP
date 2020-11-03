#include <iostream>
#include <algorithm>
#include <stdlib.h>
using namespace std;
void zam (void *a, void *b,size_t s){
    void *c=malloc(s);
    memcpy(c,a,s);
    memcpy(a,b,s);
    memcpy(b,c,s);
    free(c);
}
int main(){
    int ai=12;
    int bi=58;
    void *aptr=&ai;
    void *bptr=&bi;
    cout<<"Przed zamiana:"<<endl;
    cout<<ai<<"\t"<<bi<<endl;
    zam(aptr,bptr,sizeof(ai));

    float af=4.2;
    float bf=15.6;
    aptr=&af;
    bptr=&bf;
    cout<<af<<"\t"<<bf<<endl;
    zam(aptr,bptr,sizeof(af));

    char ac='x';
    char bc='y';
    aptr=&ac;
    bptr=&bc;
    cout<<ac<<"\t"<<bc<<endl;
    zam(aptr,bptr,sizeof(ac));
    cout<<endl<<"Po zamianie: "<<endl;
    cout<<ai<<"\t"<<bi<<endl;
    cout<<af<<"\t"<<bf<<endl;
    cout<<ac<<"\t"<<bc<<endl;
}