#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct User
{
    string Name;
    int age;
};

void PrintStruct(User Person)
{
    cout << Person.Name << endl;
    cout << Person.age << endl;
}

User get_record()
{
    User person;
    cout << "Name: ";
    cin >> person.Name;
    // cin.clear();
    // fflush(stdin);
    // getline(cin, person.Name);
    cout << "Age: ";
    cin >> person.age;
    // getline(cin, person.age);
    return person;
}

void AddRecord(vector<User> &Record, User new_record)
{
    Record.push_back(new_record);
    cout << "User record added successfully." << endl;
}

void FetchRecord(vector<User> &Record)
{
    int id;
    // User fetched_record;
    cout << "Please enter user-ID: ";
    cin >> id;
    PrintStruct(Record.at(id));
}

int main()
{
    vector<User> myRecord;
    cout << "User Sign-Up Application\n"
         << endl;
    bool is_running = true;
    do
    {
        int option;
        cout << "Please select an option:" << endl;
        cout << "1. Add Record" << endl;
        cout << "2. Fetch Record" << endl;
        cout << "3. Quit\n"
             << endl;

        cout << "Enter option: ";
        cin >> option;

        switch (option)
        {
        case 1:
        {
            User new_rec = get_record();
            AddRecord(myRecord, new_rec);
            break;
        }
        case 2:
        {
            FetchRecord(myRecord);
            break;
        }
        case 3:
        {
            is_running = false;
            break;
        }
        default:
        {
            cout << "Invalid Input." << endl;
            break;
        }
        }
    } while (is_running);
}