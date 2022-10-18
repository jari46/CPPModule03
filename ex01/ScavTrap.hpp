#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& scavtrap);
		ScavTrap& operator=(const ScavTrap& scavtrap);
		~ScavTrap();

		void attack(const std::string &target);/* overriding */

		void guardGate();/* added */

		void displayInfo() const;/* added */
};

#endif /*SCAV_TRAP_HPP*/