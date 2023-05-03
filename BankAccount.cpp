/******************************************************************************

Constructor based bank account

*******************************************************************************/
#include <iostream>
#include<string.h>

#include <bits/stdc++.h>

using namespace std;


class BankAcc
{
private:
  int id;
  string account_name;
  int cash;
  string type;

public:
    BankAcc (int id, string account_name, int cash, string type)	//parameterized constructor
  {
    this->id = id;
    this->account_name = account_name;
    this->cash = cash;
    this->type = type;
  }

  int get_id ()
  {
    return id;
  }

  string get_accountname ()
  {
    return account_name;
  }

  int get_cash ()
  {
    return cash;
  }

  string get_type ()
  {
    return type;
  }
  
  void set_cash(int cash)
  {
      this -> cash = cash;
  }

  void cashdeposit ()
  {
    int addon;
    cout << "Enter amount to be deposited" << endl;
    cin >> addon;
    cash = cash + addon;
    cout << "Cash Deposited" << endl;
  }

  void cashwithdraw ()
  {
    int addon;
    cout << "Enter amount to be withdrwan" << endl;
    cin >> addon;
    cash = cash - addon;
    cout << "Cash withdrawn" << endl;
  }

  void account_details ()
  {
    cout << "Account holder name : " << account_name << endl;
    cout << "ID of Account : " << id << endl;
    cout << "Total cash in your bank account : " << cash << endl;
    cout << "Type of bank account : " << type << endl;
  }
  
  ~BankAcc()
  {
      cout<< "Account deleted" << endl;
  }

};

int
main ()
{
  int id, cash;
  string type, account_name;
  cout << "Enter id: " << endl;
  cin >> id;
  cout << "Enter account holder name: " << endl;
  cin >> account_name;
  cout << "Enter cash: " << endl;
  cin >> cash;
  cout << "Enter type of : " << endl;
  cin >> type;
  cout << "\n\n";
  BankAcc Acc1 (id, account_name, cash, type);
  Acc1.account_details ();
  cout << "\n\n";
  cout << "Enter your choice" << endl;
  int ch;
  cout <<
    "1. Get id \n2. Get account holder name \n3. Get type of bank account \n4. Add cash \n5. Withdraw Cash \n6. Delete Bank Account"
    << endl;
  cin >> ch;
  switch (ch)
    {
    case 1:
      {
	cout << "I.d is " << Acc1.get_id () << endl;
	break;
      }

    case 2:
      {
	cout << "Account holder name is " << Acc1.get_accountname () << endl;
	break;
      }

    case 3:
      {
	cout << "Type of bank account is " << Acc1.get_type () << endl;
	break;
      }

    case 4:
      {
	Acc1.cashdeposit ();
	break;
      }

    case 5:
      {
	Acc1.cashwithdraw ();
	break;
      }
      
      case 6:
      {
          cout << "Your bank account is deleted and money withdrawn" << endl;
          cout << "Withdrwan amount is: " << Acc1.get_cash() << endl;
          Acc1.set_cash(0);
          Acc1.~BankAcc() ;
          
      }
    }

  //copy constructor
/*
  BankAcc Acc2 (Acc1);
  cout << sizeof (Acc1) << endl;
  cout << sizeof (Acc2) << endl;
  Acc2.account_details(); */
  return 0;
}
