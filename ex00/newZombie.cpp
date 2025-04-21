/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svereten <svereten@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 13:53:24 by svereten          #+#    #+#             */
/*   Updated: 2025/04/21 13:54:43 by svereten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Zombie.hpp"
#include <iostream>

Zombie	*newZombie(std::string name) {
	Zombie	*res = new Zombie(name);

	return (res);
}
