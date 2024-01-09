#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>

class   Bureaucrat
{
	private:
		const   std::string     _name;
		int                     _grade;
		class GradeTooHighException : public std::exception
		{
			public :

                virtual const char *what() const throw()
                {
                    return ("grade is too high");
                }
		};
		class GradeTooLowException : public std::exception
		{
			public :

            	virtual const char *what() const throw()
                {
                    return ("grade is too low");
                }
		};

	public:
		Bureaucrat();
		Bureaucrat(const std::string name);
		Bureaucrat(Bureaucrat &copy);
		Bureaucrat &operator=( Bureaucrat const & value );
		~Bureaucrat();

		std::string     getName(void) const;
		int	        	getGrade(void) const;
		void            setGrade(int size);
		void            incrementGrade(void);
		void            decrementGrade(void);
};

std::ostream & operator<<(std::ostream & out, Bureaucrat const & value);

#endif