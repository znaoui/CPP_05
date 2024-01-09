#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string  	_name;
		bool				_isSigned;		
		const int			_gradeSign;
		const int			_gradeExec;
		class GradeTooHighException : public std::exception
		{
			public :
				
                virtual const char *what() const throw()
                {
                    return (" couldn't sign form because grade is too high");
                }
		};
		class GradeTooLowException : public std::exception
		{
			public :
				
                virtual const char *what() const throw()
                {
                    return(" couldn't sign form because grade is too low");
                }
		};

	public:
		Form(std::string name);
		Form(Form &copy);
		Form(std::string name, bool isSigned, int gradeSign, int gradeExec);
        Form &operator=( Form const & value );
		virtual ~Form();
		
        std::string     getName(void) const;
		int             getGradeSign(void) const;
		int             getGradeExec(void) const;
		bool            getSignStatus(void) const;
        bool            getSigned(void) const;
		void	        setSigned(bool i);
        void            beSigned(Bureaucrat const &bur);
        virtual void	execute(Bureaucrat const & executor) const = 0;
};

std::ostream & operator<<(std::ostream & out, Form const & value);

#endif