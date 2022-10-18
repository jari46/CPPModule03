#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
	ScavTrap me("Me");
	ScavTrap serena("Serena");

	me.attack("Serena");
	serena.takeDamage(me.getAttackDamage());

	serena.attack("Me");
	me.takeDamage(serena.getAttackDamage());

	me.displayInfo();
	serena.displayInfo();

	for (int i = 0; i < 6; i++) {
		serena.attack("Me");
		me.takeDamage(serena.getAttackDamage());
	}

	me.displayInfo();
	serena.displayInfo();

	me.attack("Serena");
	me.beRepaired(30);

	serena.beRepaired(30);
	serena.displayInfo();

	me.guardGate();
	serena.guardGate();
}