#include<iostream>


double sqrt_newton(double n) {
    double x = n;  // initial guess

    for (int i = 0; i < 20; i++) {
        x = (x + n / x) / 2;
    }
    return x;
}

int main()
{
    double a{}, b{}, c{};
    std::cout<<"This is a Quadratic root finder\n";
    std::cout<<"Please Enter your quadratic function in form of ax^2 + bx + c = 0"<<std::endl<<std::flush;
    std::cout<<"Enter coefficients and constant accordingly to above mentioned order with a space\n";
    std::cin >> a >> b >> c;
    double disc = ((b*b) -(4*a*c));
    double r1, r2;

    if (a==0) {
        std::cout<<"The given Quadratic equation is invalid"<<std::endl<<std::flush;
        return -1;
    
    }
    if (disc>0) {
        std::cout<<"The roots are real and distinct"<<std::endl<<std::flush;
        double root = sqrt_newton(disc);
        r1 = (-b+root)/(2*a);
        r2 = (-b-root)/(2*a);

        std::cout << "Roots of the given quadratic equations are\n" << std::endl << std::flush;
        std::cout << r1 << std::endl << std::flush;
        std::cout << r2 << std::endl << std::flush;

    
    }
    else if (disc==0) {

        std::cout<<"The roots are real and equal"<<std::endl<<std::flush;
        r1 = (-b)/(2*a);

        std::cout << "Roots of the given quadratic equations are equal and :\n" << std::endl << std::flush;
        std::cout << r1 << std::endl << std::flush;
        
    
    }
    else {
        std::cout << "There are no real roots"<< std::endl;
        char cnfm;
        std::cout << "Do you want to proceed press y and if not press n" << std::endl << std::flush;
        std::cin >> cnfm;
        if (cnfm == 'y' || cnfm == 'Y') {
        
        }
        else if (cnfm == 'n' || cnfm == 'N') {
            std::cout << "Thank you for using quadratic root finder" << std::endl << std::flush;    
            return 0;
        }
        else {
            std::cout << "Wrong key" << std::endl << std::flush;
            return -1;
        }
    }

    return 0;
}