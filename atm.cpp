#include <cstdlib>
#include <iostream>

using namespace std;

void showMenu() {
  cout << "**********MENU***********" << endl;
  cout << "1. Check Balance" << endl;
  cout << "2. Deposit" << endl;
  cout << "3. Withdraw" << endl;
  cout << "4. Exit" << endl;
  cout << "************************" << endl;
}

int main() {
  int option;
  double balance = 500;

  do {
    showMenu();
    cout << "Option: ";
    cin >> option;
    system("clear");

    switch (option) {
    case 1:
      cout << "Balance is " << balance << "$" << endl;
      break;
    case 2:
      cout << "Deposit Ammount: ";
      double depositAmmount;
      cin >> depositAmmount;
      balance += depositAmmount;
      break;
    case 3:
      cout << "Withdraw Ammount: ";
      double withdrawAmmount;
      cin >> withdrawAmmount;
      if (withdrawAmmount <= balance) {
        balance -= withdrawAmmount;
      } else {
        cout << "Not Enough Money!" << endl;
        break;
      }
    case 4:
      exit(1);
    }
  } while (option != 4);

  system("pause>0");
}