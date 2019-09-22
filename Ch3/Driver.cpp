#include "Driver.h"

void threeStacks() {
	ManyStacks stacks = ManyStacks();
	generateVals(&stacks);
}

void generateVals(ManyStacks *stacks) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			cout << "Pushing " << j << " to stack number " << i << "\n";
			stacks->push(i, j);
			//cout << stacks->pop(i) << "\n";
			//cout << stacks->peek(i) << "\n";
		}
	}
}

int main(int argc, char* argv[])
{
	bool valid;
	string inputStr;
	functionMap funcs;

	funcs.emplace("ManyStacks", threeStacks);

	do
	{
		cout << "Hey you! Type in the name of a function! 'exit' to leave\n";
		cout << "List of functions:\n";
		printFuncs(funcs);
		getline(cin, inputStr);

		if (inputStr == "exit")
		{
			break;
		}

		valid = runFunc(inputStr, funcs);
	} while (!valid);

	return 0;
}

bool runFunc(const string inputStr, const functionMap& funcs)
{
	auto iter = funcs.find(inputStr);
	if (iter == funcs.end())
	{
		cout << "Wrong name dingus.\n";

		return false;
	}
	else
	{
		(*iter->second)();
		return true;
	}
}

void printFuncs(const functionMap& funcs)
{
	for (auto i = funcs.begin(); i != funcs.end(); i++)
	{
		cout << i->first << "\n";
	}
}