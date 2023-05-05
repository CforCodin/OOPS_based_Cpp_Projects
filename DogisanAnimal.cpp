/******************************************************************************

Inheritance: Single

*******************************************************************************/
#include <iostream>

using namespace std;

class animal
{
    protected:
    int age;
    string petname;
    int legs;
    string type;
    
    public:
    void set_age(int age)
    {
        this -> age = age;
    }
    void set_name(string petname)
    {
        this -> petname = petname;
    }
    void set_legs(int legs)
    {
        this -> legs = legs;
    }
    void set_type(string type)
    {
        this -> type = type;
    }
    void feed()
    {
        cout<<"I consume food for nutrients" << endl;
    }
    void myname()
    {
        cout << "My name is " << petname << endl;
    }
    void description()
    {
        cout<<"I don't speak and have legs : "<< legs<<endl;
    }
    void mytype()
    {
        cout << "I am a "<<type <<endl;
    }
};

class dog : public animal
{
    private:
    int height;
    string breed;
    
    public:
    void set_height(int height)
    {
        this -> height = height;
    }
    void set_breed(string breed)
    {
        this -> breed = breed;
    }
    void activity()
    {
        cout << "I bark, play and protect your house" << endl;
    }
    void mybreed()
    {
        cout << "My breed is: " << breed << endl;
    }
    
    
};

int main()
{
    dog mydog;
    mydog.set_age(5);
    mydog.set_legs(4);
    mydog.set_breed("bulldog");
    mydog.set_name("Buzzo");
    mydog.set_type("mammal");
    mydog.set_height(65);
    mydog.myname();
    mydog.activity();
    mydog.mybreed();
    mydog.mytype();
    mydog.feed();
    mydog.description();
    
    

    return 0;
}

