# include "PresidentialPardonForm.hpp" 

PresidentialPardonForm::PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm Default Constructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &presidentialpardonform)
{
    std::cout << "PresidentialPardonForm Copy Constructor" << std::endl;
    *this = presidentialpardonform;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm Default Destructor" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &presidentialpardonform)
{
    this->=presidentialpardonform.
    return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{

}