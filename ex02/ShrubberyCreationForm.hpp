#ifndef SHRUBBERRYCREATIONFORM_HPP
# define SHRUBBERRYCREATIONFORM_HPP

# include <iostream>
# include <fstream>
# include <string>

# include "Form.hpp"
# include "Bureaucrat.hpp"
class ShrubberyCreationForm : public Form
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
					return ("ShrubberyCreationForm failed : Grade is too High");
				}
		};
		class GradeTooLowException : public std::exception
		{
			public :
				
				virtual const char *what() const throw()
				{
					return("ShrubberyCreationForm failed : Grade is too Low");
				}
		};

public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string name);
        ShrubberyCreationForm(ShrubberyCreationForm &copy);
	ShrubberyCreationForm &operator=( ShrubberyCreationForm const & value );
	~ShrubberyCreationForm();

	virtual void	execute(Bureaucrat const & executor) const;
	std::string     getTarget(void) const;
	void	        setGrade(int i);
	void	        draw_tree(std::string target) const;
};

#endif