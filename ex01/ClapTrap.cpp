#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
	: _hitPoint(10), _energyPoint(10), _attackDamage(0) {
		std::cout << "\nClapTrap: Default Constructor called" << std::endl;
	}

ClapTrap::ClapTrap(std::string name)
	: _name(name), _hitPoint(100), _energyPoint(50), _attackDamage(20) {
		std::cout << "\nClapTrap: My constructor called" << std::endl;
	};

ClapTrap::ClapTrap(const ClapTrap& claptrap) {
	std::cout << "\nClapTrap: Copy constructor called" << std::endl;
	*this = claptrap;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& claptrap) {
	std::cout << "\nClapTrap: Copy assignment operator called" << std::endl;
	if (this != &claptrap) {
		_name = claptrap.getName();
		_hitPoint = claptrap.getHitPoint();
		_energyPoint = claptrap.getEnergyPoint();
		_attackDamage = claptrap.getAttackDamage();
	}
	return *this;
}

ClapTrap::~ClapTrap() {
		std::cout << "\nClapTrap: Destructor called" << std::endl;
}

//------------------------------------------------------------------------//

std::string ClapTrap::getName() const {
	return _name;
}

int ClapTrap::getHitPoint() const {
	return _hitPoint;
}

int ClapTrap::getEnergyPoint() const {
	return _energyPoint;
}

int ClapTrap::getAttackDamage() const {
	return _attackDamage;
}

//------------------------------------------------------------------------//

void ClapTrap::attack(const std::string &target) {
	if (_hitPoint != 0 && _energyPoint != 0) {
		std::cout << "\nClaptrap" << _name \
		<< " -- attacks " << _attackDamage << " --> " \
		<< target << std::endl;
		_energyPoint--;
	}
	else
		std::cout << "\nClaptrap" << _name \
		<< " has no hit points or energy points left.." << std::endl;
}

void ClapTrap::takeDamage(int amount) {
		std::cout << _name \
		<< " <-- damaged " << amount << std::endl;
		for (int i = 0; i < amount; i++) {
			if (_hitPoint == 0)
				break ;
			_hitPoint = _hitPoint - 1;
		}
}

void ClapTrap::beRepaired(int amount) {
	if (_hitPoint != 0 && _energyPoint != 0) {
		std::cout << _name \
		<< " repairs itself: +" << amount << std::endl;
		_hitPoint = _hitPoint + amount;
		_energyPoint--;
	}
	else {
		std::cout << _name \
		<< " has no hit points or energy points left.." << std::endl;
	}
}
