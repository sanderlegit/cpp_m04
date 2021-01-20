/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sorcerer.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/20 11:16:18 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/20 11:48:39 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP
# include <iostream>
# include "Victim.hpp"

class Sorcerer {
	public:
		Sorcerer(std::string name_, std::string title_);
		Sorcerer(Sorcerer const & src);
		~Sorcerer(void);

		std::string const &		getName(void) const;
		std::string const &		getTitle(void) const;
		void					polymorph(Victim const & v) const;

		Sorcerer &			operator=(Sorcerer const & rhs);
	private:
		Sorcerer(void);

		std::string		_name;
		std::string		_title;
};

std::ostream &	operator<<(std::ostream & o, Sorcerer const & s);

#endif
