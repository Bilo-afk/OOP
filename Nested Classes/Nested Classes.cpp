#include <iostream>
 using namespace std; 

 class clsPerson
 {
	 class clsAddress 
	 {
	 public:
		 string AddressLine1;
		 string AddressLine2;
		 string City;
		 string Country;



		 void print()
		 {
			 cout << "AddressLine1: " << AddressLine1 << endl;
			 cout << "AddressLine2: " << AddressLine2 << endl;
			 cout << "City: " << City << endl;
			 cout << "Country: " << Country << endl;
		 }


	 };
	 public:	
		 string FullName;	
		 clsAddress Address;

		 clsPerson()
		 {
			 FullName = "BELAL ALHAMID ";
			 Address.AddressLine1 = "KEMAL BASA ";
			 Address.AddressLine2 = "MODRIN EVLER ";
			 Address.City = "SAKARYA";
			 Address.Country = "TURKYE";
		 }

	 
 };

 int main()
 {
	 clsPerson Person1;

	 Person1.Address.print();


		
	 return 0;
 }
