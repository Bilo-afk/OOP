#include <iostream>

using namespace std; 


class clsPerson
{
public:
	string FirstName; 
	string LastName;

	string FallName()
	{
		return FirstName + " " + LastName;
	}
};

int main()
{
	clsPerson Person1;

	Person1.FirstName = "BELAL";
	Person1.LastName = "AL-HAMID"; 
	cout << Person1.FallName() << endl; 

	return 0; 
}

