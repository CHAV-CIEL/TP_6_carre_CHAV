#pragma once

class CCarre
{

private:

	int sx, sy;
	unsigned int cote;
public:
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







