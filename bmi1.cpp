#include"a.h"
double BMI::get_height(){return height;}
double BMI::get_mass(){return mass;}
BMI & BMI::set_data(double a, double b){height = a; mass = b; return *this;}
double BMI::get_bmi(){return mass / (height * 0.01 * height * 0.01);}
std::string BMI::result(double bmi){
    if(bmi < 15)
        return "Very severely underweight";
    else if(bmi >= 15 && bmi < 16)
        return "Severely underweight";
    else if(bmi >= 16 && bmi < 18.5)
        return "Underweight";
    else if(bmi >= 18.5 && bmi < 25)
        return "Normal";
    else if(bmi >= 25 && bmi < 30)
        return "Overweight";
    else if(bmi >= 30 && bmi < 35)
        return "Obese ClassI(Moderately obese)";
    else if(bmi >= 35 && bmi < 40)
        return "Obese ClassII(Severely obese)";
    else
        return "Obese ClassIII(Very severely obese)";
}
