#include <iostream>
#include <stdio.h>
using namespace std;

class Animal
{
    private:
    string name;
    int age;
    float weight;
    float height;
    
    public:
    Animal()
    {
        name = "";
        age = 0;
        weight = 0.0;
        height = 0.0;
    }
    
    Animal(string name, int age, float weight, float height)
    {
        this->name = name;
        this->age = age;
        this->weight = weight;
        this->height = height;
    }
    
    Animal (const Animal &anim)
    {
        this->name   = anim.name;
        this->age    = anim.age;
        this->weight = anim.weight;
        this->height = anim.weight;
    }
    string get_name()
    {
        return this->name;
    }
    int get_age()
    {
        return this->age;
    }
    float get_weight()
    {
        return this->weight;
    }
    float get_height()
    {
        return this->height;
    }
    

};
int main()
{
    Animal abc;
    cout << abc.get_name();
    Animal xyz("Priya", 22, 50.0, 154.0);
    Animal pqr = xyz;;
    cout << "Name: " << pqr.get_name() << " \nAge: " << pqr.get_age() << "\nHeight: " << pqr.get_height();
    return 0;
}
