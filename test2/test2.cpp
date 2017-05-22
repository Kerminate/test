#include <iostream>
#include <stdlib.h>
#include "Line.h"
#include "Array.h"
#include "Zuobiao.h"
#include "Bob.h"
using namespace std;

int main()
{
	Line *p = new Line(10, 20, 30, 40);
	p->setA(1, 2);
	p->setB(2, 4);
	p->printInfo();
	delete p;
	p = NULL;
	cout << endl;

	Array arr1(5);
	//arr1.setCount(3);
	Array arr2(arr1);
	cout << "arr1: " << arr1.getCount() << endl;
	arr1.printadrr();
	arr1.printArr();
	cout << "arr2: " << arr2.getCount() << endl;
	arr2.printadrr();
	arr2.printArr();
	cout << endl;

	Zuobiao *t1 = NULL;
	t1 = new Zuobiao;
	Zuobiao *t2 = new Zuobiao();
	t1->m_iZX = 99;
	t1->m_iZY = 89;
	(*t2).m_iZX = 999;
	(*t2).m_iZY = 989;
	cout << t1->m_iZX << " " << t1->m_iZY << endl;
	cout << (*t2).m_iZX << " " << (*t2).m_iZY << endl;
	delete t1;
	t1 = NULL;
	delete t2;
	t2 = NULL;
	cout << endl;

	Zuobiao t3;
	Zuobiao *t4 = &t3;
	t4->m_iZX = 123;
	t4->m_iZY = 321;
	cout << t3.m_iZX << " " << t3.m_iZY << endl;
	cout << t4->m_iZX << " " << t4->m_iZY << endl;
	cout << endl;

	Line *q = new Line(1, 2, 3, 4);
	q->printInfo();
	delete q;
	q = NULL;
	cout << sizeof(q) << endl;
	cout << sizeof(Line) << endl;
	cout << endl;

	Bob bob1(10);
	cout << bob1.getBob() << endl;
	bob1.printInfo().setBob(5).printInfo();
	bob1.printPos();
	cout << &bob1 << endl;
	/*
	Coordinate coor[3];
	coor[0].m_iX = 0;
	coor[0].m_iY = 0;

	Coordinate *p = new Coordinate[3];
	p[0].m_iX = 1;
	p[0].m_iY = 2;
	p[1].m_iX = 3;
	p[1].m_iY = 6;
	p[2].m_iX = 9;
	p[2].m_iY = 18;

	for (int i = 0; i < 3; i++)
	{
		cout << "coor: " << coor[i].m_iX << " " << coor[i].m_iY << endl;
	}
	for (int j = 0; j < 3; j++)
	{
		cout << "p: " << p[j].m_iX << " " << p[j].m_iY << endl;
	}
	delete[]p;
	p = NULL;
	*/
	system("pause");
	return 0;
}