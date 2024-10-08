using namespace std;
#include <iostream>
class Hero
{
    private:
    int private_info;
    
    protected:
    int protected_info;
    
    public:
    Hero()
    {
        private_info = 34;
        protected_info = 43;
    }
    
    friend class Heroine;
};

class Heroine
{
    public:
    void print_info(Hero &h)
    {
        cout << "private_info: " << h.private_info << endl;
        cout << "protected_info: " << h.protected_info << endl;
    }
};




int main()
{
    Hero kbc;
    Heroine abc;
    abc.print_info(kbc);

    return 0;
}
