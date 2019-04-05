#ifndef FigureH
#define FigureH

#include <string>
using namespace std;

const float Pi=(float)3.1416;

class Figure
{
protected:
	int x;	//coin supérieur gauche
	int y;
	bool estSelectionne;

public:
	Figure();
	Figure(int x, int y);
	Figure(const Figure&);
	virtual ~Figure();
	int getX() const;
	int getY() const;
	virtual int getRayon() const;
	virtual int getCote() const;

	void setPoint(int X, int Y);
	void setX(int);
	void setY(int);
	virtual void setCote(int);
	virtual void setRayon(int);

	virtual void setLargeur(int);
	virtual void setHauteur(int);
	virtual int getLargeur() const;
	virtual int getHauteur() const;

	bool EstSelectionne();	
	void Deselectionner();

	virtual float calculerPerimetre() = 0;
	virtual float calculerAire() = 0;
	virtual void selectionner(int, int) = 0;
};

#endif