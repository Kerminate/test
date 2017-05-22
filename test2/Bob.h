#include <string>

class Bob
{
public:
	Bob(int len);
	~Bob();
	Bob& setBob(int len);
	int getBob();
	Bob& printInfo();
	Bob& printPos();
private:
	int len;
};