#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << "\nScavTrap: Default Constructor called\n" << std::endl;
	displayInfo();
}

ScavTrap::ScavTrap(std::string name)
	: ClapTrap(name) {
	std::cout << "\nScavTrap: My Constructor called" << std::endl;
	_hitPoint = 100;
	_energyPoint = 50;
	_attackDamage = 20;
	displayInfo();
};

ScavTrap::ScavTrap(const ScavTrap& scavtrap) {
	*this = scavtrap;
	std::cout << "\nScavTrap: Copy constructor called" << std::endl;
	displayInfo();
}

ScavTrap& ScavTrap::operator=(const ScavTrap& scavtrap) {
	std::cout << "\nScavTrap: Copy assignment operator called" << std::endl;
	_name = scavtrap.getName();
	_hitPoint = scavtrap.getHitPoint();
	_energyPoint = scavtrap.getEnergyPoint();
	_attackDamage = scavtrap.getAttackDamage();
	return *this;
}

ScavTrap::~ScavTrap() {
		std::cout << "\nScavTrap: Destructor called" << std::endl;
}

//------------------------------------------------------------------------//

void ScavTrap::attack(const std::string &target) {
	if (_hitPoint != 0 && _energyPoint != 0) {
		std::cout << "\nScavtrap" << _name \
		<< " -- attacks " << _attackDamage << " --> " \
		<< target << std::endl;
		_energyPoint--;
	}
	else
		std::cout << "\nScavtrap" << _name \
		<< " has no hit points or energy points left.." << std::endl;
}

void ScavTrap::displayInfo() const {
	std::cout << "\n * ScavTrap * "\
	<< "\nName: " << _name \
	<< "\nHit Point: " << _hitPoint \
	<< "\nEnergy Point: " << _energyPoint \
	<< "\nAttack Damage: " << _attackDamage << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << "\n(ScavTrap " << _name << " is now in Gate keeper mode)" << std::endl;
}
