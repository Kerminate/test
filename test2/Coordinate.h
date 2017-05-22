#include <string>
using namespace std;

class Coordinate
{
public:
	Coordinate(int x, int y);
	~Coordinate();
	void setX(int _x);
	int getX();
	void setY(int _y);
	int getY();
private:
	int m_iX;
	int m_iY;
};