#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main() {
    // std::cout << "=== ClapTrap Tests ===" << std::endl;
    // ClapTrap clap("Clappy");
    // clap.attack("target");
    // clap.takeDamage(5);
    // clap.beRepaired(3);
    // clap.takeDamage(10);
    // clap.attack("target"); // Should not attack since it's dead

    // std::cout << "\n=== ScavTrap Tests ===" << std::endl;
    // ScavTrap scav("Scavvy");
    // scav.attack("enemy");
    // scav.takeDamage(20);
    // scav.beRepaired(10);
    // scav.guardGate();
    // scav.guardGate(); // Toggle off
    // scav.takeDamage(100); // Should be dead now
    // scav.attack("enemy"); // Should not attack

    // std::cout << "\n=== FragTrap Tests ===" << std::endl;
    // FragTrap frag("Fraggy");
    // frag.attack("monster");
    // frag.highFivesGuys();
    // frag.takeDamage(50);
    // frag.beRepaired(20);
    // frag.takeDamage(100); // Should be dead now
    // frag.highFivesGuys(); // Should still work

    std::cout << "\n=== DiamondTrap Tests ===" << std::endl;
    DiamondTrap diamond("DIAMOND");
    diamond.whoAmI();
    diamond.attack("boss");
    diamond.highFivesGuys();
    // diamond.beRepaired(15);
    // diamond.takeDamage(100); // Should be dead now
    diamond.whoAmI(); // Should still print its names

    std::cout << "\n=== Destruction Order ===" << std::endl;
    return 0;
}
