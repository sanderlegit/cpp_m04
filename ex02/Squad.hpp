/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Squad.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/20 15:03:46 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/20 16:23:02 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP
# include <iostream>
# include "ISquad.hpp"

class Squad : public ISquad{
	public:
		Squad(void);
		Squad(Squad const & src);
		~Squad(void);

		int				getCount() const;
		ISpaceMarine*	getUnit(int i) const;
		int				push(ISpaceMarine* sm);

		Squad &			operator=(ISquad const & rhs);
	private:
		int				_unitCount;
		ISpaceMarine**	_units;
		int				_unitMax;
};

#endif
