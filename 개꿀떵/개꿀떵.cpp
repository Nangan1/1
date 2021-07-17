#include <iostream>
using namespace std;

int main()
{
	int a;
	char b;
	int c;
	int ab;
	int z = 1;

	cin >> a;
	cin >> b;
	cin >> c;

	while(b != 'e')
	{
	
		if (z != 1)
		{
			cin >> a;
			cin >> b;
			cin >> c;
		}

		if (b == '+')
		{
			ab = a + c;
		}
		else if (b == '-')
		{
			ab = a - c;
		}
		else if (b == '*')
		{
			ab = a * c;
		}
		else if (b == '/')
		{
			ab = a / c;
		}
		else if (b != 'e')
		{
			cout << "error";
			return 0;
		}
		else
		{
			return 0;
		}
		z += 1;
		cout << ab;
	}
	return 0;
}
