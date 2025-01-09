/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <scraeyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 13:10:25 by scraeyme          #+#    #+#             */
/*   Updated: 2025/01/09 11:01:05 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(const ScavTrap &copy);
		ScavTrap &operator=(ScavTrap const &obj);
		~ScavTrap();
		
		ScavTrap(const std::string &name);

		void attack(const std::string &target);
		void guardGate();
	private:
		bool _is_guarding;
};
#endif