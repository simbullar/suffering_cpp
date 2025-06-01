#include <iostream>
#include <fstream>
using namespace std;


class User{
    public:
        string name;
        string password;
    void register_acc()
    {
        // taking user inputs
        cout << "Choose a username: "; cin >> name;
        cout << "Choose a password: "; cin >> password;
        // writing to file
        fstream userstxt("users.txt", ios::app); userstxt << name << "::" << password << "\n"; userstxt.close();
    }
    void output_formatted()
    {
        cout << "Username: " << name << "\n";
        cout << "Password: " << password << "\n" << "\n";
    }
};

string readnparse_userfile() {
    ifstream users("users.txt");
    string x;
    string content((istreambuf_iterator<char>(users)),(istreambuf_iterator<char>()));
    users.close();
    return content;
}

int main() {
    cout << "Register to view list... \n";
    User me; me.register_acc();
    cout << readnparse_userfile();
  return 0;
}
