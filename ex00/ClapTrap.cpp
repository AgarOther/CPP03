/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <scraeyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 12:57:18 by scraeyme          #+#    #+#             */
/*   Updated: 2025/01/08 13:09:13 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string &name)
{
	std::cout << "ClapTrap " << name << " spawned!" << std::endl;
	this->_name = name;
	this->_hit_points = 10;
	this->_energy_points = 10;
	this->_attack_damage = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->_name << " destroyed!" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (this->_energy_points <= 0 || this->_hit_points <= 0)
	{
		std::cout << "ClapTrap is out of " << ((this->_energy_points == 0) ? "energy" : "hit") << " points and couldn't attack!" << std::endl;
		return;
	}
	this->_energy_points--;
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->_hit_points -= amount;
	std::cout << "ClapTrap " << this->_name << " took " << amount << " damage! It now has " << this->_hit_points << " hit points." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy_points <= 0 || this->_hit_points <= 0)
	{
		std::cout << "ClapTrap is out of " << ((this->_energy_points == 0) ? "energy" : "hit") << " points and couldn't repair itself!" << std::endl;
		return;
	}
	this->_energy_points--;
	this->_hit_points += amount;
	std::cout << "ClapTrap " << this->_name << " was repared of " << amount << " damage! It now has " << this->_hit_points << " hit points." << std::endl;
}
