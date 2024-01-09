#ifndef INTERN_HPP
# define INTERN_HPP
# include "Form.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
        private:

        public:
                Intern();
                Intern(Intern & copy);
                Intern &operator=( Intern const & value );
                ~Intern();

                class InvalidFormException : public std::exception
                {
                        public:
                                const char* what() const throw()
                                {
                                        return ("Invalid form type");
                                }
                };
                Form *makeForm(const std::string name, const std::string target);
};

#endif