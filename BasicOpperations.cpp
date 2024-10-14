
#include <stdio.h>
#include <iostream>
#include <cmath>
#include <cstdlib> 
using namespace std;

class Checker
{
    private:
    int num;
    
    public:
    
    Checker(int a)
    {
        num = a;
    }
    
    void prime_check()
    {
        bool p;
        int ch = 0;
        for(int i = 2; i <= num/2; i++)
        {
            if(num % i == 0)
            ch++;
        }
        
        if(ch > 0)
        cout << "Not a Prime Number" << endl;
        
        else
        cout << "Prime Number" << endl;
    }
    
    void fibanacci_check()
    {
        int t1 = 1, t2 = 2, nexterm;
        int n;
        cout << "Enter number of terms" << endl;
        cin >> n;
        cout << t1 << "," << t2 << "," ;
        for(int i = 0; i < n - 2; i++)
        {
            nexterm = t1 + t2;
            cout << nexterm << "," ; 
            t1 = t2;
            t2 = nexterm;
        }
        cout << "\n";
    }
    
    void factorial_check()
    {
        int n;
        cout << "Enter a number to calculate its factorial" << endl;
        cin >> n;
        int fact = 1;
        for(int i = n; i >0; i--)
        fact = fact* i;
        
        cout << "Factorial Number: " << fact << endl;
    }
    
    void armstrong()
    {
        int number, carry, n, result, sum;
        cout << "Enter a number " << endl;
        cin >> number;
        carry = number;
        n = 0;
        sum = 0;
        while(carry != 0)
        {
            carry = carry / 10;
            n = n + 1;
            
        }
        carry =  number;
        while(carry != 0)
        {
            result = carry % 10;
            sum = sum + pow(result, n);
            carry = carry / 10;
        }
        
        if(sum == number)
        cout << "Armstrong Number" << endl;
        else
        cout << "Not Armstrong number" << endl;
    }
    
    
};

int main()
{   int n;
    cout << "Enter number to check prime number" << endl;
    cin >> n;
    Checker pc(n);
    while(1)
    {
    cout << "Choose action :" << endl;
    cout <<"1. Prime Number"<<endl;
    cout <<"2. Fibonacci"<<endl;
    cout <<"3. Factorial_check"<<endl;
    cout <<"4. Armstrong Number"<<endl;
    int choice;
    
    cout << "Enter choice: "<< endl;
    cin >> choice;
    switch(choice)
    {
        case 1 : pc.prime_check(); break;
        case 2 : pc.fibanacci_check(); break;
        case 3 : pc.factorial_check(); break;
        case 4 : pc.armstrong(); break;
        default: exit(1);
        
    }
    cout << "Exited"
}
    
    
  

    return 0;
}
