# include "ShrubberyCreationForm.hpp" 

ShrubberyCreationForm::ShrubberyCreationForm()
: Form("ShrubberyCreationForm", 145, 137) , target("Random")
{
    std::cout << getName() << " which targets " << target << " was created" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target)
: Form("ShrubberyCreationForm", 145, 137) , target(target)
{
    std::cout << getName() << " which targets " << target << " was created" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &shrub)
: Form(shrub.getName(), shrub.getSignGrade(), shrub.getExecGrade()) , target(shrub.target)
{
    std::cout << "ShrubberyCreationForm:" << *this << "was copied" << std::endl;
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

void ShrubberyCreationForm::action() const
{
    std::ofstream asciitree;
    std::string name;

    name = target + "_shrubbery";
    asciitree.open(name);
    if ( (asciitree.rdstate() & std::ifstream::failbit ) != 0 
        || (asciitree.rdstate() & std::ifstream::badbit) != 0 )
        std::cerr << "Error opening " << target + "_shrubbery" << std::endl;
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
