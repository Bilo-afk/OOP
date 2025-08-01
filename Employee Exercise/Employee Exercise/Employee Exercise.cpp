#include <iostream>
#include <string>

using   namespace std;

class clsEmployee
{
private:


    int _ID;
    string _FirstName;
    string _LastName;
    string _Title;
    string _Email;
    string _Phone;
    string _Department;
    string _Salary;


public:
    clsEmployee(int ID, string FirstName, string LastName, string Title, string Email, string Phone, string Department, string Salary)
    {
        _ID = ID;
		_FirstName = FirstName;
		_LastName = LastName;
		_Title = Title;
		_Email = Email;
		_Phone = Phone;
		_Department = Department;
		_Salary = Salary;
    }
    int ID()
    {
        return _ID;
    }

    void setFirstName(string FirstName)
	{
		_FirstName = FirstName;
	}

    string GetFirstName()
        {
		return _FirstName;
	}

    void setLastName(string LastName)
	{
		_LastName = LastName;
	}

	string GetLastName()
		{
		return _LastName;
	}

	void setTitle(string Title)
	{
		_Title = Title;
	}

	string GetTitle()
		{
		return _Title;
	}

	void setEmail(string Email)
	{
		_Email = Email;
	}

	string GetEmail()
		{
		return _Email;
	}

	void setPhone(string Phone)
	{
		_Phone = Phone;
	}

	string GetPhone()
		{
		return _Phone;
	}

	void setDepartment(string Department)
	{
		_Department = Department;
	}

	string GetDepartment()
		{
		return _Department;
	}

	void setSalary(string Salary)
	{
		_Salary = Salary;
	}

	string GetSalary()
		{
		return _Salary;
	}

	string FullName()
	{
		return _FirstName + " " + _LastName;
	}
	void Print()
	{
		cout << "\nInfo:\n";
		cout << "________________________\n";
		cout << "ID          : " << ID() << endl;
		cout << "First Name  : " << _FirstName << endl;
		cout << "Last Name   : " << _LastName << endl;
		cout << "Full Name   : " << FullName() << endl;
		cout << "Email       : " << _Email<< endl;
		cout << "Phone       : " << _Phone << endl;
		cout << "Salary      : " << _Salary << endl;
		cout << "Title       : " << _Title << endl;
		cout << "Department  : " << _Department << endl;
		cout << "________________________\n";
	}
	void SendEmail(string Subject, string Body)
	{
		cout << "\nThe following message sent successfully to email : " << _Email << endl;
		cout << "Subject :" << Subject << endl;
		cout << "Body :" << Body << endl;
	}

    void SendSMS(string Message)
	{
		cout << "\nThe following message sent successfully to phone : " << _Phone << endl;
		cout << "Message :" << Message << endl;
	}

};

int main()
{
	clsEmployee Employee1(10 , "BELAL" , "ALHAMID" , "TURKEY,SAKARYA" , "bilo123@gmail.com" , "05555555555" , "Computer Enginer" , "10000" );
	Employee1.Print();

	Employee1.SendEmail("Welcome to the company", "welcome to our company.We are glad to have you on board.");
	Employee1.SendSMS("Welcome to the company, we are glad to have you on board.");

	system("pause");
		return 0;

    
}

