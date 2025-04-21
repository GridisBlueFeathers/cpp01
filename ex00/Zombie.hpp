/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svereten <svereten@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 13:41:33 by svereten          #+#    #+#             */
/*   Updated: 2025/04/21 15:09:31 by svereten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie {
	private:
		std::string	_name;
	public:
		Zombie	(void);
		Zombie	(std::string name);
		~Zombie	(void);
		void	announce(void);
};

#endif
