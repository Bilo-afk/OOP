#include <iostream>

using namespace std;

class clsA
{
public:
    static int Function1()
    {
        return 10;
    }
    int Function2()
    {
        return 20;
    }
};


int main()
{


    //The following line calls static function directly via class not through the object
    //ÇáÓØÑ ÇáÊÇáí íÓÊÏÚí æÙíİÉ ËÇÈÊÉ ãÈÇÔÑÉ ÚÈÑ ÇáİÕá æáíÓ ãä ÎáÇá ÇáßÇÆä

    //At class level you can call only static methods and static members
    //Úáì ãÓÊæì ÇáİÕá¡ íãßäß ÇÓÊÏÚÇÁ ÇáÃÓÇáíÈ ÇáËÇÈÊÉ æÇáÃÚÖÇÁ ÇáËÇÈÊÉ İŞØ




    //static methods can also be called throught the object.
    //íãßä ÃíÖğÇ ÇÓÊÏÚÇÁ ÇáÃÓÇáíÈ ÇáËÇÈÊÉ ãä ÎáÇá ÇáßÇÆä.
    clsA A1, A2 , A3;

    cout << clsA::Function1() << endl;
   
    cout << A1.Function1() << endl;
    cout << A2.Function2() << endl;
    cout << A1.Function1() << endl;



}

