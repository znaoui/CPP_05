#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"

int main(void)
{
	std::cout << "\033[1;31m Creating a Bureaucrat..\033[m" << std::endl;
	Bureaucrat User("User1");
	RobotomyRequestForm test("Blender");
	ShrubberyCreationForm test2("Thermomix");
	PresidentialPardonForm test3("Micro-onde");
	try
	{
		User.setGrade(2);
		std::cout << std::endl << "\033[1;31m Trying to sign form..\033[m" << std::endl;
		User.signForm(test);
		User.signForm(test2);
		User.signForm(test3);
		std::cout << std::endl << "\033[1;31m Trying to execute contract..\033[m" << std::endl;
		User.executeForm(test);
		User.executeForm(test2);
		User.executeForm(test3);
		std::cout << std::endl << "\033[1;31m Trying to execute Robotomy..\033[m" << std::endl;
		test.execute(User);
		std::cout << "\033[1;31m Trying to execute Shrubbery..\033[m" << std::endl;
		test2.execute(User);
		std::cout << "\033[1;31m Trying to execute Presidential..\033[m" << std::endl;
		test3.execute(User);
        std::cout << std::endl;
	}
	catch (std::exception const &e)
	{
		std::cout << std::endl << "\033[1;31m <-- EXCEPTION CATCHED\033[m" << std::endl;
		std::cout << User.getName();
		std::cerr << e.what() << std::endl;
                std::cout << "\033[1;31m EXCEPTION CATCHED -->\033[m" << std::endl << std::endl;
	}
}