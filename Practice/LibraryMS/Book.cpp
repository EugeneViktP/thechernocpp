
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

	const char* Book::GetTitle() const
	{
		return title;
	}
	const char* Book::GetAuthor() const
	{
		return author;
	}
	int Book::GetYear() const
	{
		return year;
	}

	Book& Book::operator=(const Book& other)
	{
		if (this == &other)
			return *this;
		delete[] title;
		delete[] author;

		this->title = new char[strlen(other.title) + 1];
		strcpy_s(this->title, strlen(other.title) + 1, other.title);

		this->author = new char[strlen(other.author) + 1];
		strcpy_s(this->author, strlen(other.author) + 1, other.author);
		this->year = other.year;

		return *this;

	}

	void Book::Print() const
	{
		std::cout << "\"" << title << "\" by " << author << " (" << year << ")" << std::endl;
	}