#pragma once


class Book
{
private:
	char* title;
	char* author;
	int year;
public:
	Book(const char* title, const char* author, int year);
	Book(const Book& book);
	~Book();

	void Print() const;
};
