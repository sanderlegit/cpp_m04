/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Victim.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/20 11:16:24 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/20 11:46:32 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP
# include <iostream>

class Victim {
	public:
		Victim(void);
		Victim(std::string name_);
		Victim(Victim const & src);
		~Victim(void);

		std::string	const &		getName(void) const;
		void					getPolymorphed(void) const;

		Victim &				operator=(Victim const & rhs);
	 protected:
		std::string		_name;
};

std::ostream &			operator<<(std::ostream & o, Victim const & v);

#endif
