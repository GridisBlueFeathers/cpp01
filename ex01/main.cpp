/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svereten <svereten@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 15:16:05 by svereten          #+#    #+#             */
/*   Updated: 2025/04/21 15:39:56 by svereten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name);

int	main(void) {
	Zombie	*horde = zombieHorde(5, "Jeff");
	int		i = 0;

	while (i < 5) {
		horde[i].announce();
		i++;
	}
	delete [] horde;
}
