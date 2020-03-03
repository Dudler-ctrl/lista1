#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cin >> x;
    cin >> y;

    if (x%y==0){

    cout<<"Tak"<<endl;
    }
    else if (y%x==0){

        cout<<"Tak"<<endl;
    }
    else{
        cout<<"Nie"<<endl;
    }



    return 0;
}
