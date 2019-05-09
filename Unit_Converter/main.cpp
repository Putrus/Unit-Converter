
    #include <iostream>
    #include <string>
    #include <cmath>
    #include <windows.h>

    int main()
    {
    char first_, second_;
    bool c,k;
    double value, result;
    std::cout<<"##################################################\n"
    <<"#                                                #\n"
    <<"#         Welcome to Super Unit Converter        #\n"
    <<"#                                                #\n"
    <<"##################################################\n";

    std::cout<<"Enter conversion unit(s, m, h) : ";
    std::cin>>first_;
    if(first_ != 's'&& first_ != 'm'&& first_ != 'h')
    {
    
        std::cout<<"ERROR 404";
        Sleep(3000);
        return 0;
    }
    else
    {
    std::cout<<"How many? ";
    std::cin>>value;
    if (value<0)
    {
    	std::cout<<"ERROR 404";
    	Sleep(3000);
    	return 0;
	}
    
    
    
    if( !(std::cin.good()) )
{ // wpisano coœ, co nie jest liczb¹
   
    std::cout<<"ERROR 404";
    Sleep(3000);
    return 0;
}
else
{ // wpisano liczbê
    std::cout<<"Enter unit to convert to(s, m, h) : ";
    std::cin>>second_;

    if(second_ != 's' && second_ != 'm'&& second_ != 'h')
    {
        std::cout<<"ERROR 404";
        Sleep(3000);
        return 0;
    }
    else
    {
    if(first_ == second_)
    {
        result = value;
    }
    else if(first_ == 's' && second_ == 'm')
    {
        result = value/60;

    }
    else if(first_ == 's' && second_ == 'h')
    {
        result = value/3600;
    }
    else if(first_ == 'm' && second_ == 's')
    {
        result = value*60;
    }
    else if(first_== 'm' && second_ == 'h')
    {
        result = value/60;
    }
    else if(first_ == 'h'&& second_ == 's')
    {
        result = value*3600;
    }
    else if(first_ == 'h'&& second_ == 'm')
    {
        result = value*60;
    }

    }

    }
    std::cout<<"Result: "<<result<<" "<<second_;
    Sleep(4000);
}

    
    }
