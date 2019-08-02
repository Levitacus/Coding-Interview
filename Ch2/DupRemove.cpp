#include "DupRemove.h"

void dupRemove(LinkedList list)
{
	list.dupRemove();
	cout << "Hi!" << "\n";
	list.data();
}

void DupRemove::run()
{
	LinkedList list;
	list.data();

	//cout << "Type in a key and I, the almighty Levi will remove it from the linked list.\n";
	//getline(cin, input);
	
	string input;
	do {
		cout << "Press Enter and I, the almighty Levi shall remove the duplicates in this list";
		getline(cin, input);
	} while (input.length() != 0);
	dupRemove(list);

}