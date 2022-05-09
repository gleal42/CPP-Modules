/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 20:45:25 by gleal             #+#    #+#             */
/*   Updated: 2022/05/09 02:22:31 by gleal            ###   ########.fr       */
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
        std::size_t &size();
        class OutofBoundsException : public std::exception {
            private:
            virtual const char* what() const throw();
        };
};

template <class T>
std::size_t &Array<T>::size()
{
    return (this->sz);
}

template <class T>
Array<T>::Array()
{
    sz = 0;
    elements = new T[sz]();
}

template <class T>
Array<T>::Array(unsigned int n)
{
    sz = n;
    elements = new T[sz]();
}

template <class T>
Array<T>::Array(const Array &array)
{
    this->sz = array.sz;
    this->elements = new T[sz]();
    *this = array;
}

template <class T>
Array<T>  &Array<T>::operator=(const Array& array)
{
    if (this->sz != array.sz)
    {
        delete [] elements;
        this->sz = array.sz;
        this->elements = new T[sz]();
    }
    for (std::size_t i = 0; i < sz && i < array.sz; i++)
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
    if (idx >= sz || idx < 0)
        throw OutofBoundsException();
    return (elements[idx]);
}

template <class T>
Array<T>::~Array()
{
    delete [] elements;
    sz = 0;
    std::cout << "Destroying array" << std::endl;   
}

template <class T>
const char* Array<T>::OutofBoundsException::what() const throw()
{
    return ("Trying to access outside array");
}


#endif

