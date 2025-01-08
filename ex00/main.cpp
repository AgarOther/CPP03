/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <scraeyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 12:57:28 by scraeyme          #+#    #+#             */
/*   Updated: 2025/01/08 13:08:58 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap logan("Logan");

	logan.attack("Paul");
	logan.takeDamage(5);
	logan.beRepaired(5);
	logan.takeDamage(10);
	logan.beRepaired(5);
	logan.attack("Paul");
}
