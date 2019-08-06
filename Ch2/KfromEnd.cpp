#include "KfromEnd.h"

void kfromEnd(LinkedList list, int k)
{
	cout << "\n" << list.kfromEnd(k) << "\n";
	list.data();
}

void KfromEnd::run()
{
	LinkedList list;
	list.data();

	//cout << "Type in a key and I, the almighty Levi will remove it from the linked list.\n";
	//getline(cin, input);
	int k;
	string input;
	do {
		cout << "Input an integer k and I, the almighty Levi, wil remove the kth from last element.";
		getline(cin, input);
		try {
			k = stoi(input);
			break;
		}
		catch (invalid_argument e){
			cout << "Please type an integer.\n";
		}
	} while (true);
	kfromEnd(list, k);

}