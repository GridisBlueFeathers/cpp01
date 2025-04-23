/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svereten <svereten@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 16:53:37 by svereten          #+#    #+#             */
/*   Updated: 2025/04/23 14:27:20 by svereten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(const std::string& name, Weapon& weapon):
	_name(name),
	_weapon(weapon) {};

void	HumanA::attack(void) const {
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}
