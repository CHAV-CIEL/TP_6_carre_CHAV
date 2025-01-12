#pragma once
#include <iostream>
/// @file carre.h 
/// @brief Programme principal du TP mcarre
/// @details Ce programme utilise carre.cpp
/// @author Serge Delbosc 
/// @version 0.1 - Visual Studio 2019 
/// @date 10/01/2025 

/// @brief Classe de base abstraite
class CCarre
{

private:
	
	
	
	/// @brief Un attribut de la classe de CCarre
	int sx;
	/// @brief Un attribut de la classe de CCarre
	int sy;
	/// @brief Un attribut de la classe de CCarre
	unsigned int cote; 
public:
	/// @brief constructeur par défaut
	CCarre()
	{
		sx = 1;
		sy = 3;
		cote = 10;
	}

	/// @brief constructeur paramétrer
	/// @param x 
	/// @param y 
	/// @param c 
	CCarre(int x, int y, unsigned int c)
	{
		x = sx;
		y = sy;
		c = cote;
	}
	/// @brief{définition des méthodes}
	/// @brief méthode de la classe CCarre qui affecte la valeur de sx1 à sx
	/// @param sx1 
	void Setsx(int sx1);
	/// @brief méthode de la classe CCarr equi affecte la valeur de sy1 à sy
	/// @param sy1 
	void Setsy(int sy1);
	/// @brief méthode de la classe CCarre qui affecte la valeur de cote1 à cote
	/// @param cote1 
	void Setcote(int cote1);
	/// @brief méthode de la classe CCarre qui affiche les caractéristiques du carré
	void Afficher();
	/// @brief méthode de la classe CCarreq ui retourne sx
	/// @return sx
	int Getsx();
	/// @brief méthode de la classe CCarre qui retourne sy
	/// @return sy
	int Getsy();
	/// @brief méthode de la classe CCarr qui retourne la cote 
	/// @return cote
	int GetCote();
	/// @brief méthode de la classe CCarr qui déplace le carré et affiche ses nouvelles caractéristiques 
	/// @param direction 
	/// @param saut 
	void Deplacer(char direction, int saut);
	/// @brief surcharge de la méthode de la classe CCarr qui déplace le carré et affiche ses nouvelles caractéristiques 
	/// @param dx 
	/// @param dy 
	void Deplacer(int dx, int dy);


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
 // "Déplace" le carré sans le dessiner. Les attributs x et y
	// sont modifiés en ajoutant ou retranchant la valeur de saut en fonction de
	// la direction : par ex direction nord saut=2 y=y-2
	// Entrées :
	//  - direction : vaut 'n' si nord, 's' si sud, 'o' si ouest, 'e' si est
	//   - saut : nombre de pixels de déplacement du carré
	// Sortie : Aucune
*/





