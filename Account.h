#include "library.h"

struct Account
{
private:
	string name;
	string surname;
	string email;
	string password;
	bool isAdmin;
public:
	Account() = default;
	Account(string login, string password, bool isAdmin)
	{
		this->name = name;
		this->surname = surname;
		this->email = email;
		this->password = password;
		this->isAdmin = isAdmin;
	}
	string getName()
	{
		return this->name;
	}
	string getSurname()
	{
		return this->surname;
	}
	string getEmail()
	{
		return this->email;
	}
	string getPassword()
	{
		return this->password;
	}
	bool getIsAdmin()
	{
		return this->isAdmin;
	}
	void setName(string name)
	{
		this->name = name;
	}
	void setSurname(string surname)
	{
		this->surname = surname;
	}
	void setEmail(string email)
	{
		this->email = email;
	}
	void setPassword(string password)
	{
		this->password = password;
	}
	void setIsAdmin(bool isAdmin)
	{
		this->isAdmin = isAdmin;
	}
	void about()
	{
		println("Name: " << this->name);
		println("Surname: " << this->surname);
		println("Email: " << this->email);
		println("Password: " << this->password);
		println("Is admin: " << this->isAdmin);
	}
};