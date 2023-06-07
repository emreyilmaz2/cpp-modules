#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>

class Form{
private:
    const std::string name;
    bool isSigned;
    const int gradeToSign;
    const int gradeToExecute;
public:
    void setName( std::string newName );
    void setGradeToSign( int gradeToSign);
    void setGradeToExecute( int gradeToExecute);
    
    std::string getName( void );
    int getGradeToSign( void );
    int getGradeToExecute( void );

};


#endif
