#include "IsUnique.h"

bool isUnique(const string str)
{
	for (int i = 0; i < str.length() - 1; i++)
	{
		for (int j = i + 1; j < str.length(); j++)
		{
			if (tolower(str[i]) == tolower(str[j]))
			{
				cout << str[i] << " is the same character as " << str[j] << "; therefore, it is not a unique phrase.\n";
				return false;
			}
		}
	}
	cout << str << " is a phrase with all unique characters.\n";
	return true;
}

void IsUnique::run()
{
	string input;
	bool unique;
	cout << "Type in a phrase and I, the almighty Levi, will determine if it has repeated characters.\n";
	getline(cin, input);
	unique = isUnique(input);
	cout << unique;
}