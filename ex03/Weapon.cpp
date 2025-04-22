/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svereten <svereten@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 16:53:23 by svereten          #+#    #+#             */
/*   Updated: 2025/04/22 17:04:21 by svereten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Weapon.hpp"

Weapon::Weapon(): _type("") {};

Weapon::Weapon(std::string type): _type(type) {};

const std::string&	Weapon::getType(void) {
	return (_type);
}

void	Weapon::setType(std::string type) {
	_type = type;
}
