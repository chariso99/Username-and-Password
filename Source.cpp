#include <iostream>
#include <string>
using namespace std;

int main() {
    string Username;
    string Password;
    cout << "Create a Username : ";
    getline(cin,Username);//user Username input

    cout << "Create a Password : ";
    getline(cin, Password);//user password input
    cout << endl;

    cout << "Server has been received your data.\n";
    //to turn string into integer
    int User, Pass;
    User = Username.length();// to count how many character in Username
    Pass = Password.length();// to count how many character in Password
   
    //merge Username + Usename.Length and Password + Password.length
    string Merge = to_string(User) + Username + to_string(Pass) + Password;
    cout << "Server Received\n";
    cout << Merge;
    return 0;
}