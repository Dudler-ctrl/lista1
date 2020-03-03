#include <iostream>

using namespace std;

int main()
{
    double m, h;
    double BMI;
    cout<<"Podaj mase"<<endl;
    cin>>m;
    cout<<"Podaj wzrost"<<endl;
    cin>>h;
    BMI=m/(h*h);

    if (BMI<18.5){
        cout<<"NIEDOWAGA"<<endl;
    }
    else if (BMI>=25){
        cout<<"NADWAGA"<<endl;
    }
    else {
        cout<<"PRAWIDLOWA WAGA"<<endl;
    }


    return 0;



}
