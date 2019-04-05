#include "carre.h"

Carre::Carre():Figure()
{
	cote=0;
}

Carre::Carre(int inX, int inY, int inCote) : Figure(inX, inY)
{
	cote = inCote;
}

Carre::Carre(const Carre& inCarre):Figure(inCarre)
{
	cote=inCarre.cote;
}

Carre::~Carre()
{

}

void Carre::setCote(int inCote)
{
  cote = inCote;
}

int Carre::getCote() const
{
	return cote;
}

string Carre::getType() const
{
	return "Carre";
}

float Carre::calculerPerimetre()
{
	return (4 * cote);
}

float Carre::calculerAire()
{
	return (cote * cote);
}

void Carre::selectionner(int inX, int inY)
{
	float XFloat = float(inX);
	float YFloat = float(inY);
	if (XFloat >= x && XFloat <= x + cote)
	{
		if (YFloat >= y && YFloat <= y + cote)
		{
			estSelectionne = true;
		}
		else
		{
			estSelectionne = false;
		}
	}
	else
	{
		estSelectionne = false;
	}
}