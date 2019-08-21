#include <iostream>
#include "Vector.h"
#include <time.h>

int main()
{
	srand(static_cast <unsigned int>(time(0)));
	Vector vector(15);
	vector.fillArray();
	vector.printArray();
	vector.printDupes(true);
	vector.shuffleArray();
	vector.printArray();
	return 0;
}