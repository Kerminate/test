#include "Line.h"
#include <iostream>
using namespace std;

//Line::Line(int x1, int y1, int x2, int y2) :m_coorA(x1, y1), m_coorB(x2, y2)
Line::Line(int x1, int y1, int x2, int y2)
{
	m_coorA = new Coordinate(x1, y1);
	m_coorB = new Coordinate(x2, y2);
	cout << "Line()" << endl;
}

Line::~Line()
{
	delete m_coorA;
	m_coorA = NULL;
	delete m_coorB;
	m_coorB = NULL;
	cout << "~Line()" << endl;
}

void Line::setA(int x, int y)
{
	m_coorA->setX(x);
	m_coorA->setY(y);
}

void Line::setB(int x, int y)
{
	m_coorB->setX(x);
	m_coorB->setY(y);
}

void Line::printInfo()
{
	cout << "printInfo()" << endl;
	cout << "(" << m_coorA->getX() << "," << m_coorA->getY() << ")" << endl;
	cout << "(" << m_coorB->getX() << "," << m_coorB->getY() << ")" << endl;
}