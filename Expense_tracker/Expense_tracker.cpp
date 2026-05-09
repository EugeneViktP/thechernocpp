// Expense_tracker.cpp

#include <iostream>
#include <string>
#include <vector>

class Expense
{
private:
    int id;
    static int nextId;
    std::string title;
    double amount;


public:
    Expense(const std::string& expense, double expenseAmount)
    {
        this->id = nextId++;
        this->title = expense;
        this->amount = expenseAmount;
    }

    void display()
    {
        std::cout << id << ": " << title << " " << amount << std::endl;
    }
};

int Expense::nextId = 1;



class ExpenseTracker
{
private:
    std::vector<Expense> expenses;

public:
    void addExpense(const std::string& title, double amount)
    {
        expenses.push_back(Expense(title, amount));
    }

    void listExpenses()
    {
        for (int i = 0; i < expenses.size(); i++)
        {
            expenses[i].display();
        }

    }

};

int main()
{
    std::cout << "Program started\n";
    ExpenseTracker exptr;
    exptr.addExpense("Mango", 3.4);
    exptr.addExpense("Apple", 4.5);
    exptr.listExpenses();
    
    std::cin.get();
}

