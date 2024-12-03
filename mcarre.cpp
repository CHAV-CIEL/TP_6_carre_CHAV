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
}

/*
class Temps
{
public :
Temps();
~Temps();
void ajusterTemps( int, int, int);
void afficherMilitaire();
void afficherStandard ();
private :
int heure;
int minute;
int seconde;
};
*/