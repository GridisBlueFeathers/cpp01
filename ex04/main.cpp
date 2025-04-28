/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svereten <svereten@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 17:34:33 by svereten          #+#    #+#             */
/*   Updated: 2025/04/28 15:03:45 by svereten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <fstream>
#include <string>

int	main(int argc, char **argv) {
	std::ifstream	inputfile;
	std::ofstream	outfile;
	std::string		fileContent;
	std::string		s;
	std::string		needle;
	size_t			needle_idx;

	if (argc != 4)
		return (1);
	needle = argv[2];
	inputfile.open(argv[1]);
	while (std::getline(inputfile, s)) {
		fileContent += s;
		if (inputfile.eof())
			break ;
		fileContent += "\n";
	}
	if (inputfile.bad() || !inputfile.eof()) {
		std::cerr << "File reading failure\n";
		return (1);
	}
	inputfile.close();
	while (true) {
		needle_idx = fileContent.find(needle);
		if (static_cast<long>(needle_idx) < 0)
			break ;
		fileContent.erase(needle_idx, needle.length());
		fileContent.insert(needle_idx, argv[3]);
	}
	s = argv[1];
	s += ".replace";
	outfile.open(s.c_str());
	if (!(outfile << fileContent)) {
		std::cerr << "File wrighting failure\n";
	}
	outfile.close();
}
