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

DiamondTrap::DiamondTrap() : hit_point(10), energy_point(10), attack_damage(0)
{
	name = "default";
	std::cout << "DiamondTrap: " << name << "Default constructor called." << std::endl;
}

DiamondTrap::DiamondTrap(std::string p_name) : name(p_name), hit_point(10), energy_point(10), attack_damage(0)
{
	std::cout << "DiamondTrap: " << name << ": constructor called." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : name(other.name), hit_point(other.hit_point), energy_point(other.energy_point), attack_damage(other.attack_damage)
{
	std::cout << "DiamondTrap: " << name << ": copy constructor called." << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& other)
{
	name = other.name;
	hit_point = other.hit_point;
	energy_point = other.energy_point;
	attack_damage = other.attack_damage;
	std::cout << "DiamondTrap: " << name << ": copy assignment called." << std::endl;
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap: " << name << ": destractor called." << std::endl;
}
