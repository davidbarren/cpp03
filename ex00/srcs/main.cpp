/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 18:05:36 by dbarrene          #+#    #+#             */
/*   Updated: 2024/08/04 19:46:18 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

int	main(void)
{
	ClapTrap clap("baboon");
	ClapTrap slap;
	slap = clap;
	clap.takeDamage(1);
	clap.beRepaired(1);
	clap.attack("clapper");
	slap.takeDamage(3);
	slap.attack("nothing");
	slap.beRepaired(3);
	slap.takeDamage(8);
	slap.attack("thin air");
	slap.beRepaired(2);
	slap.takeDamage(50);
	slap.takeDamage(50);
}
