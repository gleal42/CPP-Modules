/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 19:03:49 by gleal             #+#    #+#             */
/*   Updated: 2022/04/20 22:06:57 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice"); me->equip(tmp);
    tmp = src->createMateria("cure"); me->equip(tmp);
    ICharacter* bob = new Character("bob"); me->use(0, *bob);
    me->use(1, *bob);
    delete bob; delete me; delete src;
    return 0;
}