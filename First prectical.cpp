#include <iostream>
#include <cstdlib> // For atoi function

double computeSum(int n) {
    double total = 0.0;
    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0)
            total -= 1.0 / (i * i);
        else
            total += 1.0 / (i * i);
    }
    return total;
}

int main(int argc, char* argv[]) {
    int n;
    if (argc > 1) {
        n = atoi(argv[1]);
    } else {
        std::cout << "Enter the number of terms (n): ";
        std::cin >> n;
    }

    if (n <= 0) {
        std::cout << "Please enter a positive integer for n." << std::endl;
        return 1;
    }

    double seriesSum = computeSum(n);
    std::cout << "The sum of the first " << n << " terms of the series is: " << seriesSum << std::endl;

    return 0;
}
