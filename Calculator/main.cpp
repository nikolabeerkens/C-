/*This program is a simulation of a simple calculator*/
#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <conio.h>

using namespace std;

float x,y;
char choice;

int main()
{
    for(;;)
    {
    cout << "Input the first number: ";
    cin>>x;
    cout<<"Input the second number: ";
    cin>>y;

    cout<<endl;
    cout<< "MAIN MENU"<<endl;
    cout<< "-----------------"<<endl;
    cout<<"1. Addition"<<endl;
    cout<<"2. Subtraction"<<endl;
    cout<<"3. Multiplication" <<endl;
    cout<<"4. Division"<<endl;
    cout<<"5. Exit"<<endl;


    cout<<endl;
    choice=getch();

    switch(choice)
    {
        case '1':
            cout<<"Sum = "<<x+y;
    break;
        case '2':
            cout<<"Difference = "<<x-y;
    break;
        case '3':
            cout<<"Product = "<<x*y;
    break;
        case '4':
            if(y==0) cout<<"Do not divide by zero!";
            else cout<<"Quotient  = "<<x/y;
    break;
        case '5':
            exit(0);
        default: cout<<"This option is not on the menu.";
    }
    getchar(); getchar();
    system("cls");
    }
    return 0;
}
