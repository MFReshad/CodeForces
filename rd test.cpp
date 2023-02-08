#include <iostream>
#include <cmath>

int main() {
    int n;
    std::cin >> n;
    double log_n = log2(n);
    std::cout<<log_n<<" ";
    int log_n_int = (int)log_n;
    std::cout<<log_n_int<<" ";
    if (log_n == log_n_int) {
        std::cout << "True\n";
    } else {
        std::cout << "False\n";
    }
    return 0;
}
