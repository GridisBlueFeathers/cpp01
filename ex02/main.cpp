/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svereten <svereten@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 15:49:14 by svereten          #+#    #+#             */
/*   Updated: 2025/04/21 15:55:07 by svereten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string>
#include <iostream>

int	main(void) {
	std::string	str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "Address: " << &str << std::endl;
	std::cout << "Address: " << &stringPTR << std::endl;
	std::cout << "Address: " << &stringREF << std::endl;

	std::cout << "Value: " << str << std::endl;
	std::cout << "Value: " << stringPTR << std::endl;
	std::cout << "Value: " << stringREF << std::endl;
}
