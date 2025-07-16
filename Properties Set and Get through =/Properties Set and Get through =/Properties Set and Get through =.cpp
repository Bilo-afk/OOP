#include <iostream>
using namespace std;

class clsPerson
{
private:
	
	string _FirstName;
public:
	
void setFirstName(string FirstName)
{
	_FirstName = FirstName;
	}
string getFirstName()
{
		return _FirstName;

	   }
      __declspec(property ( get = getFirstName, put = setFirstName)) string FirstName;
};



int main()
{
	clsPerson Person1;
	Person1.setFirstName("BILO");
	cout << Person1.getFirstName() << endl;

	//instead of the above we only write this
	Person1.FirstName = "BILO";
	cout << Person1.FirstName;
	system("pause>0");
	return 0;
};

