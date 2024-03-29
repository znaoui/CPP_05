#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("", false, 72, 45)
{
	std::cout << "Robotomy default constructor called" << std::endl;
        this->_target = "";
	this->_grade = 0;
}

RobotomyRequestForm::RobotomyRequestForm(std::string name) : Form(name, false, 72, 45)
{
	std::cout << "Robotomy default constructor called" << std::endl;
        this->_target = name;
	this->_grade = 0;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &copy) : Form("", false, 72, 45)
{
	std::cout << "Copy constructor called" << std::endl;
        *this = copy;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Robotomy destructor called" << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() < 72 && executor.getGrade() > 1 && this->getSignStatus() == true)
		robotomize();	
	else
		throw ExecException();
}

void RobotomyRequestForm::setGrade(int i)
{
	this->_grade = i;
}

std::string RobotomyRequestForm::getTarget(void) const
{
	return (this->_target);
}

void RobotomyRequestForm::robotomize(void) const
{
	if (random(0, 1))
		std::cout << "Beep.. " << this->_target << " has been successfully robotomized" << std::endl;
	else
		std::cout << "Robotomization failed" << std::endl;
}

int        random(int min, int max)
{
        static bool first = true;
        if (first) 
        {
                srand( time(NULL) );
                first = false;
        }
        return min + rand() % (( max + 1 ) - min);
}

RobotomyRequestForm & RobotomyRequestForm::operator=( RobotomyRequestForm const & value )
{
	std::cout << "Copy assignement operator called" << std::endl;
	this->_grade= value.getGradeExec();
	return (*this);
}