#include <iostream>
#include <string>

using namespace std;


class clsA
{
public:
    int var;
    static int cuounter;

    clsA()
    {
        cuounter++;
    }
    void preint()
    {
        cout << "\nvar = " << var << endl;
        cout << "counter = " << cuounter << endl;
    }
};

int clsA::cuounter = 0;

int main()
{
    clsA A1, A2, A3;

    A1.var = 10;
    A2.var = 20;
    A3.var = 30;
    

    A1.preint();
    A2.preint();
    A3.preint();

    A1.cuounter = 500;

    cout << "\nAfter changing the static member counter in one objet:\n";

    A1.preint();
    A2.preint();
    A3.preint();
}

