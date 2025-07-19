#include <iostream>

using namespace std;


class clsPerson
{
public:
    string FullName;


    //This is Instructor will be  called when object is built.
    //”Ì „ «” œ⁄«¡ Â–« «·„œ—» ⁄‰œ »‰«¡ «·ﬂ«∆‰.
    clsPerson()
    {
        FullName = "BELAL AL-HAMID";
        cout << "\n Hi , I'M counstructor";

    }
    //This is destructor will be called when object is destroyed.
    //”Ì „ «” œ⁄«¡ Â–« «·„œ„— ⁄‰œ  œ„Ì— «·ﬂ«∆‰.
    ~clsPerson()
    {
        cout << "\n Hi , I'M Destructor";
	
    }
};
void Fun1()
{
    clsPerson Person1;
    //after exiting from function, person1 will be
    // //»⁄œ «·Œ—ÊÃ „‰ «·ÊŸÌ›…° ”Ì „  ‘€Ì· «·‘Œ’ 1
    

    //destroyed and destructor will be called.
    //”Ì „ «” œ⁄«¡ destroyed Ê destructor.
}

void Fun2()
{
    clsPerson* Person2 = new clsPerson;
    //always use delete whenever you use new, otherwise object will remain in memory
    //«” Œœ„ œ«∆„« delete ⁄‰œ„«  ” Œœ„ new° Ê≈·« ”Ì»ﬁÏ «·ﬂ«∆‰ ›Ì «·–«ﬂ—…
    
     delete Person2; 

}


int main()
{
    Fun1();     
    Fun2();

    system("pause>0"); 
    return 0;

}
