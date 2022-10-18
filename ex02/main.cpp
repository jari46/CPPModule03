#include "FragTrap.hpp"

int main() {
	FragTrap me("Me");
	FragTrap serena("Serena");

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

	me.highFivesGuys();
	serena.highFivesGuys();
}