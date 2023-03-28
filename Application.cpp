#include "library.h"
#include "Account.h"

void registerAccount() {
    string name, surname, email, password;

    cout << "Ім'я: ";
    cin >> name;
    cout << "Прізвище: ";
    cin >> surname;
    cout << "Email: ";
    cin >> email;
    cout << "Пароль: ";
    cin >> password;

    // Створюємо новий об'єкт класу Account
    Account newAccount(name, surname, email, password);

    // Зберігаємо дані користувача в файл
    newAccount.saveToFile();

    cout << "Акаунт створено успішно!" << endl;
}

int main() {
    registerAccount();
    return 0;
}
