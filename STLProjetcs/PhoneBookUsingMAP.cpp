/******************************************************************************

Phonebook C++ programs

*******************************************************************************/
#include <iostream>
#include <map>
using namespace std;

class Phonebook
{
  private:
  map<string, long int> book;
  long int number;
  string name;
  int n;
  
  public:
  
  Phonebook()
  {
      cout << "---------------AARUSHI TELECOM SERVICES---------------"<< endl;
      
  }
  void feed()
  {
      cout << "Enter name of contact: "<< endl;
      cin >> name;
      cout << "Enter phone number" << endl;
      cin >> number;
      book[name]  = number;
      cout << "\n";
  }
  void print(string nm)
  {
      cout << nm << " : " << book[nm] << endl;
      cout << "\n";
  }
  void printAll()
  {
      cout << "All contacts are -> " << endl;
      for(auto i = book.begin(); i != book.end(); i++ )
      {
          cout << i->first << " : " << i->second << endl;
      }
      cout << "\n";
  }
  void deleteMe()
  {
      cout<<"Enter contact to be deleted: "<<endl;
      cin >> name;
      if(book.find(name) == book.end())
      cout << "Contacted doesn't found";
      else
      {
      cout << "Your desired contact will be deleted: " << endl;
      book.erase(name);
      if(book.find(name) == book.end())
      cout << "Contacted deleted sir";
      }
      cout << "\n";
  }
  void search()
  {
      cout<<"Enter contact to be searched: "<<endl;
      cin >> name;
      if(book.find(name) != book.end())
      {
          cout << "Contact found \n";
          cout << name << " : " << book[name] << endl;
      }
      else
      {
          cout << "Currently no such contact exists" << endl;
      }
      cout << "\n";
  }
  void update()
  {
      cout<<"Enter contact to be updated: "<<endl;
      cin >> name;
      cout << "Enter updated no. of "<< name << endl;
      cin >> number;
      book[name] = number;
      cout << "Updated number: " << name << " ; " << number;
      cout << "\n";
  }
  
};

int main()
{
    Phonebook bk;
    int ch;
    while(1)
    {
        cout << "Welcome to phone operator services :)" << endl;
        cout << "We will be pleased to keep your contact book records" << endl;
        cout << "1. Add contact entry"<< endl;
        cout << "2. Print all contact entries"<< endl;
        cout << "3. Search for any particular contact"<< endl;
        cout << "4. Delete any contact entry"<< endl;
        cout << "5. Update number of contact entry"<< endl;
        cout << "6. Exit.... Thank you for opting our sevice"<< endl;
        cout << "Enter your choice "<<endl;
        cin >> ch;
        cout << "\n";
        switch(ch)
        {
            case 1: {
                bk.feed();
                break;
            }
            case 2: {
                bk.printAll();
                break;
            }
            case 3: {
                bk.search();
                break;
            }
            case 4: {
                bk.deleteMe();
                break;
            }
            case 5: {
                bk.update();
                break;
            }
            case 6: {
                  cout << "Thanks for visiting us "<<endl;
                  exit(0);
                  break;
            default:
            {     
                  continue;
            }
                 
            }
           
            
            
        }
    }
    

    return 0;
}

