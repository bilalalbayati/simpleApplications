
#ifndef SDDS_LBLSHAPE_H
#define SDDS_LBLSHAPE_H
#include"Shape.h"
namespace sdds{

    class LblShape: public Shape{
        char *m_label;
    protected:
        const char *label()const;
    public:
        LblShape();
        LblShape(const char *label);
        virtual void draw(std::ostream& ostr)const = 0;
        virtual void getSpecs(std::istream& istr);
        ~LblShape();
        LblShape(const LblShape*)= delete;
        LblShape & operator =(const LblShape*) = delete;
    };
}

#endif