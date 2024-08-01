/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 18:05:36 by dbarrene          #+#    #+#             */
/*   Updated: 2024/08/02 02:43:41 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

int	main(void)
{
	ClapTrap clap("baboon");
	ClapTrap trap("clapper");
	clap.takeDamage(1);
	clap.beRepaired(1);
	clap.attack("clapper");
	trap.takeDamage(3);
	trap.attack("nothing");
	trap.beRepaired(3);
	trap.takeDamage(8);
	trap.attack("thin air");
	trap.beRepaired(2);
	trap.takeDamage(50);
	trap.takeDamage(50);
}
