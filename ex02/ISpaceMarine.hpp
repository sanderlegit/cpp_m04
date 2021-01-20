/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ISpaceMarine.hpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/20 14:55:56 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/20 14:57:35 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISPACEMARINE_HPP
# define ISPACEMARINE_HPP

class ISpaceMarine {
	public:
		virtual 				~ISpaceMarine() {}
		virtual ISpaceMarine*	clone() const = 0;
		virtual void 			battleCry() const = 0;
		virtual void 			rangedAttack() const = 0;
		virtual void 			meleeAttack() const = 0;
};

#endif
