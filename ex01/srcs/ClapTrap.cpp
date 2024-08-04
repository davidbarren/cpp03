/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 17:48:31 by dbarrene          #+#    #+#             */
/*   Updated: 2024/08/04 19:44:23 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap(){
	std::cout << "ClapTrap default constructor called" << std::endl;
}
ClapTrap::ClapTrap(const std::string &name): __name(name){
	this->__HitPoints = 10;
	this->__Energy = 10;
	this->__Attack_Damage = 0;
	std::cout << "ClapTrap named constructor called for " << this->__name << std::endl;

}
ClapTrap::ClapTrap(ClapTrap const& s){
	this->__name = s.__name;
	this->__Energy = s.__Energy;
	this->__HitPoints = s.__HitPoints;
	this->__Attack_Damage = s.__Attack_Damage;
	std::cout << "ClapTrap copy constructor called" << std::endl;
}
ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap default destructor called for "
		<< this->__name << std::endl;
}
ClapTrap& ClapTrap::operator=(ClapTrap const& other)
{
	std::cout << "ClapTrap assignment operator called" << std::endl;
	this->__name = other.get_name();
	this->__Energy = other.get_energy();
	this->__HitPoints = other.get_hp();
	this->__Attack_Damage = other.get_ad();
	return (*this);
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->__HitPoints < 1 || this->__Energy < 1)
		return ;
	this->__Energy -= 1;
	std::cout << "ClapTrap " << this->__name << " attacks " << target << " causing "
		<< this->__Attack_Damage << " points of damage and expending one energy"
		<< " leaving " << this->__name << " with " << this->__Energy
		<< " energy points" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->__HitPoints < 1)
	{
		std::cout << this->__name << " is dead and cannot be interacted with" << std::endl;
		return ;
	}
	this->__HitPoints -= amount;
	std::cout << this->__name << " has lost " << amount << " hit points" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->__HitPoints < 1 || this->__Energy < 1)
		return ;
	this->__HitPoints += amount;
	this->__Energy -= 1;
	std::cout << this->__name << " has repaired " << amount << " hit points and lost"
		<< " one energy point, leaving him with " << this->__Energy <<
		" energy points" << " and " << this->__HitPoints << " hit points" << std::endl;;
}

const std::string& ClapTrap::get_name() const
{
	return (__name);
}

int ClapTrap::get_hp() const{
	return (__HitPoints);
}

int ClapTrap::get_energy() const{
	return (__Energy);
}
int ClapTrap::get_ad() const{
	return (__Attack_Damage);
}

void	ClapTrap::set_hp(unsigned int amount) 
{
	__HitPoints = amount;
}

void	ClapTrap::set_ad(unsigned int amount) 
{
	__Attack_Damage = amount;
}

void	ClapTrap::set_energy(unsigned int amount) 
{
	__Energy = amount;
}

void	ClapTrap::set_name(const std::string &name)
{
	__name = name;
}

void	ClapTrap::print_attributes(){
	std::cout << "Attribute list for ClapTrap class/derived classes:" << std::endl;
	std::cout << "name: " << __name << std::endl;
	std::cout << "Dmg: " << __Attack_Damage << std::endl;
	std::cout << "Energy: "<< __Energy << std::endl;
	std::cout << "Hp: "<< __HitPoints << std::endl;
}
