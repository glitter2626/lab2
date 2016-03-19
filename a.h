#ifndef _LAB_2_
#define _LAB_2_
#include<string>
class BMI{
    private:
        double height;
        double mass;
    public:
        BMI() : height(0), mass(0){}
        BMI(double a, double b) : height(a), mass(b){}
        ~BMI(){}
        double get_height();
        double get_mass();
        BMI & set_data(double a, double b);
        double get_bmi();
        std::string result(double c);
};
#endif
