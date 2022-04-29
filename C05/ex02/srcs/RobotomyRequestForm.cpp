# include "RobotomyRequestForm.hpp" 

RobotomyRequestForm::RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm Default Constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &robotomyrequestform)
{
    std::cout << "RobotomyRequestForm Copy Constructor" << std::endl;
    *this = robotomyrequestform;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm Default Destructor" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &robotomyrequestform)
{
    this->=robotomyrequestform.
    return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{

}