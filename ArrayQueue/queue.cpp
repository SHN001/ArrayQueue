#include <iostream>
#include "ArrayQueue.h"

using namespace std;

void List::print_all()
{
	array<int, 10>::iterator itr = m_data.begin();
	cout << "=====Print All=====" << endl;
	while ( itr !=m_data.end())
	{
		cout << *itr;
		itr++;
		if (itr != m_data.end)
			cout << " -> ";
	}

	cout << "=====Print End=====" << endl;
}

bool List::delete_all()
{

}

bool is_block_full();
bool is_block_empty();

bool Queue::push(const int data)
{
	if(m_head_block)
}