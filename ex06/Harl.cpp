/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svereten <svereten@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 12:17:01 by svereten          #+#    #+#             */
/*   Updated: 2025/04/28 15:17:54 by svereten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Harl.hpp"
#include <iostream>

Harl::Harl() {};

void Harl::complain(std::string level) {
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	levelFunc	functions[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int			i = 0;

	while (i < 4) {
		if (levels[i] == level) {
			break ;
		}
		i++;
	}

	switch (i) {
		case 0:
			std::cout << "[ " << levels[0] << " ]\n";
			(this->*functions[0])();
		case 1:
			std::cout << "[ " << levels[1] << " ]\n";
			(this->*functions[1])();
		case 2:
			std::cout << "[ " << levels[2] << " ]\n";
			(this->*functions[2])();
		case 3:
			std::cout << "[ " << levels[3] << " ]\n";
			(this->*functions[3])();
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]\n";
	}
}

void Harl::debug(void) {
	std::cout << "I love having extra bacon for my "
				"7XL-double-cheese-triple-pickle-specialketchup burger. I "
				"really do!\n";
}

void Harl::info(void) {
	std::cout << "I cannot believe adding extra bacon costs more money. You "
				"didn’t put enough bacon in my burger! If you did, I wouldn’t "
				"be asking for more!\n";
}

void Harl::warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been "
				"coming for years, whereas you started working here just last "
				"month.\n";
}

void Harl::error(void) {
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}
