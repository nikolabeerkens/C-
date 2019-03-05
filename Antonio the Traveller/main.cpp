#include <iostream>
#include <conio.h>
#include <cstdio>

bool rytual( int x, int & k, int & l ) {
    while( x > 1 ) {
        if(( k + l ) == 15 ) {
            return false;
        }
        if( x % 2 == 0 ) {
            k++;
            x /= 2;
        }
        else {
            x = 3 * x + 1;
            l++;
        }
    }
    if( x == 1 ) {
        return true;
    }
}

int main() {
    using namespace std;
    int x;
    while( x != 0 ) {
        int kwiaty = 0, liscie = 0;
        cin >> x;
        if( rytual( x, kwiaty, liscie ) == true ) {
            cout << "Rytual konczy sie po najwyzej 15 krokach." << endl <<"Zuzytych kwiatow: " << kwiaty << endl << "Zuzytych lisci: " << liscie << endl;
        }
        else if( x != 0 ) {
            cout << "Rytual nie konczy sie po najwyzej 15 krokach." << endl;
        }
    }
    return 0;
}
