#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

main(){
    double a, b, c;
    cin>> a>> b>> c;
    double p=(a+b+c)/2;
    if (a*b*c<=0 || a+b<=c || b+c<=a || a+c<=b){
        cout<<"invalid";
    }
    else {
         double s=sqrt(p*(p-a)*(p-b)*(p-c));
        cout << fixed << setprecision(2) << s;
    }
    return 0;
}


