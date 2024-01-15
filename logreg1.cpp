#include <iostream>
#include <string>
#include <vector>

using namespace std;
class User
{
private:
    string username, password;

public:
    User(string name, string pass)
    {
        username = name;
        password = pass;
    }
    string getUsername()
    {
        return username;
    }
    string getPassword()
    {
        return password;
    }
};
class UserManager
{
private:
    vector<User> users;

public:
    void RegisterUser()
    {
        string username, password;
        cout << "\t\tEnter user name : ";
        cin >> username;
        cout << "\t\tEnter password : ";
        cin >> password;

        User newUser(username, password);//we making newuser so that we make a new function that contains 
                                          //the both username and passsword that will be done pushback() 
                                          //later on at the new line of the code
        users.push_back(newUser);
        cout << "\t\t user register succesfuly .......... " << endl;
    }

    bool LoginUser(string name, string pass)
    {
        for (int i = 0; i < users.size(); i++)
        {
            if (users[i].getUsername() == name && users[i].getPassword() == pass)
            {
                cout << "\t\tlogin successfully..............." << endl;
                return true;
            }
        }
        cout << "\t\tinvalid username or password ....." << endl;
        return false;
    }
    void showUser()
    {
        cout << "\t\t ------Users List -----------" << endl;
        for (int i = 0; i < users.size(); i++)
        {
            cout << "\t\t " << users[i].getUsername() << endl;
        }
    }
    void searchUser(string username)
    {
        for (int i = 0; i < users.size(); i++)
        {
            if (users[i].getUsername() == username)
            {
                cout << "\t\tUser found " << endl;
            }
        }
    }
    void deleteUser(string username)
    {
        for (int i = 0; i < users.size(); i++)
        {
            if (users[i].getUsername() == username)
            {
                users.erase(users.begin() + i);
                cout << "\t\t User Removed Succesfully.........." << endl;
            }
        }
    }
};
int main()
{
    UserManager UserManage;
    int op;
    char choice;
    do
    {

        cout << "\n\n\t\t 1. register user " << endl;
        cout << "\t\t2. login" << endl;
        cout << "\t\t3. show user list " << endl;
        cout << "\t\t4. search user " << endl;
        cout << "\t\t5. delete user " << endl;
        cout << "\t\t6. exit " << endl;
        cout << "\t\tEnter Your Choice : ";
        cin >> op;
        switch (op)
        {
        case 1:
        {
            UserManage.RegisterUser();
            break;
        }
        case 2:
        {
            string username, password;
            cout << "\t\t Enter user : ";
            cin >> username;
            cout << "\t Enter password : ";
            cin >> password;
            UserManage.LoginUser(username, password);
        }
        case 3:
        {
            UserManage.showUser();
            break;
        }
        case 4:
        {
            string username;
            cout << "\t\t Enter User name : ";
            cin >> username;
            UserManage.searchUser(username);

            break;
        }
        case 5:
        {
            string username;
            cout << "\t\t Enter User Name : ";
            cin >> username;
            UserManage.deleteUser(username);
        }
        case 6:
        exit(1);
        }
        cout << "\t\t Do you want to continue [yes  /no ]? ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');
}