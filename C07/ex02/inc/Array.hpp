/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 20:45:25 by gleal             #+#    #+#             */
/*   Updated: 2022/05/12 22:14:38 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <cstdio>
#include <exception>
#include <iostream>

template <class T>
class Array {
    private:
        T *elements;
        std::size_t sz;
    public:
        Array();
        Array(unsigned int n);
        Array(const Array &array);
        ~Array();
        Array  &operator=(const Array& array);
        T  &operator[](std::size_t idx);
        T  operator[](std::size_t idx) const;
        std::size_t size() const;
        class OutofBoundsException : public std::exception {
            private:
            virtual const char* what() const throw();
        };
};

template <class T>
std::size_t Array<T>::size() const
{
    return (this->sz);
}

template <class T>
Array<T>::Array()
{
    sz = 0;
    elements = new T[size()]();
}

template <class T>
Array<T>::Array(unsigned int n)
{
    sz = n;
    elements = new T[size()]();
}

template <class T>
Array<T>::Array(const Array &array)
{
    this->sz = array.size();
    this->elements = new T[size()]();
    *this = array;
}

template <class T>
Array<T>  &Array<T>::operator=(const Array& array)
{
    if (this->size() != array.size())
    {
        delete [] elements;
        this->sz = array.size();
        this->elements = new T[size()]();
    }
    for (std::size_t i = 0; i < this->size() && i < array.size(); i++)
        this->elements[i] = array.elements[i];
    return *this;
}

template <class T>
T  &Array<T>::operator[](std::size_t idx)
{
    if (idx >= size() || idx < 0)
        throw OutofBoundsException();
    return (elements[idx]);
}

template <class T>
T  Array<T>::operator[](std::size_t idx) const
{
    if (idx >= size() || idx < 0)
        throw OutofBoundsException();
    return (elements[idx]);
}

template <class T>
Array<T>::~Array()
{
    delete [] elements;
    sz = 0;
    // std::cout << "Destroying array" << std::endl;   
}

template <class T>
const char* Array<T>::OutofBoundsException::what() const throw()
{
    return ("Trying to access outside array");
}


#endif

