/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 21:32:22 by dbarrene          #+#    #+#             */
/*   Updated: 2024/08/04 19:49:06 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
	set_ad(20);
	set_hp(100);
	set_energy(50);
	std::cout << "ScavTrap named constructor called for " 
		<< get_name() << std::endl;
}

ScavTrap::ScavTrap()
{
	set_ad(20);
	set_hp(100);
	set_energy(50);
	set_name("Generic ScavTrap");
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap default destructor called for " << get_name() << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << get_name() << " is now in guard mode" << std::endl;
}
ScavTrap::ScavTrap(const ScavTrap &other)
{	
	std::cout << "ScavTrap copy constructor called" << std::endl;
	set_ad(other.get_ad());
	set_energy(other.get_energy());
	set_hp(other.get_hp());
	set_name(other.get_name());
}

void	ScavTrap::attack(const std::string &target)
{
	std::cout << "ScavTrap " << get_name() << " attacks " << target
		<< " damaging them for " << get_ad() << " hitpoints and expending one energy"
		<< std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap const& other)
{
	std::cout << "ScavTrap assignment operator called" << std::endl;
	set_name(other.get_name());
	set_ad(other.get_ad());
	set_energy(other.get_energy());
	set_hp(other.get_hp());
	return (*this);
}
