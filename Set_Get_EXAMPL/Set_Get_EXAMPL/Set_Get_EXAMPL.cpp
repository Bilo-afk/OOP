#include <iostream>

using namespace std;

class Person {
    private:
	
		int age;
public:
	void setAge(int a) {
		if (a >= 0)
			age = a;
	}

	int getAge() {
		return age;
	}
	};



int main()
{
	Person p;

	p.setAge(25);
	cout << "Age:" << p.getAge() << endl;
	return 0;
}

