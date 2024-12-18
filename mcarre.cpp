#include "carre.h"
#include <iostream>

using namespace std;


int main()

{

	CCarre c1;
	c1.Setsx(3);
	c1.Setsy(15);
	c1.Setcote(100);
	cout << "valeur de c1: ";
	c1.Afficher();
	cout << "valeur de x de c1: " << c1.Getsx() << endl;
	cout << "valeur de y de c1: " << c1.Getsy() << endl;
	cout << "valeur de cote de c1: " << c1.GetCote() << endl;
	c1.Deplacer('n', 5);
	cout << "valeur de c1 apres deplacement: ";
	c1.Afficher();
	c1.Deplacer(5, -3);
	cout << "valeur de c1 apres deplacement: ";
	c1.Afficher();
	CCarre TabCarre[5];

	TabCarre[1].Setsx(4);
	TabCarre[1].Setsy(17);
	TabCarre[1].Setcote(95);
	cout << "valeur de TabCarre[1]: ";
	TabCarre[1].Afficher();
	TabCarre[2].Setsx(7);
	TabCarre[2].Setsy(19);
	TabCarre[2].Setcote(93);
	cout << "valeur de TabCarre[2]: ";
	TabCarre[2].Afficher();
	TabCarre[3].Setsx(2);
	TabCarre[3].Setsy(23);
	TabCarre[3].Setcote(105);
	cout << "valeur de TabCarre[3]: ";
	TabCarre[3].Afficher();
	TabCarre[4].Setsx(5);
	TabCarre[4].Setsy(12);
	TabCarre[4].Setcote(115);
	cout << "valeur de TabCarre[4]: ";
	TabCarre[4].Afficher();

	CCarre* c2 = new CCarre();
	cout << "valeur de carre par deffaut: ";
	c2->Afficher();
	c2->Setsx(3);
	c2->Setsy(13);
	c2->Setcote(90);
	cout << "valeur de c2: ";
	c2->Afficher();
	c2->Deplacer('n', 5);
	cout << "valeur de c2 apres deplacement: ";
	c2->Afficher();
	delete c2;


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

