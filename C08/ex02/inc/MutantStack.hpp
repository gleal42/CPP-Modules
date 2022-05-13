/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 22:45:20 by gleal             #+#    #+#             */
/*   Updated: 2022/05/13 21:18:39 by gleal            ###   ########.fr       */
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
        typedef typename std::stack<T, Container>::container_type::reverse_iterator reverse_iterator;
        typedef typename std::stack<T, Container>::container_type::const_iterator const_iterator;
        typedef typename std::stack<T, Container>::container_type::const_reverse_iterator const_reverse_iterator;
        iterator begin ();
        iterator end ();
        reverse_iterator rbegin ();
        reverse_iterator rend ();
        const_iterator begin() const;
        const_iterator end() const;
        const_reverse_iterator rbegin() const;
        const_reverse_iterator rend() const;
};

template <typename T, typename Container>
MutantStack<T, Container>::MutantStack()
{
    std::cout << "Contructor" << std::endl;
}

template <typename T, typename Container>
MutantStack<T, Container>::MutantStack(const MutantStack &mutantstack)
{
    *this = mutantstack;
    std::cout << "Copy Constructor" << std::endl;
}

template <typename T, typename Container>
MutantStack<T, Container> &MutantStack<T, Container>::operator=(const MutantStack &mutantstack)
{
    this->std::stack<T, Container>::operator=(mutantstack);
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
    return (std::stack<T, Container>::c.begin());
};

template <typename T, typename Container>
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::end ()
{
    return (std::stack<T, Container>::c.end());
};

template <typename T, typename Container>
typename MutantStack<T, Container>::reverse_iterator MutantStack<T, Container>::rbegin ()
{
    return (std::stack<T, Container>::c.rbegin());
};

template <typename T, typename Container>
typename MutantStack<T, Container>::reverse_iterator MutantStack<T, Container>::rend ()
{
    return (std::stack<T, Container>::c.rend());
};

template <typename T, typename Container>
typename MutantStack<T, Container>::const_iterator MutantStack<T, Container>::begin() const
{
    return (std::stack<T, Container>::c.begin());
}

template <typename T, typename Container>
typename MutantStack<T, Container>::const_iterator MutantStack<T, Container>::end() const
{
    return (std::stack<T, Container>::c.end());

}

template <typename T, typename Container>
typename MutantStack<T, Container>::const_reverse_iterator MutantStack<T, Container>::rbegin() const
{
    return (std::stack<T, Container>::c.rbegin());
}

template <typename T, typename Container>
typename MutantStack<T, Container>::const_reverse_iterator MutantStack<T, Container>::rend() const
{
    return (std::stack<T, Container>::c.rend());
}


#endif
