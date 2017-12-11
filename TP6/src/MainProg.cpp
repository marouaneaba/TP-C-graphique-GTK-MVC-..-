
#include <iostream>
#include "Livre.hpp"

using namespace std;

int main()
{
    Livre goku,loku,soku;
    try
    {
        goku=Livre("Les derniers jours","Ahmed Mohamed",2015);
        soku=Livre("Les derniers jours","Ahmed Mohamed",2015);
        std::string str="le test;Ahmed Said;1996";
        cout << goku.getAnnee() << endl;
        cout << goku.getAuteur() << endl;
        cout << goku.getTitre() << endl;
        cout << loku.getAnnee() << endl;
        cout << loku.getAuteur() << endl;
        cout << loku.getTitre() << endl;
        cout << (soku<loku) << endl;
	cout << str << endl;
    }
    catch(string e)
    {
        std::cerr << "exception: " << e << std::endl;
    }

    return 0;
}
