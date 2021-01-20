/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/20 11:16:35 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/20 16:38:27 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Peon.hpp"
#include "Victim.hpp"

int main()
{
	Sorcerer	robert("Robert", "the Magnificent");
	Victim		jim("Jimmy");
	Peon		joe("Joe");

	std::cout << "\tAnnounces:" << std::endl;
	std::cout << robert << jim << joe;
	std::cout << "\tVictim functions:" << std::endl;
	std::cout << "getPolymorphed:" << std::endl;
	jim.getPolymorphed();
	std::cout << "getName:" << jim.getName() << std::endl;
	std::cout << "\tPeon functions:" << std::endl;
	std::cout << "getPolymorphed:" << std::endl;
	joe.getPolymorphed();
	std::cout << "getName:" << joe.getName() << std::endl;
	std::cout << "\tSorcerer functions:" << std::endl;
	std::cout << "getName:" << robert.getName() << std::endl;
	std::cout << "getType:" << robert.getTitle() << std::endl;
	robert.polymorph(jim);
	robert.polymorph(joe);
	return 0;
}
