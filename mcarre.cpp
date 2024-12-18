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
	c1.Deplacer('n', 5);
	c1.Afficher();
	c1.Deplacer(5, -3);
	c1.Afficher();
	CCarre TabCarre[4]; 

	TabCarre[1].Setsx(4);
	TabCarre[1].Setsy(17);
	TabCarre[1].Setcote(95);
	TabCarre[1].Afficher();
	TabCarre[2].Setsx(7);
	TabCarre[2].Setsy(19);
	TabCarre[2].Setcote(93);
	TabCarre[2].Afficher();
	TabCarre[3].Setsx(2);
	TabCarre[3].Setsy(23);
	TabCarre[3].Setcote(105);
	TabCarre[3].Afficher();
	TabCarre[4].Setsx(5);
	TabCarre[4].Setsy(12);
	TabCarre[4].Setcote(115);
	TabCarre[4].Afficher();

	/*
	
	TabCarre[].Setsx(3);
	c1.Setsy(15);
	c1.Setcote(100);
	c1.Afficher();
	1.Setsx(3);
	c1.Setsy(15);
	c1.Setcote(100);
	c1.Afficher();
	1.Setsx(3);
	c1.Setsy(15);
	c1.Setcote(100);
	c1.Afficher();
	1.Setsx(3);
	c1.Setsy(15);
	c1.Setcote(100);
	c1.Afficher();
	*/
	
	

}


