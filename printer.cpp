#include <iostream>
#include <string>
#include <map>

std::map<std::string, float> expenses;

void addExpense(std::string item, float amount) {
expenses[item] = amount;
}

void showExpenses() {
std::cout << "Item" << "\t\t" << "Amount" << std::endl;
for (const auto &expense : expenses) {
std::cout << expense.first << "\t\t" << expense.second << std::endl;
}
}

int main() {
std::string item;
float amount;
char choice;
do {
    std::cout << "Enter item name: ";
    std::cin >> item;
    std::cout << "Enter item price: ";
    std::cin >> amount;

    addExpense(item, amount);

    std::cout << "Do you want to add another item? (y/n): ";
    std::cin >> choice;
} while (choice == 'y');

showExpenses();

return 0;
}
