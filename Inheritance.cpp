/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
class Mammal
{
  protected:
  int legs;
  string gender;
  double weight;
  
  public:
  Mammal(int legs, string gender, double weight)
  {
      this->legs = legs;
      this->gender = gender;
      this->weight = weight;
      
  }
  
  void print_info()
  {
      cout << " Animal info:" << endl;
      cout << "Legs : " << this->legs << endl;
      cout << "Gender : " << this->gender << endl;
      cout << "Weight : " << this->weight << endl;
      cout << "\n";
  }
    
};

class Human :public Mammal
{
    private:
    int age;
    string name;
    
    public:
    Human(int legs, string gender, double weight,int age,string name) : Mammal(legs, gender, weight)
  {
      this->legs = legs;
      this->gender = gender;
      this->weight = weight;
      this->age = age;
      this->name = name;
  }
  
  void print_infoo()
  {
      cout << "As human info:" << endl;
      cout << "Name : " << this->name << endl;
      cout << "Age : " << this->age << endl;
      cout << "\n";
  }
};
    


int main()
{
   
   Human Aar(2, "Female", 50.5, 22, "Aarushi");
   Aar.print_infoo();
   Aar.print_info();
   
}
