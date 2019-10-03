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
		}
	}
}

void minStack() {
	Stack stack = Stack();
	createStack(&stack);
}

void createStack(Stack* stack) {
	for (int i = 0; i < stack->getCapacity()+2; i++) {
		try {
			cout << "Pushing " << (5 - i) << " to the stack.\n";
			cout << "Min = " << stack->getMin() << "\n";
			stack->push(5 - i);
		}
		catch (exception e){
			cout << e.what();
		}
	}
	for (int j = 0; j < stack->getCapacity()+2; j++) {
		try {
			cout << "Popping " << stack->pop() << "\n";
		}
		catch (exception e) {
			cout << e.what();
		}
	}
}

int main(int argc, char* argv[])
{
	bool valid;
	string inputStr;
	functionMap funcs;

	funcs.emplace("ManyStacks", threeStacks);
	funcs.emplace("MinStack", minStack);

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