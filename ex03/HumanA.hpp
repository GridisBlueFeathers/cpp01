/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svereten <svereten@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 16:53:43 by svereten          #+#    #+#             */
/*   Updated: 2025/04/23 14:27:23 by svereten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <string>
# include "Weapon.hpp"

class HumanA {
public:
	HumanA(const std::string& name, Weapon& weapon);
	void	attack(void) const;

private:
	std::string _name;
	Weapon&		_weapon;
};
#endif // !HUMANA_HPP
