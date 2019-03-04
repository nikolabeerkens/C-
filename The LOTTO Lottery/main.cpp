/* This program is a simulation of the lottery machine*/
#include <iostream>
#include <time.h>
#include <windows.h>

using namespace std;

int number;

int main()
{
    cout << "  LOTTO" << endl;
    cout << "-----------" <<endl;
    cout<<endl;
    cout << "Welcome to the lottery! The draw will start in 3 seconds." << endl;

    Sleep(3000);
    srand(time(NULL));

    for(int i=1; i<=6; i++)
    {
    number=rand()%49+1;
    Sleep(1000);
    cout<<number<<"\a"<<endl;
    }

return 0;

}
