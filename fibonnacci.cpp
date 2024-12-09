#include <bits/stdc++.h>
using namespace std;

// Fibonacci Memorization;
size_t fibonacci(const size_t &n)
{
    static vector<size_t> fibonacci_value(162, UINT64_MAX);
    if (n == 0 || n == 1)
        return n;
    if (fibonacci_value[n] == -1)
        fibonacci_value[n] = fibonacci(n - 1) + fibonacci(n - 2);
    return fibonacci_value[n];
}

size_t fibonacci_normal(const size_t &n)
{
    if (n == 0 || n == 1)
        return n;
    return fibonacci_normal(n - 1) + fibonacci_normal(n - 2);
}

int main()
{
    // Compare times betoween both functions
    const size_t n = 41; // You can change this value to test with different Fibonacci numbers

    for (long long i = 0; i < 100'000'000; i++)
        ;

    // Measure time for the memoized Fibonacci function
    auto start_memoized = std::chrono::high_resolution_clock::now();
    long long result_memoized = fibonacci(n);
    auto end_memoized = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration_memoized = end_memoized - start_memoized;

    std::cout << "Fibonacci(" << n << ") using memoization: " << result_memoized << " (Time: " << duration_memoized.count() * 1000 << " ms)" << std::endl;

    // Measure time for the normal Fibonacci function
    auto start_normal = std::chrono::high_resolution_clock::now();
    long long result_normal = fibonacci_normal(n);
    auto end_normal = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration_normal = end_normal - start_normal;

    // Output results
    std::cout << "Fibonacci(" << n << ") using normal recursion: " << result_normal << " (Time: " << duration_normal.count() * 1000 << " ms)" << std::endl;

    return 0;
}
