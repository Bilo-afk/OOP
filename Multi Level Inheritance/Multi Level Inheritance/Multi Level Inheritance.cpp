#include <iostream>
#include <string>


using namespace std;

// Base class for Person
class clsPerson
{
private:

	int _ID;
	string _FirstName;
	string _LastName;
	string _Email;
	string _Phone;

public:

	clsPerson(int ID, string FirstName, string LastName, string Email, string Phone)
	{
		_ID = ID;
		_FirstName = FirstName;
		_LastName = LastName;
		_Email = Email;
		_Phone = Phone;
	}

	int ID()
	{
		return _ID;
	}

	void SetFirstName(string FirstName)
	{
		_FirstName = FirstName;
	}

	string GetFirstName()
	{
		return _FirstName;
	}

	void SetLastName(string LastName)
	{
		_LastName = LastName;
	}

	string LastName()
	{
		return _LastName;
	}

	void SetEmail(string Email)
	{
		_Email = Email;
	}

	string Email()
	{
		return _Email;
	}

	void SetPhone(string Phone)
	{
		_Phone = Phone;
	}

	string Phone()
	{
		return _Phone;
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
		cout << "First Name  : " << GetFirstName() << endl;
		cout << "Last Name   : " << LastName() << endl;
		cout << "Full Name   : " << FullName() << endl;
		cout << "Email       : " << Email() << endl;
		cout << "Phone       : " << Phone() << endl;
		cout << "________________________\n";
	}

	void SendEmail(string Subject, string Body)
	{
		cout << "\nThe following message sent successfully to email : " << Email() << endl;
		cout << "Subject :" << Subject << endl;
		cout << "Body :" << Body << endl;
	}

	void SendSMS(string Body)
	{
		cout << "\nThe following SMS sent successfully to email : " << Phone() << endl;
		cout << Body << endl;
	}
};


// Derived class for Employee
class clsEmployee :public clsPerson
{

private:
	float _Salary;
	string _Title;
	string _Department;

public:

	clsEmployee(int ID, string FirstName, string LastName, string Email, string Phone, string Title, string Department, float Salary)
		:clsPerson(ID, FirstName, LastName, Email, Phone)
	{

		_Department = Department;
		_Title = Title;
		_Salary = Salary;
	}

	void SetSalary(float Salary)
	{
		_Salary = Salary;
	}

	float Salary()
	{
		return _Salary;
	}
	void SetTitle(string Title)
	{
		_Title = Title;
	}

	string Title()
	{
		return _Title;
	}

	void SetDepartment(string Department)
	{
		_Department = Department;
	}

	string Department()
	{
		return _Department;
	}

	void Print()
	{
		cout << "\nInfo:\n";
		cout << "________________________\n";
		cout << "ID          : " << ID() << endl;
		cout << "First Name  : " << GetFirstName() << endl;
		cout << "Last Name   : " << LastName() << endl;
		cout << "Full Name   : " << FullName() << endl;
		cout << "Email       : " << Email() << endl;
		cout << "Phone       : " << Phone() << endl;
		cout << "Title       : " << Title() << endl;
		cout << "Departement : " << Department() << endl;
		cout << "Salary      : " << Salary() << endl;
		cout << "________________________\n";
	}
};



// Derived class for Developer
class clsDeveloper : public clsEmployee
{
private:

	string _MainProgrammingLanguage;

public:

	clsDeveloper(int ID, string FirstName, string LastName, string Email, string Phone, string Title, string Department, float Salary, string MainProgrammingLanguage)
		:clsEmployee(ID, FirstName, LastName, Email, Phone, Title, Department, Salary)
	{
		_MainProgrammingLanguage = MainProgrammingLanguage;
	}

	void SetMainProgrammingLanguage(string MainProgrammingLanguage)
	{
		_MainProgrammingLanguage = MainProgrammingLanguage;
	}

	string GetMainProgrammingLanguage()
	{
		return _MainProgrammingLanguage;
	}

	void Print()
	{
		cout << "\nInfo:\n";
		cout << "**************************************************************\n";
		cout << "ID                      : " << ID() << endl;
		cout << "First Name              : " << GetFirstName() << endl;
		cout << "Last Name               : " << LastName() << endl;
		cout << "Full Name               : " << FullName() << endl;
		cout << "Email                   : " << Email() << endl;
		cout << "Phone                   : " << Phone() << endl;
		cout << "Title                   : " << Title() << endl;
		cout << "Departement             : " << Department() << endl;
		cout << "Salary                  : " << Salary() << endl;
		cout << "MainProgrammingLanguage : " << GetMainProgrammingLanguage() << endl;
		cout << "**************************************************************\n";
	}
};

// Derived class for My Information
class clsMyInformation :public clsDeveloper
{
private:
	int _Age;
	int _Heinght;
	int _Weight;
	int _TC;
	string _BabaName;
	string _MamaName;
	string _BloodGroup;

public:
	clsMyInformation(int ID, string FirstName, string LastName, string Email, string Phone, string Title, string Department, float Salary, string MainProgrammingLanguage, int Age, int  Heinght, int Weight, int TC, string BabaName, string MamaName, string BloodGroup)
		:clsDeveloper(ID, FirstName, LastName, Email, Phone, Title, Department, Salary, MainProgrammingLanguage)

	{
		_Age = Age;
		_Heinght = Heinght;
		_Weight = Weight;
		_TC = TC;
		_BabaName = BabaName;
		_MamaName = MamaName;
		_BloodGroup = BloodGroup;



	};

	void SetAge(int Age)
	{
		_Age = Age;
	}
	int  GetAge()
	{
		return _Age;
	}
	void SetHeinght(int  Heinght)
	{
		_Heinght = Heinght;
	}
	int  GetHeinght()
	{
		return _Heinght;
	}
	void SetWeight(int Weight)
	{
		_Weight = Weight;
	}

	int  GetWeight()
	{
		return _Weight;
	}
	void SetTC(int TC)
	{
		_TC = TC;
	}
	int  GetTC()
	{
		return _TC;
	}
	void SetBabaName(string BabaName)
	{
		_BabaName = BabaName;
	}
	string GetBabaName()
	{
		return _BabaName;
	}
	void SetMamaName(string MamaName)
	{
		_MamaName = MamaName;
	}
	string GetMamaName()
	{
		return _MamaName;
	}
	void SetBloodGroup(string BloodGroup)
	{
		_BloodGroup = BloodGroup;
	}
	string GetBloodGroup()
	{
		return _BloodGroup;
	}



	void Print()
	{
		cout << "\nInfo:\n";
		cout << "**************************************************************\n";
		cout << "ID                      : " << ID() << endl;
		cout << "First Name              : " << GetFirstName() << endl;
		cout << "Last Name               : " << LastName() << endl;
		cout << "Full Name               : " << FullName() << endl;
		cout << "Email                   : " << Email() << endl;
		cout << "Phone                   : " << Phone() << endl;
		cout << "Title                   : " << Title() << endl;
		cout << "Departement             : " << Department() << endl;
		cout << "Salary                  : " << Salary() << endl;
		cout << "MainProgrammingLanguage : " << GetMainProgrammingLanguage() << endl;
		cout << "Age                     : " << GetAge() << endl;
		cout << "Heinght                 : " << GetHeinght() << endl;
		cout << "Weight                  : " << GetWeight() << endl;
		cout << "TC                      : " << GetTC() << endl;
		cout << "Baba Name               : " << GetBabaName() << endl;
		cout << "Mama Name               : " << GetMamaName() << endl;
		cout << "Blood Group             : " << GetBloodGroup() << endl;
		cout << "**************************************************************\n";
	}

};
int main()
{




	clsMyInformation info1(10, "BELAL", "ALHAMID", "bilo123@gmail.com", "0555555555", "Computer engineer", "TR", 10000, "C++ ", 23, 176, 87, 375637657, "baba", "mama", "B+");
	info1.Print();

	info1.SendEmail("Hello", "This is a test email.");
	info1.SendSMS("This is a test SMS.");

	system("pause");
	return 0;


}