#include <iostream>

int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int count;
    std::cout << "Enter the number of terms in the Fibonacci series: ";
    std::cin >> count;

    std::cout << "Fibonacci series:\n";
    for (int i = 0; i < count; i++) {
        std::cout << fibonacci(i) << " ";
    }

    return 0;
}
