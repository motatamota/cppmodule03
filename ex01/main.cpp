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


int main() {
	// **1. デフォルトコンストラクタの動作確認**
	std::cout << "=== Test 1: Default Constructor ===" << std::endl;
	ScavTrap scavDefault;
	std::cout << std::endl;

	// **2. 名前付きコンストラクタの動作確認**
	std::cout << "=== Test 2: Parameterized Constructor ===" << std::endl;
	ScavTrap scavNamed("Scavy");
	std::cout << std::endl;

	// **3. 攻撃の動作確認**
	std::cout << "=== Test 3: Attack ===" << std::endl;
	scavNamed.attack("Enemy A");
	scavNamed.attack("Enemy B");
	std::cout << std::endl;

	// **4. ダメージを受ける動作確認**
	std::cout << "=== Test 4: Take Damage ===" << std::endl;
	scavNamed.takeDamage(30);  // ダメージを受ける
	scavNamed.takeDamage(80);  // ダメージで死亡
	scavNamed.takeDamage(10);  // 死亡後の挙動
	std::cout << std::endl;

	// **5. 修理の動作確認**
	std::cout << "=== Test 5: Be Repaired ===" << std::endl;
	scavNamed.beRepaired(20); // 死亡状態で修理を試みる
	scavDefault.beRepaired(10); // 修理成功
	std::cout << std::endl;

	// **6. Gatekeeperモードの動作確認**
	std::cout << "=== Test 6: Guard Gate ===" << std::endl;
	scavNamed.guardGate();
	scavDefault.guardGate();
	std::cout << std::endl;

	// **7. コピーコンストラクタの動作確認**
	std::cout << "=== Test 7: Copy Constructor ===" << std::endl;
	ScavTrap scavCopy(scavDefault); // コピーコンストラクタ
	std::cout << std::endl;

	// **8. コピー代入演算子の動作確認**
	std::cout << "=== Test 8: Copy Assignment Operator ===" << std::endl;
	ScavTrap scavAssigned;
	scavAssigned = scavDefault; // コピー代入
	std::cout << std::endl;

	// **9. エネルギーポイント不足時の挙動確認**
	std::cout << "=== Test 9: Energy Point Depletion ===" << std::endl;
	for (int i = 0; i < 12; ++i) {
		scavDefault.attack("Target");
	}
	scavDefault.beRepaired(10); // エネルギーポイント不足で修理失敗
	std::cout << std::endl;

	return 0; // デストラクタ呼び出し確認
}
