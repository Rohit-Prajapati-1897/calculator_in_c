#include<iostream>
#include<stdlib.h>
using namespace std;

void addition(int num1,int num2)
{
    system("cls");
    cout << num1+num2 << endl;

}

void subtraction(int num1,int num2)
{
    system("cls");
    cout << num1-num2 << endl;
}

void multiplication(int num1,int num2)
{
    system("cls");
    cout << num1*num2 << endl;
}

void division(int num1,int num2)
{
    system("cls");
    cout << float(num1)/num2 << endl;
}
int main()
{
    while(true)
    {
        system("cls");
        int choice;
        int num1, num2;
        cout << "Enter two number: ";
        cin >> num1 >> num2;
        cout << "Choose the operation: " << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Exit"<< endl;
        cout << endl;
        cout << "Enter your choice here: ";
        cin >> choice;
        switch(choice)
        {
            case 1:
                addition(num1,num2);
                break;
            case 2:
                subtraction(num1,num2);
                break;
            case 3:
                multiplication(num1,num2);
                break;
            case 4:
                division(num1,num2);
                break;
            default:
                cout << "Error";
        }
        if(choice==5)
        {
            break;
        }
    }
    return 0;
}
