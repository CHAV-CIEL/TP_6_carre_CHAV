#include "carre.h"


using namespace std;


/// @brief m�thode qui affecte la valeur de sx1 � sx
/// @param sx1 
void CCarre::Setsx(int sx1)
{
	this->sx = sx1;
}

/// @brief m�thode qui affecte la valeur de sy1 � sy
/// @param sy1 
void CCarre::Setsy(int sy1)
{
	this->sy = sy1;
}

/// @brief 
/// @param cote1 
void CCarre::Setcote(int cote1)
{
	this->cote = cote1;
}

/// @brief 
void CCarre::Afficher()
{
	cout << "x: " << sx << " " << "y: " << sy << " " << "cote: " << cote << endl;
}

/// @brief 
/// @return 
int CCarre::Getsx()
{
	return sx;

}

/// @brief 
/// @return 
int CCarre::Getsy()
{
	return sy;
}

/// @brief 
/// @return 
int CCarre::GetCote()
{
	return cote;
}

/// @brief 
/// @param direction 
/// @param saut 
void CCarre::Deplacer(char direction, int saut)
{
	/*cout << "entre la  valeur du saut: ";
	cin >> saut;
	cout << endl << "entre la direction: ";
	cin >> direction;

	*/


	if (direction == 'n')
	{
		sy = sy - saut;
	}

	if (direction == 's')
	{
		sy = sy + saut;
	}

	if (direction == 'e')
	{
		sx = sx + saut;
	}

	if (direction == 'o')
	{
		sx = sx - saut;
	}





}

/// @brief 
/// @param dx 
/// @param dy 
void CCarre::Deplacer(int dx, int dy)
{
	
	sx = sx + dx;
	sy = sy + dy;
	
}
