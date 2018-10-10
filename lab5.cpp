#include <iostream>
#include <math.h>
#include <fstream>
int main()
{
int a,b;
std::cout<<"write first side of triangle:";
std::cin>>a;
std::cout<<"write the second side of triangle:";
std::cin>>b;
auto c=sqrt(pow(a,2)+pow(b,2));
std::cout<<"third side is="<<c;
std::ofstream myfile;
myfile.open("example.txt");
if (myfile<<"your trianle has three sides first"<<a<<",second"<<b<<",third"<<c);

myfile.close() ;


    return 0;
}
