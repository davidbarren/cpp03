/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 17:43:53 by dbarrene          #+#    #+#             */
/*   Updated: 2024/08/03 21:36:16 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
#include <iostream>

class	ClapTrap
{
	private:
		std::string __name;
		int	__HitPoints;
		int	__Energy;
		int	__Attack_Damage;

	public:
		// member functions
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		// Constructors
		ClapTrap();
		ClapTrap(const std::string& name);
		ClapTrap(ClapTrap const& s);
		~ClapTrap();
		// Overloads
		ClapTrap& operator=(ClapTrap const& s);

};
#endif
