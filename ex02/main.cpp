/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/20 15:51:34 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/20 16:30:46 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int		main(void) {
	ISpaceMarine*	space1 = new TacticalMarine;
	ISpaceMarine*	space2 = new AssaultTerminator;
	ISpaceMarine*	space3;
	ISquad*			sqd1 = new Squad;
	Squad			sqd2;
	ISquad*			sqd3;


	std::cout << std::endl << "\tClone" << std::endl;
	space3 = space1->clone();
	std::cout << space1 << std::endl;
	std::cout << space3 << std::endl;
	delete space3;

	std::cout << std::endl << "\tTacticalMarine:" << std::endl;
	space1->battleCry();
	space1->rangedAttack();
	space1->meleeAttack();
	delete space1;
	std::cout << std::endl << "\tAssaultTerminator:" << std::endl;
	space2->battleCry();
	space2->rangedAttack();
	space2->meleeAttack();
	delete space2;
	std::cout << std::endl << "\tTesting initial" << std::endl;
	std::cout << "Squad count: " << sqd1->getCount() << std::endl;
	std::cout << "Squad unit 0: " << sqd1->getUnit(0) << std::endl;
	std::cout << "Squad unit 1: " << sqd1->getUnit(1) << std::endl;
	std::cout << std::endl << "\tFilling squad one" << std::endl;
	for(int i = 0; i < 10; i++) {
		sqd1->push(new TacticalMarine);
		sqd1->push(new AssaultTerminator);
	}
	std::cout << std::endl << "\tCopy squad one to squad two (= overload)" << std::endl;
	sqd2 = *sqd1;
	std::cout << std::endl << "\tCopy squad two to three (copy constructor)" << std::endl;
	sqd3 = new Squad(sqd2);
	for(int i = 0; i < sqd2.getCount(); i++) {
		std::cout << "Squad1[" << i << "]:" << sqd1->getUnit(i) << std::endl;
		std::cout << "Squad2[" << i << "]:" << sqd2.getUnit(i) << std::endl;
		std::cout << "Squad3[" << i << "]:" << sqd3->getUnit(i) << std::endl;
	}
	std::cout << std::endl << "\tDelete 1" << std::endl;
	delete sqd1;
	std::cout << std::endl << "\tDelete 3" << std::endl;
	delete sqd3;
	std::cout << std::endl << "\tScope end delete 2" << std::endl;
	return (0);
}

//int main()
//{
	//ISpaceMarine* bob = new TacticalMarine;
	//ISpaceMarine* jim = new AssaultTerminator;
	//ISquad* vlc = new Squad;

	//vlc->push(bob);
	//vlc->push(jim);
	//for (int i = 0; i < vlc->getCount(); ++i) {
		//ISpaceMarine* cur = vlc->getUnit(i);
		//cur->battleCry();
		//cur->rangedAttack();
		//cur->meleeAttack();
	//}
	//delete vlc;
	//return 0;
//}
