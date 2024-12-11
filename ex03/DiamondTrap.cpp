/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 00:15:54 by tashiget          #+#    #+#             */
/*   Updated: 2024/12/11 00:15:54 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.h"

DiamondTrap::DiamondTrap() : ClapTrap("default_clap_name"), ScavTrap("default_clap_name"), FragTrap("default_clap_name"), name("default")
{
	hit_point = FragTrap::hit_point;
	energy_point = ScavTrap::energy_point;
	attack_damage = FragTrap::attack_damage;
	std::cout << "DiamondTrap: " << name << ": Default constructor called." << std::endl;
}

DiamondTrap::DiamondTrap(std::string p_name) : ClapTrap(p_name + "_clap_name"), ScavTrap(p_name + "_scav_name"), FragTrap(p_name + "_frag_name"), name(p_name)
{
	hit_point = FragTrap::hit_point;
	energy_point = ScavTrap::energy_point;
	attack_damage = FragTrap::attack_damage;
	std::cout << "DiamondTrap: " << name << ": constructor called." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other.ClapTrap::name), ScavTrap(other), FragTrap(other), name(other.name)
{
	hit_point = FragTrap::hit_point;
	energy_point = ScavTrap::energy_point;
	attack_damage = FragTrap::attack_damage;
	std::cout << "DiamondTrap: " << name << ": copy constructor called." << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& other)
{
	if (this != &other)
	{
		ScavTrap::operator=(other);
		FragTrap::operator=(other);
		name = other.name;
		hit_point = other.hit_point;
		energy_point = other.energy_point;
		attack_damage = other.attack_damage;
	}
	std::cout << "DiamondTrap: " << name << ": copy assignment called." << std::endl;
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap: " << name << ": destractor called." << std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout << name << ": DiamondTrap" << std::endl;
	std::cout << ClapTrap::name << ": ClapTrap" << std::endl;
}
