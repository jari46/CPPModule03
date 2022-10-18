#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

#include <iostream>

class ClapTrap {
	protected:/* changed */
		std::string _name;
		int _hitPoint;
		int _energyPoint;
		int _attackDamage;

	public:
		ClapTrap();
		ClapTrap(std::string name);/* added */
		ClapTrap(const ClapTrap& claptrap);
		ClapTrap& operator=(const ClapTrap& claptrap);
		~ClapTrap();

		std::string getName() const;
		int getHitPoint() const;
		int getEnergyPoint() const;
		int getAttackDamage() const;

		void attack(const std::string &target);
		void takeDamage(int amount);
		void beRepaired(int amount);
};

#endif /*CLAP_TRAP_HPP*/