#include <iostream>

using namespace std;

class clsAddress
{
private:
	string _AddressLine1;
	string _AddressLine2;
	string _POBox;
	string _ZipCode; 
public:

	//This is how we used Constructors so that we do not send an empty object.
	//Â«ﬂ–« «” Œœ„‰« «·Constructors Õ Ï ·« ‰—”· «Ê»ÃÌﬂ  ›«—€ 

	clsAddress(string AddressLine1, string AddressLine2 , string POBox , string ZipCode)
	{
		_AddressLine1 = AddressLine1;
		_AddressLine2 = AddressLine2;
		_POBox = POBox;
		_ZipCode = ZipCode;
	}
	void setAddressLine1(string AddressLine1)
	{
		_AddressLine1 = AddressLine1;
	}
	string GetAddressLine1()
	{
		return _AddressLine1;
	}
	void setAddressLine2(string AddressLine2)
	{
		_AddressLine2 = AddressLine2;
	}
	string GetAddressLine2()
	{
		return _AddressLine2;
	}
	void setPOBox(string POBox)
	{
		_POBox = POBox;
	}
	string GetPOBox()
	{
		return _POBox;
	}
	void setZipCode(string ZipCode)
	{
		_ZipCode = ZipCode;
	}
	string GetZipCode()
	{
		return _ZipCode;
	}
	void Print()
	{
		cout <<"\nAddress Details :\n";
		cout << "___________________________" << endl;
		cout << "\nAddressLine1: " << _AddressLine1 << endl;  
		cout << "AddressLine2: " << _AddressLine2 << endl;     
		cout << "POBox       : " << _POBox << endl;        
		cout << "ZipCode     : " << _ZipCode << endl;
	}
};



int main()
{
	clsAddress Address1("SAKARYA , SERDEVAN ", "KEMAL BASA", "988", "0000");

	Address1.Print();

	system("pause>0"); 
	return 0;
}

