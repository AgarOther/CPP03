/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <scraeyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 12:57:18 by scraeyme          #+#    #+#             */
/*   Updated: 2025/01/09 11:17:37 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap unknown spawned!" << std::endl;
	this->_name = "Unknown";
	this->_hit_points = 10;
	this->_energy_points = 10;
	this->_attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	*this = copy;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &obj)
{
	if (this == &obj)
		return (*this);
	this->_name = obj._name;
	this->_hit_points = obj._hit_points;
	this->_energy_points = obj._energy_points;
	this->_attack_damage = obj._attack_damage;
	return (*this);
}

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
		std::cout << "ClapTrap is out of " << (this->_energy_points == 0 ? "energy" : "hit") << " points and couldn't attack!" << std::endl;
		return;
	}
	this->_energy_points--;
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->_hit_points -= amount;
	if (this->_hit_points < 0)
		this->_hit_points = 0;
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
