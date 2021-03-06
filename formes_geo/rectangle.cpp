#include "rectangle.h"

FormeRectangle::FormeRectangle():Figure()
{
	largeur=0;
	hauteur = 0;
}

FormeRectangle::FormeRectangle(int inX, int inY, int inLargeur, int inHauteur) : Figure(inX, inY)
{
	largeur = inLargeur;
	hauteur = inHauteur;
}

FormeRectangle::FormeRectangle(const FormeRectangle& inRectangle):Figure(inRectangle)
{
	largeur = inRectangle.largeur;
	hauteur = inRectangle.hauteur;
}

FormeRectangle::~FormeRectangle()
{

}

void FormeRectangle::setLongueur(int inLargeur)
{
	largeur = inLargeur;
}
void FormeRectangle::setHauteur(int inHauteur)
{
	hauteur = inHauteur;
}

int FormeRectangle::getLongueur() const
{
	return largeur;
}
int FormeRectangle::getHauteur() const
{
	return hauteur;
}

string FormeRectangle::getType() const
{
	return "Rectangle";
}
float FormeRectangle::calculerAire()
{
	return (float)(largeur*hauteur);
}

float FormeRectangle::calculerPerimetre()
{
	return (float)(largeur*2+hauteur*2);
}

void FormeRectangle::selectionner(int inX,int inY)
{
	float XFloat = float(inX);
	float YFloat = float(inY);
	if (XFloat >= x && XFloat <= x + largeur)
	{
		if (YFloat >= y && YFloat <= y + hauteur)
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