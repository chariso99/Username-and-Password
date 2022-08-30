#include <iostream>
#include <string>
using namespace std;

int main() {
    string Username;
    string Password;
    cout << "Create a Username : ";
    cin >> Username;

    cout << "Create a Password : ";
    cin >> Password;
    cout << endl;

    cout << "Server has been received your data." << endl;
    int User, Pass;
    User = Username.length();// to count how many character in Username
    Pass = Password.length();// to count how many character in Password
   
    string Merge = Username + Password;//merge Username and Password
    cout << "What you see ==> ";
    cout << Merge << endl;
    cout << "What server see ==> ";
    cout << User << Username << Pass << Password << endl;
    return 0;
}