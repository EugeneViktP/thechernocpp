// LibraryMS.cpp


#include "Book.h"
#include "Library.h"
#include <iostream>


int main()
{
    Book b1("War and Peace", "Tolstoy", 1869);
    Book b2("War and Peace2", "Tolstoy", 1870);
    Book b3("War and Peace3", "Tolstoy", 1871);
    Library lb(3);
    lb.AddBook(b1);
    lb.AddBook(b2);
    lb.AddBook(b3);
    lb.PrintAll();




    std::cin.get();
}
