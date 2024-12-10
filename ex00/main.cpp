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

int main() {
	ClapTrap defaultClap; // デフォルトコンストラクタ
	std::cout << std::endl;
	ClapTrap namedClap("Bob"); // 名前を指定してインスタンスを作成
	std::cout << std::endl;

	namedClap.attack("Target A");
	namedClap.attack("Target B");
	std::cout << std::endl;
	namedClap.takeDamage(3);
	namedClap.beRepaired(1);
	std::cout << std::endl;
	for (int i = 0; i < 12; ++i) {
		namedClap.attack("Energy Test");
	}
	std::cout << std::endl;
	namedClap.takeDamage(10); // ダメージを受けすぎた場合
	std::cout << std::endl;
	namedClap.beRepaired(5);
	namedClap.beRepaired(10); // エネルギーポイントが尽きるまで修理
	std::cout << std::endl;
	ClapTrap copyClap(namedClap); // コピーコンストラクタ
	std::cout << std::endl;
	ClapTrap assignedClap = defaultClap; // コピー代入演算子
	std::cout << std::endl;

	return 0;
}
