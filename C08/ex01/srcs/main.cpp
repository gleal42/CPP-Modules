/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 00:39:46 by gleal             #+#    #+#             */
/*   Updated: 2022/05/11 02:44:16 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"

void	test_fill_span()
{
	std::cout << "Small fill Span" << std::endl;
	Span sp(8);
	int temp_1[] = {2, 80, 7, 13, 54, 21, 70, 18};
	std::vector<int> range_nbrs(temp_1, temp_1 + sizeof(temp_1)/sizeof(int));
	sp.fill_span(range_nbrs.begin(), range_nbrs.end());
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << "Mixed fill Span" << std::endl;
	Span mix_sp(10);
	mix_sp.addNumber(1);
	mix_sp.addNumber(2);
	mix_sp.addNumber(3);
	int temp_2[] = {6, 7, 8, 9, 10};
	std::vector<int> mix_range(temp_2, temp_2 + sizeof(temp_2)/sizeof(int));
	mix_sp.fill_span(mix_range.begin(), mix_range.end());	
	mix_sp.addNumber(4);
	mix_sp.addNumber(5);
	mix_sp.print();
	std::cout << mix_sp.shortestSpan() << std::endl;
	std::cout << mix_sp.longestSpan() << std::endl;

	std::cout << "Big fill Span" << std::endl;
	Span large_sp(10001);
	int temp_3[10001];
	for (std::size_t i = 0; i < 10001; i++) {
		temp_3[i] = 500 * i;
	}
	std::vector<int> big_range(temp_3, temp_3 + sizeof(temp_3)/sizeof(int));
	large_sp.fill_span(big_range.begin(), big_range.end());
	std::cout << large_sp.shortestSpan() << std::endl;
	std::cout << large_sp.longestSpan() << std::endl;
}

void	test_error_span()
{
	std::cout << "Error 1" << std::endl;
	Span err_1 = Span(0);
	try {
		err_1.addNumber(3);
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "Error 2" << std::endl;
	Span err_2 = Span(1);
	try {
		err_2.addNumber(3);
		err_2.addNumber(4);
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "Error 3" << std::endl;
	Span err_3(4);
	err_3.addNumber(2);
	int temp[] = {80, 7, 13, 54};
	try {
		std::vector<int> error_range(temp, temp + sizeof(temp)/sizeof(int));
		err_3.fill_span(error_range.begin(), error_range.end());
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "Error 4" << std::endl;
	Span err_4 = Span(0);
	try {
		std::cout << err_4.shortestSpan() << std::endl;
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		std::cout << err_4.longestSpan() << std::endl;
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "Error 5" << std::endl;
	Span err_5 = Span(1);
	err_5.addNumber(3);
	try {
		std::cout << err_5.shortestSpan() << std::endl;
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		std::cout << err_5.longestSpan() << std::endl;
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}

int main()
{
	std::cout << "Pdf tests" << std::endl;
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::cout << std::endl;
	test_fill_span();
	test_error_span();
	return 0;
}