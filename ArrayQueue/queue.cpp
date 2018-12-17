#include <iostream>
#include "ArrayQueue.h"

using namespace std;

template <typename T1>
bool List<T1>::is_full()
{
	if ((m_rear) == data.end())
		return true;
	else
		return false;
}



template <typename T1> 
bool List< T1>::is_empty()
{
	if (m_front == m_rear)
		return true;
	else
		return false;
}


template <typename T1>
bool List<T1>::reset_all()
{
	array<int, 10>::iterator tmp_itr = data.begin();

	if (is_empty())
		return false;

	for (; tmp_itr != (m_rear+1); tmp_itr++)
	{
		*tmp_itr = NULL;
	}
	return true;
}


template <typename T1>
void List<T1>::print_all()
{
	array<int, 10>::iterator tmp_itr = m_front;

	cout << "=====Print All=====" << endl;

	for (; tmp_itr != m_rear; tmp_itr++)
	{
		cout << *tmp_itr;
		if ((tmp_itr + 1) != m_rear)
			cout << " -> ";
	}

	cout << endl;
	cout << "=====Print End=====" << endl;

}


template <typename T1>
bool Queue<T1>::push(const T1 data)
{
	if (is_full())
	{
		array<int, 10>::iterator tmp_itr = m_front;
		
		for (; tmp_itr != (m_rear-1); tmp_itr++)
		{
			*tmp_itr = *(tmp_itr + 1);
		}

		*(m_rear-1) = data;
		
		return true;
	}
	else
	{
		*m_rear = data;
		m_rear++;
		return true;
	}
	return false;
}


template <typename T1>
bool Queue<T1>::pop()
{
	if (is_empty())
		return false;
	else
		return true;
}


template <typename T1>
T1 Queue<T1>::front()
{
	if (pop())
		return *m_front;
}
