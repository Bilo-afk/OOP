#include <iostream>
using namespace std;


class clsPerson
{
private:


    int _ID = 10; // ID of the person
    string _FirstName; 
    string _LastName;

public:

    //Property Get, this is a read only property because we donít have a set function 
    //Property Get° Â–Â Œ«’Ì… ··ﬁ—«¡… ›ﬁÿ ·√‰‰« ·« ‰„·ﬂ œ«·… „Õœœ…
    int getID()
    {
        return _ID;
    }

    //Property Set
    void setFirstName(string FirstName)
	{
		_FirstName = FirstName;
	}
    //Property Get
    string getFirstName()
    {
        return _FirstName;  
    }
    //Property Set
    void setLastName(string LastName)
    {
        _LastName = LastName;
    }
    //Property Get
    string getLastName()
	{
		return _LastName;  
	}

    string FullName()
	{
		return _FirstName + " " + _LastName;
	}


};



int main()
{
   clsPerson person1;

   
   person1.setFirstName("John");
   person1.setLastName("Doe");
   cout << "First Name: " << person1.getFirstName() << endl; 
   cout << "Last Name: " << person1.getLastName() << endl;
   cout << "Full Name: " << person1.FullName() << endl;
   cout << "ID: " << person1.getID() << endl; 
   system("pause>0"); 
   return 0;
}

