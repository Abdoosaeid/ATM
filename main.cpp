/*
* Author :  #Abdoo__said#
*/
#include <iostream>
#define el   '\n'
using namespace std;
//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//|
double balance =1000;
int deposit;
int withDraw;
int passWord;
int choice ;
void show()
{
    cout<<"*****Menu*****"<<el;
    cout<<"1:balance"<<el;
    cout<<"2:WithDraw"<<el;
    cout<<"3:deposit"<<el;
    cout<<"4:Exit"<<el;
    cout<<"**************"<<el;
}
void process()
{

    cout << "please enter your password" <<el;
    cin >> passWord;
    if (passWord == 1234) {
        do {
            cout << "please enter your choice: ";
            cin >> choice;
            switch (choice) {
                case 1:
                {
                    cout << "Your balance is " << balance << el;
                    break;
                }
                case 2:
                {
                    cout << "!Your balance is " << balance << el;
                    cout << "Enter your amount " << el;
                    cin >> withDraw;
                    if (withDraw > balance) {
                        cout << "sorry You can't withdraw this Amount" << el;
                    } else {
                        balance -= withDraw;
                    }
                    break;
                }
                case 3:
                {
                    cout << "Your current balance is " << balance << el;
                    cout << "Enter Your deposite money  : ";
                    cin >> deposit;
                    balance += deposit;
                    cout << "Your New Balance is " << balance << el;
                }
                case 4:
                {
                    cout << "Thank You" << el;
                    break;
                }
            }
        }while (choice < 4 );
    }
    else {
        cout<<"Password is incorrect ,do you want to try again ? enter [Y]>>YES enter [N]>>NO"<<el;
        char ch;cin>>ch;
        if(ch=='Y'){cout<<"Enter the password"<<el;cin>>passWord;}
        else {cout<<"Thank you"<<el;}
    }
}
int main() {
   show();
   process();

}
