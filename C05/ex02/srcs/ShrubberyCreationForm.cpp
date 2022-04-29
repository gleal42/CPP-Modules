# include "ShrubberyCreationForm.hpp" 

ShrubberyCreationForm::ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm Default Constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &shrubberycreationform)
{
    std::cout << "ShrubberyCreationForm Copy Constructor" << std::endl;
    *this = shrubberycreationform;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm Default Destructor" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &shrubberycreationform)
{
    this->=shrubberycreationform.
    return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{

}