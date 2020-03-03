#include <iostream>

using namespace std;

int main()
{
    int rok;
    cout << "Podaj rok" << endl;
    cin>>rok;

    if (rok%400==0){
        cout<<"PRZESTEPNY"<<endl;
    }

    else if (rok%4==0 && rok%100!=0){
        cout<<"PRZESTEPNY"<<endl;
    }

    else {

        cout<<"NIEPRZESTEPNY";
    }




    return 0;
}
