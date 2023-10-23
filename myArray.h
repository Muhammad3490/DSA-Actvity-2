#include "Criminal.h"
class myArray
{
public:
	myArray();
	~myArray();
	void insert(Criminal obj1);
	Criminal searchByCrime(string crime);
	void printCrimeMurder();
	void printCrimeTheft();


private:
	Criminal *arr;
	int size;
	int capacity;
};

myArray::myArray()
{
}

myArray::~myArray()
{
}
