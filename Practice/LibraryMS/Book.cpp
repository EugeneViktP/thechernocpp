
#include "Book.h"
#include <cstring>
#include <iostream>

	Book::Book(const char* title, const char* author, int year)
	{
		this->title = new char[strlen(title) + 1];
		strcpy_s(this->title, strlen(title) + 1, title);

		this->author = new char[strlen(author) + 1];
		strcpy_s(this->author, strlen(author) + 1, author);
		this->year = year;


	}

	Book::Book(const Book& book)
	{
		this->title = new char[strlen(book.title) + 1];
		strcpy_s(this->title, strlen(book.title) + 1, book.title);

		this->author = new char[strlen(book.author) + 1];
		strcpy_s(this->author, strlen(book.author) + 1, book.author);
		this->year = book.year;

	}
	Book::~Book()
	{
		delete[] title;
		delete[] author;
	}
	void Book::Print() const
	{
		std::cout << "\"" << title << "\" by " << author << " (" << year << ")" << std::endl;
	}