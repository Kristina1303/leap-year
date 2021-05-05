#include <iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;
	if (num % 4 == 0)
	{
		cout << "The year is leap" << endl;
	}
	
	else if (num % 400==0)
	{
	cout << "The year is leap" << endl;
	}
	else
	{
	cout << "The year is not leap" << endl;
    }
	return 0;
}


