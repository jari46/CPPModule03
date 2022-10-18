#include "FragTrap.hpp"

FragTrap::FragTrap() {
	std::cout << "\nFragTrap: Default Constructor called\n" << std::endl;
	displayInfo();
}

FragTrap::FragTrap(std::string name)
	: ClapTrap(name) {
	std::cout << "\nFragTrap: My Constructor called" << std::endl;
	_hitPoint = 100;
	_energyPoint = 100;
	_attackDamage = 30;
	displayInfo();
};

FragTrap::FragTrap(const FragTrap& FragTrap) {
	*this = FragTrap;
	std::cout << "\nFragTrap: Copy constructor called" << std::endl;
	displayInfo();
}

FragTrap& FragTrap::operator=(const FragTrap& fragtrap) {
	std::cout << "\nfragtrap: Copy assignment operator called" << std::endl;
	_name = fragtrap.getName();
	_hitPoint = fragtrap.getHitPoint();
	_energyPoint = fragtrap.getEnergyPoint();
	_attackDamage = fragtrap.getAttackDamage();
	return *this;
}

FragTrap::~FragTrap() {
		std::cout << "\nFragTrap: Destructor called" << std::endl;
}

//------------------------------------------------------------------------//

void FragTrap::attack(const std::string &target) {
	if (_hitPoint != 0 && _energyPoint != 0) {
		std::cout << "\nFragTrap" << _name \
		<< " -- attacks " << _attackDamage << " --> " \
		<< target << std::endl;
		_energyPoint--;
	}
	else
		std::cout << "\nFragTrap" << _name \
		<< " has no hit points or energy points left.." << std::endl;
}

void FragTrap::displayInfo() const {
	std::cout << "\n * FragTrap * "\
	<< "\nName: " << _name \
	<< "\nHit Point: " << _hitPoint \
	<< "\nEnergy Point: " << _energyPoint \
	<< "\nAttack Damage: " << _attackDamage << std::endl;
}

void FragTrap::highFivesGuys(void) {
	std::cout << _name << ": hi! five! me!" << std::endl;
}