
#ifndef SDDS_RECTANGLE_H
#define SDDS_RECTANGLE_H
#include"LblShape.h"
namespace sdds{
    class Rectangle:public LblShape{
        int m_width;
        int m_height;
    public:
        Rectangle(); 
        Rectangle(const char* label,int width,int height);
        void getSpecs(std::istream& istr);
        void draw(std::ostream& ostr)const;
    };
    std::ostream& operator<<(std::ostream& ostr, const Rectangle& A);
    std::istream& operator>>(std::istream& istr, Rectangle& A);
}
#endif