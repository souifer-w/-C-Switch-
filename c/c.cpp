#include <iostream>

using namespace std;

int main()
{

	int day;

	cout << "please enter number 1 :" << endl;
	cin >> day;



	switch (day)
	{
	case 1:

		cout << "monday" << endl;
	
		break;

	case 2:

		cout << "tuesday" << endl;

		break;

	case 3:

		cout << "wednesday" << endl;

		break;

	case 4 :

		cout << "thursay" << endl;

		break;

	default:
		cout << "monday" << endl;
	}
	return 0;



}