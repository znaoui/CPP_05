#include "Bureaucrat.hpp"

int main(void)
{
	std::cout << "\033[1;31m Creating a Bureaucrat..\033[m" << std::endl;
	Bureaucrat Test;
	std::cout << std::endl << "\033[1;31m Changing his grade..\033[m" << std::endl;
	try
	{
		Test.setGrade(150);
		std::cout << Test << std::endl;
		Test.setGrade(45);
		std::cout << Test << std::endl;
		Test.setGrade(42);
		std::cout << Test << std::endl;
		std::cout << std::endl << "\033[1;31m incrementing his grade..\033[m" << std::endl;
		Test.incrementGrade();
		std::cout << Test << std::endl;
		std::cout << std::endl << "\033[1;31m decrementing his grade..\033[m" << std::endl;
		Test.decrementGrade();
		std::cout << Test << std::endl;
		std::cout << std::endl << "\033[1;31m Destruction automatic of Bureaucrat..\033[m" << std::endl;
	}
	catch (std::exception const &e)
	{
		std::cout << std::endl << "\033[1;31m <-- EXCEPTION CATCHED\033[m" << std::endl;
		std::cerr << e.what() << std::endl;
        std::cout << "\033[1;31m EXCEPTION CATCHED -->\033[m" << std::endl << std::endl;
	}
}