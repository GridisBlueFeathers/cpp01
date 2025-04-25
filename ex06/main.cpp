/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svereten <svereten@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 12:16:53 by svereten          #+#    #+#             */
/*   Updated: 2025/04/25 13:40:35 by svereten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Harl.hpp"

int	main(int argc, char **argv) {
	Harl	harl;
	
	if (argc != 2)
		return (1);
	harl.complain(argv[1]);
}
