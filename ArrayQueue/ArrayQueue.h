#pragma once

#include <array>

struct Block
{
	std::array<int, 10> data;
	std::array<int, 10>::iterator data_itr;
	Block* next_block;
};

class List
{
	Block* m_head_block;
public:
	List() :m_head_block(nullptr) {}
	~List() {}

	virtual bool push(const int data) = 0;
	virtual bool pop() = 0;
	
	bool delete_all();
	bool is_block_full();
	bool is_block_empty();
	void print_all();

	Block& get_head_block() const;
	int get_head_data() const;
	int get_data_itr() const;
	
	bool set_data(const int data);
	bool set_data_itr();
	bool set_m_head_block
	bool set_next_block();
};

class Queue : public List
{
public:
	Queue() : List() {}
	~Queue() {}
	
	virtual bool push(const int data);
	virtual bool pop();
};