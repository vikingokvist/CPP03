
#include "DiamondTrap.hpp"

int main() 
{
    std::cout << "\n=== Construction Order ===" << std::endl;
    DiamondTrap diamond("DIAMOND");

    std::cout << "\n=== DiamondTrap Tests ===" << std::endl;
    diamond.whoAmI();
    diamond.attack("boss");
    diamond.whoAmI(); 
    

    std::cout << "\n=== Destruction Order ===" << std::endl;
    return (0);
}
