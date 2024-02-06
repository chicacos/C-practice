#include <iostream>
#include <cmath>
using namespace std;
void menu(){
    cout << "****Main  Menu****"<<endl;
    cout << "1. Check Balance"<<endl;
    cout << "2. Deposit Money"<<endl;
    cout << "3. Withdraw Money"<<endl;
    cout << "4. Exit"<<endl;
    cout << "******************"<<endl;
}
double deposite(double deposit, double balance){
    return balance+deposit;
}
double withdraww(double withdraw, double balance){
    return balance-withdraw;
}

int main(){
    int option;
    do{
        double balance=720.36;
        double deposit;
        double withdraw;
        menu();
        cout << "Choose an option(using numbers):";
        cin >> option;
        system("cls");
        switch (option) {
            case 1: cout<<"Your balance is "<<balance<<"$"<<endl; break;

            case 2: cout <<"How much money do you want to deposit:";
                cin>> deposit;
                cout <<"You have deposited "<<deposit<<"$ to your account"<<endl;
                cout<<"your balance now is "<<deposite(deposit, balance)<<"$."<< endl;
                break;

            case 3: cout<<"How much money do you want to withdraw:";
                cin>>withdraw;
                if(withdraw>balance)
                    cout<<"Invalid Amount!";
                else if(withdraw<=balance)
                    cout <<"You have withdrew "<<withdraw<<"$ from your account"<<endl;
                cout<<"your balance now is "<<withdraww(withdraw, balance)<<"$."<< endl;
                break;
        }
    } while (option!=4 && option<4);
}
