/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AWeapon.hpp                                       e8'   8   '8e          */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/20 12:11:59 by averheij      #+#    #+#                 */
/*   Updated: 2021/11/18 16:07:29 by dries               **ee8ee**            */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP
# include <iostream>

class AWeapon {
	public:
		AWeapon(void);
		AWeapon(std::string const & name, int apcost, int damage);
		AWeapon(AWeapon const & src);
		virtual ~AWeapon(void);

		std::string const &		getName(void) const;
		int						getAPCost(void) const;
		int						getDamage(void) const;
		virtual void			attack(void) const = 0;

		AWeapon &				operator=(AWeapon const & rhs);
	private:
		std::string		_name;
		int				_apcost;
		int				_damage;
};

#endif
