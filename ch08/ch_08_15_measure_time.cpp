// ch_08_15_measure_time.cpp

#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <chrono>

using namespace std;

class   Timer;
{
    using   clock_t = std::chrono::high_resolution_clock;
    using   secont_t = std::chrono::duration<double, std::ratio<1>>;

    std::chrono::time_point<clock_t> start_time = clock_t::now();

public:
    void    elapsed()
    {
        
    }
};

int main()
{
    return (0);
}