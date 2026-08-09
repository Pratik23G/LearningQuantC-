#include<iostream>

constexpr double totalWithTax(double subtotal, double taxRate) {
    return subtotal * (1.0 + taxRate);
}

int main() {

    constexpr double taxRate { 0.0875 };
    constexpr double coffeePrice { 4.50 };

    int userCoffee {};
    std::cout << "How many coffees would like to order: " << "\n";
    std::cin >> userCoffee;

    const double subtotal { coffeePrice * userCoffee };

    const double total { totalWithTax(subtotal, taxRate) };

    std::cout << "Total Bill after evrything: " << total << "\n";
    return 0;
}