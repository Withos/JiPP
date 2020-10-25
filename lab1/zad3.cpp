#include <iostream>

using namespace std;

int przedzial(float x)
{
    if(x<16)
    return 0;
    if(x<17)
    return 1;
    if(x<18.5)
    return 2;
    if(x<25)
    return 3;
    if(x<30)
    return 4;
    if(x<35)
    return 5;
    if(x<40)
    return 6;
    return 7;
}

int main()
{
    float masa, wzrost, BMI;
    cout<<"Podaj mase ciala w kilogramach: "<<endl;
    cin>>masa;
    cout<<"Podaj wzrost w metrach: "<<endl;
    cin>>wzrost;
    BMI=masa/(wzrost*wzrost);
    switch(przedzial(BMI))
    {
        case 0:
        cout<<"BMI rowne: "<<BMI<<" - wyglodzenie";
        break;
        case 1:
        cout<<"BMI rowne: "<<BMI<<" - wychodzenie";
        break;
        case 2:
        cout<<"BMI rowne: "<<BMI<<" - niedowaga";
        break;
        case 3:
        cout<<"BMI rowne: "<<BMI<<" - wartosc prawidlowa";
        break;
        case 4:
        cout<<"BMI rowne: "<<BMI<<" - nadwaga";
        break;
        case 5:
        cout<<"BMI rowne: "<<BMI<<" - I stopien otylosci";
        break;
        case 6:
        cout<<"BMI rowne: "<<BMI<<" - II stopien otylosci";
        break;
        case 7:
        cout<<"BMI rowne: "<<BMI<<" - otylosc skrajna";
        break;
        default:
        cout<<"Error";
        break;
    }
}