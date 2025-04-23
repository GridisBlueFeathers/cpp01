/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svereten <svereten@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 17:10:37 by svereten          #+#    #+#             */
/*   Updated: 2025/04/23 14:28:04 by svereten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <string>
# include "Weapon.hpp"

class HumanB {
public:
	HumanB(const std::string& name);
	void	attack(void) const;
	void	setWeapon(Weapon& weapon);

private:
	std::string	_name;
	Weapon		*_weapon;
};
#endif // !HUMANB_HPP
