using namespace std;
#include <iostream>

struct Users
{
    int id;
    string name;
    int age;
};




int main()
{
    Users user[3] = {
        {1, "Aarushi", 22},
        {2, "Nancy", 20},
        {3, "Shubh", 23}
    };
    
    for(int i = 0; i < 3; i++)
    {
        cout << "User ID: " << user[i].id << " Name: " << user[i].name << " Age: " << user[i].age << endl;
    }

    return 0;
}
