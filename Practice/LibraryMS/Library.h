#pragma once


#include "Book.h"

class Library
{
private:
	Book** books;
	int count;
	int capacity;
public:
	Library(int capacity);
	~Library();
	void AddBook(const Book& book);
	void PrintAll() const;
	void RemoveBook(int index);

};