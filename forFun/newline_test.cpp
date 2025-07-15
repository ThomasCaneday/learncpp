#include <chrono>
#include <iostream>

double sim_endl() {
    auto start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < 1000000; i++) {
        std::cout << i << std::endl;
    }
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = end - start;
    std::cout << "Time taken: " << duration.count() << " seconds" << std::endl;
    return duration.count();
}

double sim_n() {
    auto start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < 1000000; i++) {
        std::cout << i << '\n';
    }
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = end - start;
    std::cout << "Time taken: " << duration.count() << " seconds" << std::endl;
    return duration.count();
}

int main() {
    std::cout << "Testing endl:\n";
    double res_endl = sim_endl();

    std::cout << "Testing n:\n";
    double res_n = sim_n();

    std::cout << "Results from endl: " << res_endl << '\n';
    std::cout << "Results from n: " << res_n << '\n';

    return 0;
}