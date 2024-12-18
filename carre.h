#pragma once

class CCarre
{

private:

	int sx, sy;
	unsigned int cote;
public:
	CCarre()
	{
		sx = 1;
		sy = 3;
		cote = 10;
	}
	
	CCarre(int x, int y, unsigned int c)
	{
		x = sx;
		y = sy;
		c = cote;
	}


	// m�thode qui affecte la valeur de sx1 � sx
	void Setsx(int sx1);
	// m�thode qui affecte la valeur de sy1 � sy
	void Setsy(int sy1);
	// m�thode qui affecte la valeur de cote1 � cote
	void Setcote(int cote1);
	// m�thode qui affiche les caract�ristiques du carr�
	void Afficher();
	// qui retourne sx 
	int Getsx();
	// qui retourne sy 
	int Getsy();
	// qui retourne la cote 
	int GetCote();
	// voir ***
	void Deplacer(char direction, int saut);
	void Deplacer( int dx, int dy);
};


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


/*
***
 // "D�place" le carr� sans le dessiner. Les attributs x et y
	// sont modifi�s en ajoutant ou retranchant la valeur de saut en fonction de
	// la direction : par ex direction nord saut=2 y=y-2
	// Entr�es :
	//  - direction : vaut 'n' si nord, 's' si sud, 'o' si ouest, 'e' si est
	//   - saut : nombre de pixels de d�placement du carr�
	// Sortie : Aucune
*/





