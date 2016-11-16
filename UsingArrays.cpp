#include <iostream>

using namespace std;

const string name   = "Using Arrays";
const string author = "Brendan Gowen";
const string github = "https://www.github.com/akachronix";

int main(void)
{
	long double Numbers[25] = 
	{
		100.43, 
		201.39, 
		209.67, 
		493.14, 
		193.34, 
		103.382,
		291.40,
		295.504,
		394.66,
		198.53,
		3939.49,
		193.22,
		104.32,
		4930.202,
		2932.29,
		493.399,
		399.432,
		291.3,
		580.4,
		405.49,
		2049.23,
		2393.24,
		9843.95,
		900.54,
		403.5
	};
	
	double numberOfItems = sizeof(Numbers) / sizeof(Numbers[0]);
	
	cout << name << endl << author << endl << github << endl << endl;
	
	for(int i = 0; i < numberOfItems; i++)
	{
		cout << "Number " << i + 1 << ": " << Numbers[i] << endl;
	}
	
	cout << "\nThere are " << numberOfItems << " numbers in the array." << endl;
	cout << "The array takes up " << sizeof(Numbers) << " bytes of RAM." << endl;
	cout << "Each number takes up " << sizeof(Numbers[0]) << " bytes of RAM." << endl;
	
	return 0;
}
