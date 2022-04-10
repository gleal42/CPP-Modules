/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 21:06:55 by gleal             #+#    #+#             */
/*   Updated: 2022/04/10 01:23:56 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <fstream>
# include <sstream>

std::string replace(std::string str, std::string oldpat, std::string newpat)
{
    std::string fst;
    std::string lst;
    size_t index;
    while (1)
    {
        index = str.find(oldpat);
        if (index == std::string::npos)
            break;
        fst = str.substr(0, index);
        lst = str.substr(index + oldpat.length(), str.length() - (index + oldpat.length()));
        str = fst + newpat + lst;
    }
    return (str);
}

int mysed(char **argv)
{
    std::ifstream orifile(argv[1]);
    if ( (orifile.rdstate() & std::ifstream::failbit ) != 0
        || (orifile.rdstate() & std::ifstream::badbit ) != 0 )
    {
        std::cerr << "error opening " << argv[1] << std::endl;
        return (1);
    }
    std::stringstream ori_buf;
    std::string new_str;

    std::ofstream newfile;
    std::string temp = argv[1];

    ori_buf << orifile.rdbuf();
    if (ori_buf.str().empty())
    {
        std::cerr << argv[1] << " file is empty" << std::endl;
        return (1);
    }
    new_str = replace(ori_buf.str(), argv[2], argv[3]);
    temp = temp + ".replace";  
    newfile.open(temp);
    newfile << new_str;    
    orifile.close();
    newfile.close();
    return (0);
}

int main(int argc, char **argv)
{
    int exit_stat;
    if (argc != 4)
    {
        std::cerr << "Wrong number of arguments";
        return (1);
    }
    exit_stat = mysed(argv);
    return (exit_stat);
}