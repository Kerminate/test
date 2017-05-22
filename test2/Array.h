#include <string>
using namespace std;

class Array
{
public:
	Array(int _count);
	Array(const Array &arr);
	~Array();
	void setCount(int _count);
	int getCount();
	void printadrr();
	void printArr();
private:
	int m_iCount;
	int *m_pArr;
};