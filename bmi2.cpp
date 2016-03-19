#include<iostream>
#include<fstream>
#include<cstdlib>
#include"a.h"
using namespace std;
int main(){
    BMI test;
    double h, m;
    ifstream in;
    ofstream out;
    in.open("file.in");
    if(!in)
        exit(1);
    out.open("file.out");
    if(!out)
        exit(1);
    while(in>>h>>m){
        if(h <= 0 || m <= 0)
            break; 
        test.set_data(h, m);
        out<<test.get_bmi()<<" "<<test.result(test.get_bmi())<<endl;
    }
    return 0;
}
