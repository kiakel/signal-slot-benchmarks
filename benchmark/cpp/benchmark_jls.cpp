#include "../hpp/benchmark_jls.hpp"

const char* Jls::LibraryName = "jeffomatic jl_signal";

NOINLINE(void Jls::validate_assert(std::size_t N))
{
    return Benchmark<Signal, Jls>::validation_assert(N);
}    
NOINLINE(double Jls::construction(std::size_t N))
{
    return Benchmark<Signal, Jls>::construction(N);
}
NOINLINE(double Jls::destruction(std::size_t N))
{
    return Benchmark<Signal, Jls>::destruction(N);
}
NOINLINE(double Jls::connection(std::size_t N))
{
    return Benchmark<Signal, Jls>::connection(N);
}
NOINLINE(double Jls::emission(std::size_t N))
{
    return Benchmark<Signal, Jls>::emission(N);
}
NOINLINE(double Jls::combined(std::size_t N))
{
    return Benchmark<Signal, Jls>::combined(N);
}
NOINLINE(double Jls::threaded(std::size_t N))
{
    return 0.0;
}
