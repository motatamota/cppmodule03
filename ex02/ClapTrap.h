/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 22:34:25 by tashiget          #+#    #+#             */
/*   Updated: 2024/12/10 22:34:25 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H
# include <string>
# include <iostream>

class ClapTrap
{
protected:
	std::string		name;
	unsigned int	hit_point;
	unsigned int	energy_point;
	unsigned int	attack_damage;

public:
	ClapTrap();
	ClapTrap(std::string p_name);
	ClapTrap(const ClapTrap& other);
	ClapTrap&	operator=(const ClapTrap& other);
	~ClapTrap();
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

#endif
