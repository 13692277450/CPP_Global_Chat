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
int isExist(Addressbooks* abs, string name) {
    for (int i = 0; i < abs->m_Size; i++) {
        if (abs->personArray[i].m_Name == name) {
            return 1;
        }
    }
    return 0;
}
void addPerson(Addressbooks* abs) {
    if (abs->m_Size == MAX) {
        cout << "The address book is full." << endl;
        return;
    }
    struct Person personTemp;
    cout << "Enter the name: ";
    cin >> personTemp.m_Name;
    cout << "Enter the sex (1 for male, 0 for female): ";
    cin >> personTemp.m_Sex;
    cout << "Enter the age: ";
    cin >> personTemp.m_Age;
    cout << "Enter the address: ";
    cin >> personTemp.m_Addr;
    cout << "Enter the phone number: ";
    cin >> personTemp.m_Phone;
    abs->personArray[abs->m_Size] = personTemp;
    abs->m_Size++;
    cout << "Person added successfully." << endl;
    system("pause");
    system("cls");
}
void showPerson(Addressbooks* abs) {
    string showName;
    cout << "Pls enter person name: " << endl;
    cin >> showName;
    if (isExist(abs, showName)) {


        for (int i = 0; i < abs->m_Size; i++) {
            cout << "Name: " << abs->personArray[i].m_Name << endl;
            cout << "Sex: " << ((abs->personArray[i].m_Sex == 1) ? "Male" : "Female") << endl;
            cout << "Age: " << abs->personArray[i].m_Age << endl;
            cout << "Address: " << abs->personArray[i].m_Addr << endl;
            cout << "Phone: " << abs->personArray[i].m_Phone << endl;
            cout << "-----------------------------" << endl;
        }
    } else {
        cout << "Person not found." << endl;
    }
}

void editPerson(Addressbooks* abs) {
    string editName;
    cout << "Enter the name of the person you want to delete: ";
    cin >> editName;
    if (isExist(abs, editName) == 1) {
        for (int i = 0; i < abs->m_Size - 1; i++) {
            struct Person personTemp;
            cout << "Enter the name: ";
            cin >> personTemp.m_Name;
            cout << "Enter the sex (1 for male, 0 for female): ";
            cin >> personTemp.m_Sex;
            cout << "Enter the age: ";
            cin >> personTemp.m_Age;
            cout << "Enter the address: ";
            cin >> personTemp.m_Addr;
            cout << "Enter the phone number: ";
            cin >> personTemp.m_Phone;
            abs->personArray[abs->m_Size] = personTemp;
            abs->m_Size++;
            cout << "Person added successfully." << endl;
            system("pause");
            system("cls");
        }
        return;
    }
    else {
        cout << "Person not found, pls double check name." << endl;
        return;
    }
};

void deletePerson(Addressbooks* abs) {
    string delName;
    cout << "Enter the name of the person you want to delete: ";
    cin >> delName;
    if (isExist(abs, delName) == 1) {
        for (int i =0; i < abs->m_Size - 1 ; i++) {
            abs->personArray[i] = abs->personArray[i + 1];
            cout << "Person deleted successfully." << endl;
        }
        return;
    }
    else {
        cout << "Person not found, pls double check name." << endl;
        return;
    }
};

void listAllPerson(Addressbooks* abs) {
    for (int i = 0; i < abs->m_Size; i++) {
        cout << "Name: " << abs->personArray[i].m_Name << endl;
        cout << "Sex: " << ((abs->personArray[i].m_Sex == 1) ? "Male" : "Female") << endl;
        cout << "Age: " << abs->personArray[i].m_Age << endl;
        cout << "Address: " << abs->personArray[i].m_Addr << endl;
        cout << "Phone: " << abs->personArray[i].m_Phone << endl;
        cout << "-----------------------------" << endl;
    }
}
void clearAllPerson(Addressbooks* abs) {
    abs->m_Size = 0;
}

int main2() {
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
            editPerson(&abs);
        case 3:
            deletePerson(&abs);
        case 4:
            showPerson(&abs);
        case 5:
            listAllPerson(&abs);
        case 6:
            clearAllPerson(&abs);
        case 0:
        break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }

        system("pause");

    }
}