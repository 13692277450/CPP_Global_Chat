#include <iostream>
#include <string>
using namespace std;
#define MAX 1000

struct Person {
    string m_Name;
    int m_Sex;
    int m_Age;
    string m_Addr;
    string m_Phone;
};


void showMenu() {
    cout << "******  1. Add a new contact" << endl;
    cout << "******  2. Edit an existing contact" << endl;
    cout << "******  3. Delete an existing contact" << endl;
    cout << "******  4. Search for a contact" << endl;
    cout << "******  5. List all contacts" << endl;
    cout << "******  6. Clear all contacts" << endl;
	cout << "******  0. Exit" << endl;
	cout << "******  ---------------------------------" << endl;
    cout << "******  Enter your choice: ";
}             

struct Addressbooks {
    struct Person personArray[MAX];

    int m_Size;
};

void addPerson(Addressbooks* abs) {
    if (abs->m_Size == MAX) {
        cout << "The address book is full." << endl;
        return;
    }
    struct Person personTemp;
    cin >> personTemp.m_Name;
    cin >> personTemp.m_Sex;
    cin >> personTemp.m_Age;
    cin >> personTemp.m_Addr;
    cin >> personTemp.m_Phone;
    abs->personArray[abs->m_Size] = personTemp;
    abs->m_Size++;
}
int main() {
    struct Addressbooks abs;
    abs.m_Size = 0;
    int select = 0;
    while (true) {
        showMenu();
        cin >> select;
        switch (select) {
        case 1:
            addPerson(&abs); //address transform message.
        case 2:
            cout << "Edit an existing contact" << endl;
        case 3:
            cout << "Delete an existing contact" << endl;
        case 4:
            cout << "Search for a contact" << endl;
        case 5:
            cout << "List all contacts" << endl;
        case 6:
            cout << "Clear all contacts" << endl;
        case 0:
            cout << "Exit" << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }

        system("pause");

    }
}