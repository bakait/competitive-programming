#include <iostream>
#include <algorithm>
using namespace std;
void permutations(string s, int n)
{

	sort(s.begin(), s.end());
	while (1)
	{
		cout << s << " ";
		int i = n - 1;
		while (s[i-1] >= s[i])
		{
			if (--i == 0)
				return;
		}
		int j = n - 1;
		while (j > i && s[j] <= s[i - 1])
			j--;
		swap(s[i - 1], s[j]);
		reverse (s.begin() + i, s.end());
	}
}

int main()
{
	string s = "12345";
	int n = s.length();
	permutations(s, n);
	return 0;
}
