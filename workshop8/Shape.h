
#ifndef SDDS_SHAPE_H
#define SDDS_SHAPE_H
namespace sdds{

    class Shape{
    public:
        virtual void draw(std::ostream& ostr)const = 0;
        virtual void getSpecs(std::istream& istr) = 0;
        virtual ~Shape() {}
        void strCpy(char* des, const char* src);
        int strLen(const char* s);
    };
    std::ostream& operator<<(std::ostream& ostr, const Shape& A);
    std::istream& operator>>(std::istream& istr, Shape& A);
}

#endif