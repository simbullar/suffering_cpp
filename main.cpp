#include <iostream>
#include <fstream>
using namespace std;


// type variableName = value;
// open - fstream str("filename.ext", mode);
class User{
    public:
        string name;
    private:
        string password;
    public: void register_acc()
    {
        // taking user inputs
        cout << "Register:" << "\n";
        cout << "Choose a username: "; cin >> name; cout << "\n";
        cout << "Choose a password: "; cin >> password; cout << "\n";
        // writing to file
        fstream userstxt("users.txt", ios::app); userstxt << name << "::" << password; userstxt.close();
    }
};
int main() {
    User me;
    me.register_acc();

  return 0;
}
