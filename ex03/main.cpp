#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"
#include "Intern.hpp"

int main(void)
{
	std::cout << "\033[1;31m Creating an intern..\033[m" << std::endl;
	Intern		intrn;
	Bureaucrat	test;
	Form		*form;

	try
	{
                std::cout << std::endl << "\033[1;31m Creating robotomy form..\033[m" << std::endl;
		form = intrn.makeForm("robotomy request", " Terry");
		if (form)
			delete form;
                std::cout << std::endl << "\033[1;31m Creating presidential form..\033[m" << std::endl;
		form = intrn.makeForm("presidential pardon", " Jack");
		if (form)
			delete form;
                std::cout << std::endl << "\033[1;31m Creating shrubbery form..\033[m" << std::endl;
		form = intrn.makeForm("shrubbery creation", " Clap");
		if (form)
			delete form;
                std::cout << std::endl;
		form = intrn.makeForm("sajkdhajk sdhkjdhas jkdakjd ", " jsp");
		if (form)
			delete form;
                std::cout << std::endl;
	}
	catch (std::exception const &e)
	{
		std::cout << std::endl << "\033[1;31m <-- EXCEPTION CATCHED\033[m" << std::endl;
		std::cerr << e.what() << std::endl;
                std::cout << "\033[1;31m EXCEPTION CATCHED -->\033[m" << std::endl << std::endl;
	}
}