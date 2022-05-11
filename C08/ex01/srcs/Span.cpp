/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 00:39:48 by gleal             #+#    #+#             */
/*   Updated: 2022/05/11 02:42:03 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp" 

Span::Span(): N(0)
{
	std::cout << "Span Default Constructor" << std::endl;
}

Span::Span(unsigned int N) : N(N)
{
	// std::cout << "Span with parameter " << N << std::endl;
}

Span::Span(const Span &span)
{
	std::cout << "Span Copy Constructor" << std::endl;
	*this = span;
}

Span::~Span()
{
	// std::cout << "Span Default Destructor" << std::endl;
}

Span &Span::operator=(const Span &span)
{
	this->vec = span.vec;
	this->N = span.N;
	return *this;
}

void Span::addNumber(int nbr)
{
	if (vec.size() == N)
		throw std::out_of_range("Container is full");
	vec.push_back(nbr);
}

void Span::fill_span(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (vec.size() + std::distance(begin, end) > N)
		throw std::out_of_range("Not enough space in Container for range");
	vec.insert(vec.end(), begin, end);
	

}

int Span::shortestSpan()
{
	if (vec.size() < 2)
		throw std::length_error("Exception: Not enough elements");
	std::vector<int> temp = vec;
	std::sort(temp.begin(), temp.end());
	int min_d = temp[1] - temp[0];
	int prev = temp[0];
	std::for_each(temp.begin() + 1, temp.end(), min_diff(min_d, prev));
	return (min_d);
}

int Span::longestSpan()
{
	if (vec.size() < 2)
		throw std::length_error("Exception: Not enough elements");
	return (*std::max_element(vec.begin(), vec.end())
		- *std::min_element(vec.begin(), vec.end()));
}

min_diff::min_diff(int &min_d, int &prev) : low_diff(min_d), before_value(prev)
{
}

void	min_diff::operator()(int &cur_nbr)
{
	// std::cout << cur_nbr << std::endl;
	low_diff = std::min(cur_nbr - before_value, low_diff);
	before_value = cur_nbr;
}

void Span::print() 
{
	std::cout << "Vector contains" << std::endl;
	for (std::vector<int>::iterator it = vec.begin(); it<vec.end(); it++)
		std::cout << *it << " ";
std::cout << std::endl;
}