/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svereten <svereten@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 13:45:08 by svereten          #+#    #+#             */
/*   Updated: 2025/04/21 15:10:26 by svereten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie() : _name("John") {}

Zombie::Zombie(std::string name) : _name(name) {}

Zombie::~Zombie() {
	std::cout << _name << " has succumbed to hunger" << std::endl;
}

void	Zombie::announce(void) {
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
