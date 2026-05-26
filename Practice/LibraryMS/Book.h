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
	const char* GetTitle() const;
	const char* GetAuthor() const;
	int GetYear() const;
	Book& operator=(const Book& other);


	void Print() const;
};
