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

int main() {
    // **1. FragTrap の作成と初期化確認**
    std::cout << "=== Test 1: Create FragTrap ===" << std::endl;
    FragTrap frag("Fraggy");
    std::cout << std::endl;

    // **2. 攻撃の動作確認**
    std::cout << "=== Test 2: Attack ===" << std::endl;
    frag.attack("Enemy A");
    frag.attack("Enemy B");
    std::cout << std::endl;

    // **3. ダメージと修理の動作確認**
    std::cout << "=== Test 3: Take Damage and Be Repaired ===" << std::endl;
    frag.takeDamage(50);
    frag.beRepaired(20);
    frag.takeDamage(80); // ダメージで死亡
    frag.beRepaired(30); // 死亡後の修理
    std::cout << std::endl;

    // **4. ハイタッチの動作確認**
    std::cout << "=== Test 4: High Fives ===" << std::endl;
    frag.highFivesGuys();
    std::cout << std::endl;

    // デストラクタ呼び出し確認
    return 0;
}
