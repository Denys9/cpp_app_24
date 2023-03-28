#include "library.h"
#include "Account.h"

void registerAccount() {
    string name, surname, email, password;

    cout << "��'�: ";
    cin >> name;
    cout << "�������: ";
    cin >> surname;
    cout << "Email: ";
    cin >> email;
    cout << "������: ";
    cin >> password;

    // ��������� ����� ��'��� ����� Account
    Account newAccount(name, surname, email, password);

    // �������� ��� ����������� � ����
    newAccount.saveToFile();

    cout << "������ �������� ������!" << endl;
}

int main() {
    registerAccount();
    return 0;
}
