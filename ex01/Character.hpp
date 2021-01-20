/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/20 12:50:42 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/20 13:08:51 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character {
	public:
		Character(void);
		Character(std::string const & name);
		Character(Character const & src);
		~Character(void);

		void					recoverAP();
		void					equip(AWeapon* w);
		void					attack(Enemy* e);
		std::string const &		getName(void) const;
		int						getAP(void) const;
		AWeapon const *			getWeapon(void) const;


		Character &				operator=(Character const & rhs);
	private:
		std::string				_name;
		int						_ap;
		AWeapon*				_weapon;
};

std::ostream &					operator<<(std::ostream & o, Character const & c);

#endif
