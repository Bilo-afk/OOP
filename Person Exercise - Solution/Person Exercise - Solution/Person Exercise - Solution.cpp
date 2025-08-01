#include <iostream>

using namespace std;

class clsPerson
{
private:
    int _ID;
    string _FerstName;
    string _LastName;
    string _Email;
    string _Phone;

public:
    clsPerson(int ID, string FirstName, string LastName, string Email, string Phone)
    {
        _ID = ID;
        _FerstName = FirstName;
        _LastName = LastName;
        _Email = Email;
        _Phone = Phone;
    }

	//Read Only Property
    int ID()
    {
        return _ID;
    }

	//Property Set
    void setFirstName(string FirstName)
	{
		_FerstName = FirstName;
	}

	//Property Get
    string GetFirstName()
	{
		return _FerstName;
	}

	//Property Set
    void setLastName(string LastName)
	{
		_LastName = LastName;
	}

	//Property Get
	string GetLastName()
	{
		return _LastName;
	}

	//Property Set
	void setEmail(string Email)
	{
		_Email = Email;
	}

	//Property Get
	string GetEmail()
	{
		return _Email;
	}

	//Property Set
	void setPhone(string Phone)
	{
		_Phone = Phone;
	}

	//Property Get
	string GetPhone()
	{
		return _Phone;
	}

	string FullName()
	{
		return _FerstName + " " + _LastName;
	}

	void Present()
	{

		cout <<"\nInfo      :";
		cout <<"\n-----------------------------------";
		cout << "\nID        : " << _ID << endl;
		cout << "\nFirst Name: " << _FerstName << endl;
		cout << "\nLast Name : " << _LastName << endl;
		cout << "\nFull Name : " << FullName() << endl;
		cout << "\nEmail     : " << _Email << endl;
		cout << "\nPhone     : " << _Phone << endl;
		cout << "\n-----------------------------------";
		cout << endl;
	}

	void sendEmail(string Subject, string Body)
	{
		cout << "\nThe following message sent successfully to email: " << _Email << endl;
		cout << "\nSubject: " << Subject << endl;
		cout << "\nBody   : " << Body << endl;
		
	}

	void sendSMS(string TextMessage)
	{
		cout << "\nThe following SMS sent successfully to phone: " << _Phone << endl;
		cout << "\nMessage: " << TextMessage << endl;
	}
};


int main()
{
    
	clsPerson Person1(10, "BELAL", "ALHAMID", "bilo234@gmail.com", "5058058366");
	Person1.Present();

	Person1.sendEmail("Welcome", "Hello ");
	Person1.sendSMS("Hello, this is a test SMS!");

	system("pause");
	return 0;

}

