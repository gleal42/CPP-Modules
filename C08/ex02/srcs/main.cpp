/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 22:45:39 by gleal             #+#    #+#             */
/*   Updated: 2022/05/13 22:02:09 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

#include <list>

void	stackfunc_tests()
{
	std::cout << std::endl;
	std::cout << "Extra Tests" << std::endl;
	std::cout << std::endl;
	std::cout << "Empty Creation" << std::endl;
    MutantStack<char> extra_stack;
    std::cout << "Is it empty? " << std::boolalpha << extra_stack.empty() << std::endl;
	std::cout << "Add chars" << std::endl;
    extra_stack.push('a');
    extra_stack.push('f');
    extra_stack.push(']');
    std::cout << "Is it empty? " << std::boolalpha << extra_stack.empty() << std::endl;
    std::cout << "Size: " << std::boolalpha << extra_stack.size() << std::endl;
    std::cout << "Top char before pop " << extra_stack.top() << std::endl;
    extra_stack.pop();
    std::cout << "Top char after pop " << extra_stack.top() << std::endl;
    std::cout << "Size: " << std::boolalpha << extra_stack.size() << std::endl;

 
	std::cout << std::endl;
	std::cout << "Copy of extra stack" << std::endl;
	std::cout << std::endl;
    MutantStack<char> other_stack_2 = extra_stack;
    
    std::cout << "Equal? " << std::boolalpha << (other_stack_2 == extra_stack) << std::endl;
    std::cout << "Equal or smaller? " << std::boolalpha << (other_stack_2 <= extra_stack) << std::endl;
    std::cout << "Equal or bigger? " << std::boolalpha << (other_stack_2 >= extra_stack) << std::endl;
    std::cout << "Different? " << std::boolalpha << (other_stack_2 != extra_stack) << std::endl;
    std::cout << "Smaller? " << std::boolalpha << (other_stack_2 < extra_stack) << std::endl;
    std::cout << "Bigger? " << std::boolalpha << (other_stack_2 > extra_stack) << std::endl;

	std::cout << std::endl;
	std::cout << "Add one more char" << std::endl;
	std::cout << std::endl;
    other_stack_2.push('s');
    std::cout << "Equal? " << std::boolalpha << (other_stack_2 == extra_stack) << std::endl;
    std::cout << "Equal or smaller? " << std::boolalpha << (other_stack_2 <= extra_stack) << std::endl;
    std::cout << "Equal or bigger? " << std::boolalpha << (other_stack_2 >= extra_stack) << std::endl;
    std::cout << "Different? " << std::boolalpha << (other_stack_2 != extra_stack) << std::endl;
    std::cout << "Smaller? " << std::boolalpha << (other_stack_2 < extra_stack) << std::endl;
    std::cout << "Bigger? " << std::boolalpha << (other_stack_2 > extra_stack) << std::endl;
}

void	iterator_tests()
{
	std::cout << std::endl;
	std::cout << "Iterator Tests" << std::endl;
	std::cout << std::endl;
    MutantStack<int> sstack;
    sstack.push(1);
    sstack.push(2);
    sstack.push(3);
    sstack.push(5);
	std::cout << std::endl;
	std::cout << "Regular iteration" << std::endl;
	std::cout << std::endl;
    MutantStack<int>::iterator it_1 = sstack.begin();
    MutantStack<int>::iterator it_2 = sstack.end();
    while (it_1 != it_2)
    {
        std::cout << *it_1 << std::endl;
        ++it_1;
    }
	std::cout << std::endl;
	std::cout << "Reverse iteration" << std::endl;
	std::cout << std::endl;
    MutantStack<int>::reverse_iterator it_3 = sstack.rbegin();
    MutantStack<int>::reverse_iterator it_4 = sstack.rend();
    while (it_3 != it_4)
    {
        std::cout << *it_3 << std::endl;
        ++it_3;
    }

   	std::cout << std::endl;
	std::cout << "Const iteration" << std::endl;
	std::cout << std::endl;
    MutantStack<int>::const_iterator it_5 = sstack.begin();
    MutantStack<int>::const_iterator it_6 = sstack.end();
    while (it_5 != it_6)
    {
        std::cout << *it_5 << std::endl;
        ++it_5;
    } 

   	std::cout << std::endl;
	std::cout << "Const Reverse iteration" << std::endl;
	std::cout << std::endl;
    MutantStack<int>::const_reverse_iterator it_7 = sstack.rbegin();
    MutantStack<int>::const_reverse_iterator it_8 = sstack.rend();
    while (it_7 != it_8)
    {
        std::cout << *it_7 << std::endl;
        ++it_7;
    } 
}

void	lst_tests()
{
	std::cout << std::endl;
	std::cout << "Lists Tests" << std::endl;
	std::cout << std::endl;

    std::list<int> mlist;
    mlist.push_back(5);
    mlist.push_back(17);
    std::cout << mlist.back() << std::endl;
    mlist.pop_back();
    std::cout << mlist.size() << std::endl;
    mlist.push_back(3);
    mlist.push_back(5);
    mlist.push_back(737); //[...] mlist.push(0);
    std::list<int>::iterator it = mlist.begin();
    std::list<int>::iterator ite = mlist.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int, std::list<int> > s(mlist);
}

int main()
{
	std::cout << "Basic Tests" << std::endl;
	std::cout << std::endl;
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737); //[...] mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    
    lst_tests();
    stackfunc_tests();
    iterator_tests();

    return 0;
}
