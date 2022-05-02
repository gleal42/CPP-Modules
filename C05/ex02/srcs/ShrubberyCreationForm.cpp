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
    (void)shrubberycreationform;
    std::cout << "Impossible to change already existing Shrubbery Creation Form." << std::endl;
    std::cout << "Please create a new form using a constructor" << std::endl;
    return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (!getIsSigned() || executor.getGrade() > getExecGrade())
        return ;

    std::ofstream asciitree;
    std::string name;
    name = executor.getName()+"_shrubbery";
    asciitree.open(name);
    if ( (asciitree.rdstate() & std::ifstream::failbit ) != 0 
        || (asciitree.rdstate() & std::ifstream::badbit) != 0 )
        std::cerr << "Error opening " << executor.getName()+"_shrubbery" << std::endl;
    
    asciitree
    << "            {/{/{\\{/\\{(/}{\\(/} " << std::endl
    << "          {/{/{\\\\{\\(/}{\\(/}{\\(/} " << std::endl
    << "        \\/{/{\\{\\(/}{\\{\\(/}{{\\(/}\\(/} " << std::endl
    << "       {/{/{\\{/{\\{\\(/}{\\(/}{\\{\\(/} " << std::endl
    << "     {/{/{\\{\\/{/{\\{\\(/}{\\{\\(/}{\\(/} " << std::endl
    << "   {/{/{\\{\\(/}/{/{\\{\\(/}{\\(/}{\\{\\(/} " << std::endl
    << "        {/{/{\\\\{\\(/}{/{/{\\{\\(/} " << std::endl
    << "         {/{/{\\\\{\\(/}{\\(/}{\\(/} " << std::endl
    << "             \\   \\     /   / " << std::endl
    << "              \\   \\   /  / " << std::endl
    << "               |    \\/  / " << std::endl
    << "                |      / " << std::endl
    << "                |     | " << std::endl
    << "                |  (0)| " << std::endl
    << "                |     | " << std::endl
    << "              //       \\\\ " << std::endl
    << "/\\\\////\\\\/\\///\\\\/\\/\\//\\/////\\\\/\\///\\/\\\\//\\ " << std::endl;

    asciitree.close();
}
