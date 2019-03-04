/*This program is a game in which you have to guess the number*/
#include <iostream>
#include <cstdlib>
#include <time.h>
#include <stdio.h>

using namespace std;

int number, guess, attempt=0;

int main()
{
    cout <<"Hello! I am thinking about number from 1 to 100."<<endl;

    srand(time(NULL));
    number = rand()%100+1;

    while(guess!=number)
    {
        ile_prob++;
        cout<<"Guess the number: (it is your "<<attempt<<" attempt):";
        cin>>guess;

        if(guess==number)
            cout<<"Congratulations! You won in "<<attempt<<" attempt."<<endl;

        else if(guess<number)
            cout<<"It is not enough."<<endl;

        else if(guess>number)
            cout<<"It is too much."<<endl;

    }

    getchar();
    return 0;
}
