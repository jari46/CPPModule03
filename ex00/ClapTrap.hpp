#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

#include <iostream>

class ClapTrap {
	private:
		std::string _name;
		int _hitPoint;//the health
		int _energyPoint;
		int _attackDamage;
		//can’t do anything if it has no hit points or energy points left.

	public:
		ClapTrap();
		ClapTrap(const ClapTrap& claptrap);
		ClapTrap& operator=(const ClapTrap& claptrap);
		~ClapTrap();

		std::string getName() const;
		int getHitPoint() const;
		int getEnergyPoint() const;
		int getAttackDamage() const;

		//it causes its target to lose <attack damage> hit points.
		//cost 1 energy point
		void attack(const std::string &target);
		
		void takeDamage(int amount);
		
		//it gets <amount> hit points back.
		//cost 1 energy point
		void beRepaired(int amount);
};

#endif /*CLAP_TRAP_HPP*/