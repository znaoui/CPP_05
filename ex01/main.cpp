#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	std::cout << "\033[1;31m Creating a Bureaucrat\033[m" << std::endl;
	Bureaucrat Test("Nordine");
    Form test("Petition", false, 42, 48);

	std::cout << std::endl << "\033[1;31m Changing his grade..\033[m" << std::endl;
	try
	{
        Test.setGrade(41);
        std::cout << Test << std::endl;
        std::cout << std::endl  << "\033[1;31m Trying to sign with sufisent grade\033[m" << std::endl;
		test.setSigned(false);
		Test.signForm(test);
		std::cout << std::endl << "\033[1;31m Trying to sign with inssufisent grade\033[m" << std::endl;
		Test.setGrade(83);
		test.setSigned(false);
		Test.signForm(test);
        std::cout << std::endl;
	}
	catch (std::exception const &e)
	{
		std::cout << std::endl << "\033[1;31m <-- EXCEPTION CATCHED\033[m" << std::endl;
		std::cout << Test.getName() << " ";
		std::cerr << e.what() << std::endl;
		std::cout << "\033[1;31m EXCEPTION CATCHED -->\033[m" << std::endl << std::endl;
	}
}