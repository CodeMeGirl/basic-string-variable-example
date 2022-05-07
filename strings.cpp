#include <iostream>
    using std::cin; // DO NOT USE CIN TO EXTRACT A STRING
    using std::cout;
    using std::endl;

#include <string> // string library
    using std::string;

int main()
{
    // string variable
    // syntax of the program 
    string name   = "Amanda Cummings";
    string number = "5";

    cout << name << endl;
    cout << number << endl;

    string askUserName2;
    // string literal - << stream insertion operator
    cout << "What is your name?: " << endl;
    getline(cin, askUserName2);
    cout << "Your name is: " << askUserName2 << endl;
    // getline ( cin >> askUserName2 ) - stream extraction operator

    return 0;
}