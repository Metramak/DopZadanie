#include <iostream>

using namespace std;

int main()
{
	char choose = 0;

	cout << "Welcome to mini-calculator!\n\n";

	while (choose != 'e')
	{
		cout << "Please choose operation (-, +, *, /), e to exit program\nOperation: ";
		cin >> choose;

		switch (choose)
		{
		case '-':
			cout << "\nFeature in development...\n\n";
			break;
		case '+':
			cout << "\nFeature in development...\n\n";
			break;
		case '/':
			cout << "\nFeature in development...\n\n";
			break;
		case '*':
			cout << "\nFeature in development...\n\n";
			break;
		case 'e':
			cout << "\nExiting...\n\n";
			break;
		default:
			cout << "\nWrong operation, try again\n\n";
			break;
		}
	}

	system("pause");

	return 0;
}