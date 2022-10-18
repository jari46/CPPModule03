#include "ClapTrap.hpp"

int main() {
	{
		ClapTrap a;

		for (int i = 0; i < 10 + 1; i++) {
			a.attack("stranger");
		}
		a.beRepaired(30);
	}
	{
		ClapTrap a;

		a.takeDamage(3);
		a.attack("stranger");
		a.takeDamage(300);
		a.attack("stranger");
	}
}