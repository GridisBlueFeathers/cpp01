/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svereten <svereten@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 16:53:13 by svereten          #+#    #+#             */
/*   Updated: 2025/04/22 17:04:13 by svereten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon {
public:
	Weapon();
	Weapon(std::string type);

	const std::string&	getType(void);
	void				setType(std::string type);

private:
	std::string	_type;
};
#endif
