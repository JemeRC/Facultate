#include <cstdint>
#include <format>
#include <iostream>
#include <limits>

int main(){
    std::cout << std::format("{:<20}{:>7}{:>22}{:>22}\n", "tip", "octeti", "minim", "maxim");
    std::cout << std::format("{:<20}{:>7}{:>22}{:>22}\n", "short", sizeof(short),
                            std::numeric_limits<short>::min(),
                            std::numeric_limits<short>::max());
    std::cout << std::format("{:<20}{:>7}{:>22}{:>22}\n", "int", sizeof(int),
                            std::numeric_limits<int>::min(),
                            std::numeric_limits<int>::max());
    std::cout << std::format("{:<20}{:>7}{:>22}{:>22}\n", "long", sizeof(long),
                            std::numeric_limits<long>::min(),
                            std::numeric_limits<long>::max());
    std::cout << std::format("{:<20}{:>7}{:>22}{:>22}\n", "int32_t", sizeof(std::int32_t),
                            std::numeric_limits<std::int32_t>::min(),
                            std::numeric_limits<std::int32_t>::max());
    std::cout << std::format("{:<20}{:>7}{:>22}{:>22}\n", "bool", sizeof(bool),
                            std::numeric_limits<bool>::min(),
                            std::numeric_limits<bool>::max());
    std::cout << std::format("{:<20}{:>7}{:>22}{:>22}\n", "char", sizeof(char),
                            std::numeric_limits<char>::min(),
                            std::numeric_limits<char>::max());
    std::cout << std::format("{:<20}{:>7}{:>22}{:>22}\n", "unsigned char", sizeof(unsigned char),
                            std::numeric_limits<unsigned char>::min(),
                            std::numeric_limits<unsigned char>::max());
    std::cout << std::format("{:<20}{:>7}{:>22}{:>22}\n", "unsigned int", sizeof(unsigned int),
                            std::numeric_limits<unsigned int>::min(),
                            std::numeric_limits<unsigned int>::max());
    std::cout << std::format("{:<20}{:>7}{:>22}{:>22}\n", "unsigned long", sizeof(unsigned long),
                            std::numeric_limits<unsigned long>::min(),
                            std::numeric_limits<unsigned long>::max());
    std::cout << std::format("{:<20}{:>7}{:>22}{:>22}\n", "long long", sizeof(long long),
                            std::numeric_limits<long long>::min(),
                            std::numeric_limits<long long>::max());
    std::cout << std::format("{:<20}{:>7}{:>22}{:>22}\n", "std::int8_t", sizeof(std::int8_t),
                            std::numeric_limits<std::int8_t>::min(),
                            std::numeric_limits<std::int8_t>::max());
    std::cout << std::format("{:<20}{:>7}{:>22}{:>22}\n", "std::uint8_t", sizeof(std::uint8_t),
                            std::numeric_limits<std::uint8_t>::min(),
                            std::numeric_limits<std::uint8_t>::max());
    std::cout << std::format("{:<20}{:>7}{:>22.6e}{:>22.6e}\n", "float", sizeof(float),
                            std::numeric_limits<float>::lowest(),
                            std::numeric_limits<float>::max());
    std::cout << std::format("{:<20}{:>7}{:>22.6e}{:>22.6e}\n", "double", sizeof(double),
                            std::numeric_limits<double>::lowest(),
                            std::numeric_limits<double>::max());
    std::cout << std::format("{:<20}{:>7}{:>22.6e}{:>22.6e}\n", "long double", sizeof(long double),
                            std::numeric_limits<long double>::lowest(),
                            std::numeric_limits<long double>::max());

    std::cout << std::endl;
    // a.
    std::cout << std::format("{:<20}{:>7}{:>22}{:>22}\n", "char", sizeof(char),
                            +std::numeric_limits<char>::min(),
                            std::numeric_limits<char>::max());
    std::cout << std::endl;

    // b.
    std::cout << std::format("{:<20}{:>7}{:>30}{:>30.6e}{:>30}\n", "double", sizeof(double),
                            std::numeric_limits<double>::min(),
                            std::numeric_limits<double>::lowest(),
                            std::numeric_limits<double>::epsilon());
    
                            
    


    return 0;
}