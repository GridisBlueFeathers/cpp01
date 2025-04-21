/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svereten <svereten@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 13:48:54 by svereten          #+#    #+#             */
/*   Updated: 2025/04/21 13:50:28 by svereten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Zombie.hpp"
#include <iostream>

void	randomChump(std::string name) {
	Zombie	random_chump(name);

	random_chump.announce();
}
