/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 15:43:30 by gleal             #+#    #+#             */
/*   Updated: 2022/04/10 19:23:42 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl test;
	
	if (argc != 2)
	{
		std::cerr << "Wrong number of arguments (1 argument needed)" << std::endl;
		return (1);
	}
	test.complain(argv[1]);
	return (0);
}