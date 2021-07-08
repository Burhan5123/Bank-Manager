#include <iostream>
#include <string>
#include<fstream>
using namespace std;



int balance = 0;
int account_number;
string name;

void create_account() {

    ofstream myfile("Account_info.txt");
  
    cout << "enter your account number" << endl;
    cin >> account_number;
    cout << "enter your name" << endl;
    cin >> name;
    cout << "enter your balance" << endl;
    cin >> balance; 
    myfile << "Account number is..." << account_number << endl;
    myfile << "Name of the user is..." << name << endl;
    myfile << "User's balance is..." << balance << endl;


}

void balance_enquiry() {  
    if (balance == 0) {
        cout << "You have no money on your account..." << endl;
    }
    else {
        cout << "Account Balance is..." << balance << endl;
    }

}

void deposit() {
    cout << "Enter the amount" << endl;
    int amount;
    cin >> amount;
    balance = balance + amount;

}


void draw() {
    cout << "Enter the amount" << endl;
    int amount;
    cin >> amount;
    balance = balance - amount;
}




void show_account() {
    cout << "customer's account number is..." << account_number << endl;
    cout << "Customer's name is..." << name << endl;
}


int main() {
    bool mybool = true;
    while (mybool==true) {
        cout << "= = = = = = = = = = = =" << endl;
        cout << "BANK MANAGEMENT SYSTEM" << endl;
        cout << "= = = = = = = = = = = =" << endl;
        cout << ":: MAIN MENU ::" << endl << endl;

        cout << "1. NEW ACCOUNT" << endl;
        cout << "2. BALANCE ENQUIRY" << endl;
        cout << "3. DEPOSIT AMOUNT" << endl;
        cout << "4. WITHDRAW AMOUNT" << endl;
        cout << "5. ALL ACCOUNT HOLDER'S LIST" << endl;
        cout << "6. CLOSE AN ACCOUNT" << endl;
        cout << "7. MODIFY AN ACCOUNT" << endl;
        cout << "8. EXIT" << endl << endl;

        cout << "Select Your Option (1-8)" << endl;
        int choice;
        cin >> choice;


        switch (choice) {
        case 1:
            create_account();
            break;

        case 2:
            balance_enquiry();
            break;

        case 3:
            deposit();
            break;

        case 4:
            draw();
            break;

        case 5:
            show_account();
            break;

        case 8:
            mybool = false; 
            cout << "THANK YOU FOR VISITING THE BANK MANAGER" << endl;
                break;
            

        }
    }
}