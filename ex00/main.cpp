/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svereten <svereten@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 13:46:33 by svereten          #+#    #+#             */
/*   Updated: 2025/04/28 15:00:39 by svereten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Zombie.hpp"

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

int main(void)
{
	Zombie	zom("Johnny");
	Zombie	*heapZom = newZombie("Heaper");

	if (!heapZom)
		return (1);
	zom.announce();
	randomChump("Jane");
	heapZom->announce();
	delete heapZom;
}
