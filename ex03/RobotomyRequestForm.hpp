#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include <iostream>
# include <fstream>
# include <string>
# include <cstdlib>
# include <ctime>
# include "Form.hpp"
# include "Bureaucrat.hpp"

class RobotomyRequestForm : public Form
{
        private:
                int		_grade;
                std::string     _target;
                class ExecException : public std::exception
                {
                        public :
                                        
                                virtual const char *what() const throw()
                                {
                                        return (" Execution failed");
                                }
                };
                class GradeTooHighException : public std::exception
                {
                        public :		
                                
                                virtual const char *what() const throw()
                                {
                                        return ("RobotomyRequestForm failed : Grade is too High");
                                }
                };
                class GradeTooLowException : public std::exception
                {
                        public :
                                        
                                virtual const char *what() const throw()
                                {
                                        return("RobotomyRequestForm failed : Grade is too Low");
                                }
                };

        public:
                RobotomyRequestForm();
                RobotomyRequestForm(std::string name);
                RobotomyRequestForm(RobotomyRequestForm &copy);
                RobotomyRequestForm &operator=( RobotomyRequestForm const &value );
                ~RobotomyRequestForm();

                virtual void	execute(Bureaucrat const & executor) const;
                std::string     getTarget(void) const;
                void            setGrade(int i);
                void            robotomize(void) const;
};

int        random(int min, int max);
#endif