/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PowerFist.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/20 12:24:22 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/20 12:39:31 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP
# include "AWeapon.hpp"

class PowerFist : public AWeapon {
	public:
		PowerFist(void);
		PowerFist(PowerFist const & src);
		~PowerFist(void);

		void			attack(void) const;

		PowerFist &		operator=(PowerFist const & rhs);
	private:
};

#endif
