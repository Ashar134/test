#include<iostream>
using namespace std;

string greeting()
{
    return "Hello!";
}

int main()
{
    
    string message = greeting();

    cout << message << endl;
    
    return 0;
}
