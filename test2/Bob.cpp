#include <iostream>
#include "Bob.h"
using namespace std;

Bob::Bob(int len)
{
	this->len = len;
}

Bob::~Bob()
{

}

Bob& Bob::setBob(int len)
{
	this->len = len;
	return *this;
}

int Bob::getBob()
{
	return len;
}

Bob& Bob::printInfo()
{
	cout << "len = " << len << endl;
	return *this;
}

Bob& Bob::printPos()
{
	cout << this << endl;
	return *this;
}