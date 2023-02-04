#include <iostream>
#include <map>

std::map<std::string, float> items;

void addItem(std::string item, float price) {
    items[item] = price;
}

void showItems() {
    std::cout << "Item" << "\t\t" << "Price" << std::endl;
    for (const auto &item : items) {
        std::cout << item.first << "\t\t" << item.second << std::endl;
    }
}

float calculateTotal(std::map<std::string, int> order) {
    float total = 0.0;
    for (const auto &item : order) {
        total += items[item.first] * item.second;
    }
    return total;
}

int main() {
    addItem("apple", 0.99);
    addItem("banana", 0.59);
    addItem("pear", 0.79);
    showItems();

    std::map<std::string, int> order;
    order["apple"] = 2;
    order["banana"] = 3;

    float total = calculateTotal(order);
    std::cout << "Total: " << total << std::endl;
    return 0;
}
