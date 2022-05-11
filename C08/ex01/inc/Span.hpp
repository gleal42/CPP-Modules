/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 00:39:51 by gleal             #+#    #+#             */
/*   Updated: 2022/05/11 02:40:39 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <stdexcept>
#include <algorithm>
#include <numeric>

struct min_diff {
	private:
		int &low_diff;
		int &before_value;
	public:
		min_diff(int &min_d, int &prev);
		void	operator()(int &d);
};

class Span {
private:
	std::vector<int> vec;
	unsigned int N;

public:
	Span();
	Span(unsigned int N);
	Span(const Span &span);
	~Span();
	Span &operator=(const Span &span);
	void addNumber(int nbr);
	void fill_span(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	int shortestSpan();
	int longestSpan();
	void print();

};

#endif
