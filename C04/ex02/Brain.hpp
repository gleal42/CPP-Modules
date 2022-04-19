/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 17:24:21 by gleal             #+#    #+#             */
/*   Updated: 2022/04/18 22:15:21 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain{
private:
	std::string ideas[100];
public:
	Brain();
	Brain &operator=(const Brain &brain);
	Brain(const Brain &brain);
	~Brain();
	std::string get_idea(int index);
	void set_idea(std::string str, int index);
	void clear_idea(int index);
};

#endif
