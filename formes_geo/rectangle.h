#ifndef rectangleH
#define rectangleH
#include "figure.h"

class FormeRectangle:public Figure
{
  protected:
    int largeur;
	int hauteur;
  public:
	FormeRectangle();
	FormeRectangle(int x, int y, int largeu, int hauteur);
	FormeRectangle(const FormeRectangle&);
	virtual ~FormeRectangle();

	virtual void setLongueur(int);
	virtual void setHauteur(int);
	virtual int getLongueur() const;
	virtual int getHauteur() const;
	virtual string getType()const;
	virtual float calculerAire();
	virtual float calculerPerimetre();
	virtual void selectionner(int,int);
};
#endif
