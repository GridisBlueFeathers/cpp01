/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svereten <svereten@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 15:16:13 by svereten          #+#    #+#             */
/*   Updated: 2025/04/28 14:53:15 by svereten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name) {
	Zombie	*res = new Zombie[N];
	int	i = 0;

	if (!res)
		return (NULL);
	while (i < N) {
		res[i].set_name(name);
		i++;
	}
	return (res);
}
