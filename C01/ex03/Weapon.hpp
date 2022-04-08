/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 20:12:41 by gleal             #+#    #+#             */
/*   Updated: 2022/04/08 20:50:24 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Weapon
{
	private:
		std::string type;
	public:
		const std::string *getType();
		void setType(std::string str);
		Weapon (std::string str);
};