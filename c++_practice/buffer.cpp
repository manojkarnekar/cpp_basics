#include <iostream>
 
// for <streamsize>
#include <ios>
 
// for numeric_limits
#include <limits>
using namespace std;
 
int main()
{
    int a;
    char str[80];
 
    // Enter input from user
    // - 4 for example
    cin >> a;
 
    // discards the input buffer
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
 
    // Get input from user -
    // GeeksforGeeks for example
    // cin.getline(str, 80);
    cin >> str ;
    // Prints 4
    cout << a << endl;
 
    // Printing string : This
    // will print string now
    cout << str << endl;
 
    return 0;
}