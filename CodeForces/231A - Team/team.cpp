#include <iostream>
using namespace std;

int main()
{
	int b, s, n, i, a[3];
	cin >> n;
	b = 0;

	while (n--)
	{
		s=0;

		for (i=0; i<3; i++)
		{	
			cin >> a[i];
			s += a[i];
		}

		if (s>1)
		{
			b++;
		}
	}
	cout << b;
	return 0;
}