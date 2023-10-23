#include "myArray.h"
#include "myArray.h"

myArray::myArray()
{
	size = 0;
	capacity = 200;
	arr = new Criminal[capacity];
}

myArray::~myArray()
{
}
void myArray::insert(Criminal obj1) {
	if (size < capacity) {
		arr[size] = obj1;
	}
}
Criminal myArray::searchByCrime(string crime) {
	for (int i = 0; i < size; i++) {
		if (arr[i].getCrimeType() == crime) {
			return arr[i];
		}
	}
}
void myArray::printCrimeMurder() {
	for (int i = 0; i < size; i++)
	{
		if (arr[i].getCrimeType() == "Murder" || arr[i].getCrimeType() == "murder") {
			cout << "Name :" << arr[i].getName() << endl;
			cout << "Age:" << arr[i].getAge() << endl;
			cout << "Crime type: " << arr[i].getCrimeType() << endl<<endl;
		}

	}

}
void myArray::printCrimeMurder() {
	for (int i = 0; i < size; i++)
	{
		if (arr[i].getCrimeType() == "Theft" || arr[i].getCrimeType() == "theft") {
			cout << "Name :" << arr[i].getName() << endl;
			cout << "Age:" << arr[i].getAge() << endl;
			cout << "Crime type: " << arr[i].getCrimeType() << endl << endl;
		}

	}

}
