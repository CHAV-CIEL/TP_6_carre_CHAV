#include "carre.h"
#include <iostream>

using namespace std;


int main()
{

	CCarre c1;
	c1.Setsx(3);
	c1.Setsy(15);
	c1.Setcote(100);
	c1.Afficher();
	cout << c1.Getsx() << endl;
	cout << c1.Getsy() << endl;
	cout << c1.GetCote() << endl;

}

