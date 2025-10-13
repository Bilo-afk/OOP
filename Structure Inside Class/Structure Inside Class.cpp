#include <iostream> 
 
using namespace std; 

class clsPerson
{
	struct stAddress
	{
		string AddressLine1;
		string AddressLine2;
		string City;
		string Country;
		string PostalCode; 
		int Phone; 
		int Mobile; 
		int Fax; 
		int Email; 
		int WebSite; 
		int Other; 
		int Notes; 
		int AddressType;
	};
public:
	string FullName;
	stAddress Address;

	clsPerson()
	{
		FullName = "BELAL ALHAMID ";
		Address.AddressLine1 = "KEMAL BASA A BLOK  ";
		Address.AddressLine2 = "SERDIVAN ";
		Address.City = "SAKARYA ";
		Address.Country = "TURKYE ";
		Address.PostalCode = "54100 ";
		Address.Phone = 1234567890;
		Address.Mobile = 1234567890;
		Address.Fax = 1234567890;
		Address.Email = 1234567890;
		Address.WebSite = 1234567890;
		Address.Other = 1234567890;
		Address.Notes = 1234567890;
		Address.AddressType = 1;
	} 

	void PrintAddress()
	{
		cout << "\nFull Name    : " << FullName;
		cout << "\nAddress Line1: " << Address.AddressLine1;
		cout << "\nAddress Line2: " << Address.AddressLine2;
		cout << "\nCity         : " << Address.City;
		cout << "\nCountry      : " << Address.Country;
		cout << "\nPostal Code  : " << Address.PostalCode;
		cout << "\nPhone        : " << Address.Phone;
		cout << "\nMobile       : " << Address.Mobile;
		cout << "\nFax          : " << Address.Fax;
		cout << "\nEmail        : " << Address.Email;
		cout << "\nWebSite      : " << Address.WebSite;
		cout << "\nOther        : " << Address.Other;
		cout << "\nNotes        : " << Address.Notes;
		cout << "\nAddress Type : " << Address.AddressType;
		cout << endl;
	}
};

int main()
{
	clsPerson Person1;
	Person1.PrintAddress();



	return 0;

}