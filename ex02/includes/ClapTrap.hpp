/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 17:43:53 by dbarrene          #+#    #+#             */
/*   Updated: 2024/08/05 12:53:29 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
#include <iostream>

class	ClapTrap
{
	private:
	protected:
		std::string __name;
		int	__HitPoints;
		int	__Energy;
		int	__Attack_Damage;
		/*
		int get_hp()const;
		int get_energy()const;
		int get_ad()const;
		void	set_hp(unsigned int amount);
		const std::string &get_name()const;
		void	set_energy(unsigned int amount);
		void	set_ad(unsigned int amount);
		void	set_name(const std::string &name);
		*/
	public:
		// member functions
		void	print_attributes();
		virtual void	attack(const std::string& target);
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
