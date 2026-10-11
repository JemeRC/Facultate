#include <iostream>
#include <cstdint>

enum class Stare : std::uint8_t {Oprit, Pornit, Eroare};
enum Clasic {Oprit, Pornit, Eroare};

std::string denumire(Stare s){
    switch (s)
    {
    case Stare::Oprit:
        return static_cast<std::string>("Oprit");
        break;
    case Stare::Pornit:
        return static_cast<std::string>("Pornit");
    case Stare::Eroare:
        return static_cast<std::string>("Eroare");
    default:
        return 0;
    }
}

int main(){
    std::cout << "sizeof(Stare) = " << sizeof(Stare) << '\n';
    std::cout << "sizeof(Clasic) = " << sizeof(Clasic) << '\n';
    
    int x;
    std::cout << "x = ";
    std::cin >> x;
    Stare s = static_cast<Stare>(x);

    return 0;
}