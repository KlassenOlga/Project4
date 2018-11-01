#include <iostream>
using namespace std;

int main() {
	char array[33];
	array[32] = '\0';
	memset(array, '0', 32 * sizeof(char));
	int i = 31;
	int counter = 0;
	double v;
	char mittlerChar;
	int mittlerInt;
	double z;
	cin >> z;
	int numVor = z;
	int ganz = z;
	double numNach = z - numVor;
	if (numNach != 0) {
		while (counter < 11) {
			counter++;
			numNach = numNach * 2;
			if (numNach == 1.0) {
				array[i] = '1';
				break;
			}
			else if (numNach < 1.0) {
				array[i] = '0';

			}
			else if (numNach > 1.0) {
				array[i] = '1';
				numNach = numNach - 1.0;
			}
			i--;

		}
		mittlerInt = i;
		for (int g = 31; g >= mittlerInt; g--) {
			if (mittlerInt == g) {
				break;
			}
			else {
				mittlerChar = array[g];
				array[g] = array[i];
				array[i] = mittlerChar;
				mittlerInt++;
			}
		}
		
		i = i - 1;
		array[i] = ',';

		while (numVor > 0) {
			i--;
			v = numVor % 2;
			array[i] = v + '0';
			numVor = numVor / 2;
		}
	}
	
	else if(numNach==0){ 
		while (ganz > 0) {
			mittlerInt = ganz % 2;
			array[i] = mittlerInt + '0';
			i--;
			ganz = ganz / 2;
		}
	}

	cout << array;
	cout << "Hi";


	system("pause");
	return 0;
}