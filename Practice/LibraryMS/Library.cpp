
#include "Library.h"


	Library::Library(int capacity)
		: capacity(capacity)
		{
			this->books = new Book* [capacity];
			this->count = 0;

		}
	Library::~Library()
	{
		
		for (int i = 0; i < count; i++)
		{
			delete books[i];
		}
		delete[] books;
	}
	void Library::AddBook(const Book& book)
	{
		if (count < capacity)
		{
			books[count] = new Book(book);
			count++;
		}	
	}

	void Library::RemoveBook(int index)
	{
		if (index < 0 || index >= count) return;
		
		delete books[index];

		for (int i = index; i < count - 1; i++)
		{
			books[i] = books[i + 1];
		}
		count--;
	
	}
	void Library::PrintAll() const
	{
		for (int i = 0; i < count; i++)
		{
			books[i]->Print();
		}
	}