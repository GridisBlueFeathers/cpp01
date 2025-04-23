/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svereten <svereten@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 16:54:48 by svereten          #+#    #+#             */
/*   Updated: 2025/04/23 14:28:09 by svereten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(const std::string& name): _name(name), _weapon(NULL) {};

void	HumanB::attack(void) const {
	std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& weapon) {
	_weapon = &weapon;
}
