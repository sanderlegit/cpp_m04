/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Enemy.hpp                                         e8'   8   '8e          */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/20 12:26:38 by averheij      #+#    #+#                 */
/*   Updated: 2021/11/18 16:13:39 by dries               **ee8ee**            */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP
# include <iostream>

class Enemy {
	public:
		Enemy(void);
		Enemy(int hp, std::string const & type);
		Enemy(Enemy const & src);
		virtual ~Enemy(void);

		std::string const &	getType(void) const;
		int					getHP(void) const;
		virtual void		takeDamage(int d);

		Enemy &		operator=(Enemy const & rhs);
	private:
		int					_hp;
		std::string			_type;
};

#endif
