#pragma once
#include "carre.h"
#include "cercle.h"
#include "rectangle.h"

const int maxFigures = 50;

class Donnees
{
private:
	Figure* lesFigures[maxFigures];

public:
	Donnees();
	~Donnees();
	bool AjouterFigure(Figure*);
	Figure* ObtenirFigure(int);
};