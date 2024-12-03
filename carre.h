#pragma once

class CCarre
{

private:

	int sx, sy;
	unsigned int cote;
public:
	// méthode qui affecte la valeur de sx1 à sx
	void Setsx(int sx1);
	// méthode qui affecte la valeur de sy1 à sy
	void Setsy(int sy1);
	// méthode qui affecte la valeur de cote1 à cote
	void Setcote(int cote1);
	// méthode qui affiche les caractéristiques du carré
	void Afficher();
	// qui retourne sx 
	int Getsx();
	// qui retourne sy 
	int Getsy();
	// qui retourne la cote 
	int GetCote();
	
	
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







