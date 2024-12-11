/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 22:34:09 by tashiget          #+#    #+#             */
/*   Updated: 2024/12/10 22:34:09 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"
#include "ScavTrap.h"
#include "FragTrap.h"
#include <iostream>

#include "DiamondTrap.h"

int main() {
    std::cout << "=== Test: Default Constructor ===" << std::endl;
    DiamondTrap d1;
    std::cout << std::endl;

    std::cout << "=== Test: Parameterized Constructor ===" << std::endl;
    DiamondTrap d2("Bob");
    std::cout << std::endl;

    d2.attack("king");
    std::cout << "=== Test: whoAmI ===" << std::endl;
    d2.whoAmI();
    std::cout << std::endl;

    return 0;
}
