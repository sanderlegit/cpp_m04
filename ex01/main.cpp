/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/20 12:32:49 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/20 16:44:26 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"

int main() {
	Character*		me = new Character("me");

	std::cout << *me;

	Enemy*			a = new SuperMutant();
	Enemy*			b = new RadScorpion();
	AWeapon*		pr = new PlasmaRifle();
	AWeapon*		pf = new PowerFist();

	std::cout << std::endl << "\tUnarmed attack" << std::endl;
	me->attack(a);
	std::cout << std::endl << "\tBasic equip/ attack" << std::endl;
	me->equip(pr);
	std::cout << *me;
	me->attack(a);

	std::cout << std::endl << "\tSupermutant damage reduction" << std::endl;
	me->equip(pf);
	std::cout << *me;
	std::cout << "SuperMutant has " << a->getHP() << "HP" << std::endl;
	me->attack(a);
	std::cout << "SuperMutant has " << a->getHP() << "HP" << std::endl;
	std::cout << "PowerFist does " << pf->getDamage() << " damage and requires " << pf->getAPCost() << " AP" << std::endl;
	std::cout << *me;

	std::cout << std::endl << "\tKilling an enemy" << std::endl;
	me->attack(a);
	me->attack(a);
	me->attack(a);

	std::cout << std::endl << "\tAP Recovery" << std::endl;
	std::cout << *me;
	std::cout << "Recovering AP" << std::endl;
	me->recoverAP();
	std::cout << *me;

	std::cout << std::endl << "\tMore weapon and enemy interaction" << std::endl;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);

	me->equip(pf);
	std::cout << *me;
	me->attack(b);
	me->attack(b);
	me->recoverAP();
	me->attack(b);


	std::cout << std::endl << "\tAP does not go over max" << std::endl;
	std::cout << *me;
	std::cout << "Recovering AP" << std::endl;
	me->recoverAP();
	std::cout << *me;
	std::cout << "Recovering AP" << std::endl;
	me->recoverAP();
	std::cout << *me;
	std::cout << "Recovering AP" << std::endl;
	me->recoverAP();
	std::cout << *me;
	std::cout << "Recovering AP" << std::endl;
	me->recoverAP();
	std::cout << *me;
	std::cout << "Recovering AP" << std::endl;
	me->recoverAP();
	std::cout << *me;
	std::cout << "Recovering AP" << std::endl;
	me->recoverAP();
	std::cout << *me;

	delete me;
	delete pr;
	delete pf;
	return (0);
}

//int main() {
	//Character* me = new Character("me");

	//std::cout << *me;

	//Enemy* b = new RadScorpion();
	//AWeapon* pr = new PlasmaRifle();
	//AWeapon* pf = new PowerFist();

	//me->equip(pr);
	//std::cout << *me;
	//me->equip(pf);
	//me->attack(b);
	//std::cout << *me;
	//me->equip(pr);
	//std::cout << *me;
	//me->attack(b);
	//std::cout << *me;
	//me->attack(b);
	//std::cout << *me;
	//return 0;
//}
