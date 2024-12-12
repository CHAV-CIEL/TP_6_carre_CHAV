#include "carre.h"
#include <iostream>

using namespace std;



void CCarre::Setsx(int sx1)
{
	this->sx = sx1;
}

void CCarre::Setsy(int sy1)
{
	this->sy = sy1;
}

void CCarre::Setcote(int cote1)
{
	this->cote = cote1;
}

void CCarre::Afficher()
{
	cout << sx << " " << sy << " " << cote << endl;
}

int CCarre::Getsx()
{
	return sx;
	
}

int CCarre::Getsy()
{
	return sy;
}

int CCarre::GetCote()
{
	return cote;
}


void CCarre::Deplacer(char direction, int saut)
{
	/*cout << "entre la  valeur du saut: ";
	cin >> saut;
	cout << endl << "entre la direction: ";
	cin >> direction;
    
	*/


	if (direction == 'n')
	{
		sy = sy-saut;
	}

	if (direction == 's')
	{
		sy = sy+saut;
	}

	if (direction == 'e')
	{
		sx = sx+saut;
	}

	if (direction == 'o')
	{
		sx = sx-saut;
	}
	


	

}

void CCarre::Deplacer(int dx, int dy)
{

	sx = sx+dx;
	sy = sy+dy;

}
