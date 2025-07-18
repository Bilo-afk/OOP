#include <iostream>

using namespace std;

class clsCalculator
{
private:
	float _Result;
	float _LastNumber;
	string _LastOperation = "clear";
	float _previousResult = 0;

	bool _Iszero(float Number)
	{
		return Number == 0;
	}
public:
	void Add(float Number)
	{
		_LastNumber = Number;
		_previousResult = _Result;
		_LastOperation = "Adding";
		_Result += Number;
	}

	void Subtract(float Number)
	{
		_LastNumber = Number;
		_previousResult = _Result;
		_LastOperation = "Subtracting";
		_Result -= Number;
	}

	void Multiply(float Number)
	{
		_LastNumber = Number;
		_previousResult = _Result;
		_LastOperation = "Multiplying";
		_Result *= Number;
	}

	void Divide(float Number)
	{
		if (_Iszero(Number))
		{
			Number = 1; 
		}
		
		_LastNumber = Number;
		_previousResult = _Result;
		_LastOperation = "Dividing";
		_Result /= Number;
	}
	float GetResult()
	{
		return _Result;
	}
	void Clear()
	{
		_LastNumber = 0;
		_LastOperation = "clear";
		_previousResult = 0;
		_Result = 0;
	}
	void CancelLastOperation()
	{
		_LastNumber = 0;
		_LastOperation = "cancelling Last Operation";
		_Result = _previousResult;
	}
	void PrintResult() 
	{
		cout << "Result ";        
		cout << "After " << _LastOperation << " " << _LastNumber << " is: " << _Result << "\n"; 
	}
};
int main() 
{ 
	clsCalculator Calculator1;

	Calculator1.Clear();    

	Calculator1.Add(10);     
	Calculator1.PrintResult();   

	Calculator1.Add(100);     
	Calculator1.PrintResult();   

	Calculator1.Subtract(20);    
	Calculator1.PrintResult();   

	Calculator1.Divide(0);    
	Calculator1.PrintResult();   

	Calculator1.Divide(2);     
	Calculator1.PrintResult();   

	Calculator1.Multiply(3);     
	Calculator1.PrintResult();  

	Calculator1.CancelLastOperation();    
	Calculator1.PrintResult();   

	Calculator1.Clear();    
	Calculator1.PrintResult();   


	system("pause>0"); 
	return 0; 
}
