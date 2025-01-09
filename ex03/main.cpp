/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <scraeyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 12:57:28 by scraeyme          #+#    #+#             */
/*   Updated: 2025/01/09 13:18:17 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap logan("Logan");

	logan.attack("Paul");
	logan.takeDamage(5);
	logan.beRepaired(5);
	logan.highFivesGuys();
	logan.whoAmI();
}
