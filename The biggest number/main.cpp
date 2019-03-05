#include <iostream>

using namespace std;
//Znajdz najwieksza liczbe
int a,b,c,m;

int main()
{
    cout << "Podaj trzy liczby rozdzielone spacja: " << endl;
    cin >> a >> b >> c;
    //m to pierwsza liczba od lewej
    m=a;
    if (b>m) m=b;
    if (c>m) m=c;

    cout << "Najwieksza liczba to " << m <<endl;

    return 0;
}
