#include <iostream>
#include <iomanip>
using namespace std;

main()
{
    float c, f;
    cin>> c;
    f= c*1.8 + 32;
    cout << fixed << setprecision(2) << f;
    return 0;
}
