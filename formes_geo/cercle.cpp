#include "cercle.h"

Cercle::Cercle() :Figure()
{
	rayon = 0;
}

Cercle::Cercle(int inX, int inY, int inRayon) : Figure(inX, inY)
{
	rayon = inRayon;
}

Cercle::Cercle(const Cercle& inCercle) : Figure(inCercle)
{
	rayon = inCercle.rayon;
}

Cercle::~Cercle()
{

}

void Cercle::setRayon(int inRayon)
{
	rayon = inRayon;
}

int Cercle::getRayon() const
{
	return rayon;
}

string Cercle::getType()const
{
	return "Cercle";
}
float Cercle::calculerPerimetre()
{
	return (2 * Pi * rayon);
}

float Cercle::calculerAire()
{
	return (Pi * rayon * rayon);
}

void Cercle::selectionner(int inX, int inY)
{
	float XFloat = float(inX);
	float YFloat = float(inY);
	float centreX = float(x + rayon);
	float centreY = float(y + rayon);
	float rayonFloat = float(rayon);
	if ((pow((XFloat - centreX),2) + pow((YFloat - centreY),2))/pow(rayonFloat,2) <= 1)
	{
		estSelectionne = true;
	}
	else
	{
		estSelectionne = false;
	}
}