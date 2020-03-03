#include <iostream>

using namespace std;

int main()
{
    int H, N;
    double x, cena;
    cin >> H >> N >> x;

    if (N<3){
        cena =0;
    }
    else if(N>80){
        cena =0;
    }
    else if(H<140){
        cena = 0.8 * x;
    }
    else if(H>200){
        cena = 1.2 * x;
    }
    else{
        cena = x;
    }
    cout << cena << endl;


    return 0;
}
