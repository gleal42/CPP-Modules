/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 22:45:20 by gleal             #+#    #+#             */
/*   Updated: 2022/05/12 02:24:07 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <iterator>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container> {
    private:

    public:
        MutantStack();
        MutantStack(const MutantStack &mutantstack);
        ~MutantStack();
        MutantStack &operator=(const MutantStack &mutantstack);
        typedef typename std::stack<T, Container>::container_type::iterator  iterator;
        iterator begin ();
        iterator end ();
};

template <typename T, typename Container>
MutantStack<T, Container>::MutantStack()
{
    std::cout << "Contructor" << std::endl;
}

template <typename T, typename Container>
MutantStack<T, Container>::MutantStack(const MutantStack &mutantstack)
{
    this = mutantstack;
    std::cout << "Copy Constructor" << std::endl;
}

template <typename T, typename Container>
MutantStack<T, Container> &MutantStack<T, Container>::operator=(const MutantStack &mutantstack)
{
    this->std::stack<T>::operator=(mutantstack);
    return *this;
}

template <typename T, typename Container>
MutantStack<T, Container>::~MutantStack()
{
    std::cout << "Destructor" << std::endl;
}

template <typename T, typename Container>
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::begin ()
{
    return (std::stack<T>::c.begin());
};

template <typename T, typename Container>
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::end ()
{
    return (std::stack<T>::c.end());
};

#endif
