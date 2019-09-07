#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

// 1
/*
int main()
{
    int a, b, c;
    cin >> a >> b >>c;
    
    
    if (a % 2 == 0 || b % 2 == 0 || c % 2 == 0)
    {
        if (a > b && a > c)
        {
            cout << a << endl;
        }
        if (b > a && b > c)
        {
            cout << b << endl;
        }
        if (c > a && c > b)
        {
            cout << c << endl;
        }
    } else {
        if (a < b && a < c)
        {
            cout << a << endl;
        } if (b < a && b < c)
        {
            cout << b << endl;
        } if (c < a && c < b)
        {
            cout << c << endl;
        }
    }

    system("pause");
    return 0;
}
*/

// 2
/*
 int main () {
    float parametr;
    int i = 0;
    while(i < 1)
    {
        i++;
        cout << "enter a number bigger than 1 " << endl;
        cin >> parametr;
        if(parametr < 1) 
        {
            i--;
        }
    };
    if ((1/parametr) < sin(parametr)) 
    {
        cout << "sin(a) > 1/a" << endl;
    } else if ((1/parametr) > sin(parametr)) {
        cout << "1/a > sin(a)" << endl;
    } else {
        cout << "1/a == sin(a)" << endl;
    }
    system("pause");
    return 0;
} */

// 3
/*
int main()
{
    double a, b;
    int i = 0;
    for (i; i < 1; i++)
    {
        cout << "Enter two diferent numbers " << endl;
        cin >> a >> b;
        if(a == b){
            i--;
        }
    }
    if (a > b){
        a = a*2;
        b = b/2;
    } else {
        a = a/2;
        b = b*2;
    };
    cout << "a = "<< a <<endl <<"b = " << b << endl;
    system("pause");
    return 0;
}
*/

//4
/*
int main () {
    int a, b, c, d;
    cout << "Enter three numbers"<< endl;
    cin >> a >> b >> c;
    if(a >= b && b >= c){
        a = a*2;
        b = b*2;
        c = c*2;
    } else {
        d = a;
        a = b;
        b = d;
    }
    cout << "a = " << a << endl <<"b = " << b << endl << "c = " << c << endl;
    system("pause");
    return 0;
}*/

//5
/*
int main () {
    float r, x, y, realX, realY;
    cout << "Enter side of a square " << endl;
    cin >> r;
    cout << "Enter x and y " << endl;
    cin >> x >> y;
    realX = r/2;
    realY = r/2;
    if(realY == y && realX == x){
        cout << "x and y are coordinates of the square center " << endl;
    } else {
        cout << "x and y are NOT coordinates of the square center" << endl;
    }
    system("pause");
    return 0;
}
*/

// 6
/*
int main()
{
    float x, y, a;
    cout << "Enter x" << endl;
    cin >> x;

    if (x > 10)
    {
        y = 1 / x;
        cout << "y = " << y << endl;
    }
    else if (x >= -10 && x <= 10)
    {
        cout << "Enter parametr" << endl;
        cin >> a;
        y = a * x * x;
        cout <<"y = "<< y<< endl;
    }
    if (x < -10)
    {
        y = sin(x);
        cout <<"y = " << y << endl;
    }
    else
    {
        cout << "something went wrong";
    }

    system("pause");
    return 0;
}
*/

// 7 - 18
/*
int main()
{
    int index, i = 0;
    float x, y, a;
    for (i; i < 1; i++)
    {  
        cout << "Enter exercise item (7-18)" << endl;
        cin >> index;
        (index >= 7 && index <= 18) ?: i--;
    }
    switch (index)
    {
    case 7:
    {   for(int c = 0; c < 1; c++){
        cout << "Enter x and a" << endl;
        cin >> x >> a;
        if (x < 4 || a <= 0)c--;
    }
    y = sqrt(x - 4) / sqrt(3*pow(a, 3));
    cout << "y = "<< y<< endl;
    }
    break;
    case 8:
    {   for(int c = 0; c < 1; c++){
        cout << "Enter x" << endl;
        cin >> x;
        if (x <= 2 && x >= -2)c--;
    } y = log10(pow(x, 2) - 4)/log10(4) + 1/x;
    cout << "y = " << y << endl;
    }
    break;
    case 9:
    {   for(int c = 0; c < 1; c++){
        cout << "Enter x and a" << endl;
        cin >> x >> a;
          if (x == 0 || (1 - a)/x <= 0 || log((1 - a)/x) < 0)c--;
    } y = sqrt(log((1 - a)/x));
        cout << "y = " << y << endl;
    }
    break;
    case 10:
    {   for(int c = 0; c < 1; c++){
        cout << "Enter x and a" << endl;
        cin >> x >> a;
        if (x == 2 || a == 0)c--;
    } y = sin(2*pow(x, 3))/(x + 2) + cos(x/2*a);
    cout << "y = " << y << endl;
    }
    break;
    case 11:
    {   for(int c = 0; c < 1; c++){
        cout << "Enter x and a" << endl;
        cin >> x >> a;
        if (a == 0 || (x > -2 && x < 2) || cos(x) == 0)c--;
    } y = sqrt(pow(x, 2) - 4)/(2*a*cos(x));
    cout << "y = " << y << endl;
    }
    break;
    case 12:
    {   for(int c = 0; c < 1; c++){
        cout << "Enter x" << endl;
        cin >> x;
        if (x <= -3 || x == 1)c--;
    }   y = (sqrt(x + 3) + pow(x, 3) + 3)/pow(x-1, 2) + (cos(pow(x, 3))/2);
    cout << "y = " << y << endl;
    }   
    break;
    case 13:
    {   for(int c = 0; c < 1; c++){
        cout << "Enter x and a" << endl;
        cin >> x >> a;
        if (sin(a) == 0 || x < 0)c--;
    }y = cos(pow(x, 3)) + sqrt(x)/sin(a);
    cout << "y = " << y << endl;
    }
    break;
    case 14:
    {   for(int c = 0; c < 1; c++){
        cout << "Enter x and a" << endl;
        cin >> x >> a;
        if ((x-a) == 0 || (2*x+3*a) < 0)c--;
    } y = tan(1/(x-a)) - sqrt(2*x+3*a);
     cout << "y = " << y << endl;
    }
    break;
    case 15:
    {   for(int c = 0; c < 1; c++){
        cout << "Enter x and a" << endl;
        cin >> x >> a;
         if (a <= 0)c--;
    }   y = pow(x, 3) + 1/sqrt(a);
    cout << "y = " << y << endl;
    }
    break;
    case 16:
    {   float b;
        for(int c = 0; c < 1; c++){
        cout << "Enter x, a and b" << endl;
        cin >> x >> a >>b;
        if (b == 0 || a <= 0)c--;
    } y = abs(x-b)/2*sqrt(a) - tan(x)/pow(b, 2);
    cout << "y = " << y << endl;
    }
    break;
    case 17:
    {   for(int c = 0; c < 1; c++){
        cout << "Enter x and a" << endl;
        cin >> x >> a;
        if (x == 1 || x == -1 || ((pow(x, 2)) + 4*a) < 0)c--;
    } y = (sqrt((pow(x, 2)) + 4*a) - cbrt(x)) / (1-pow(x, 2)/2);
     cout << "y = " << y << endl;
    }
    break;
    case 18:
    {   for(int c = 0; c < 1; c++){
        cout << "Enter x and a" << endl;
        cin >> x >> a;
        if (a == 2 || (2*x-a) == 0 || (sqrt(pow(a-x, 5)/pow(2*x-a, 3))) < 0 )c--;
    } y = (pow(x, 3) + x + 3) / (a -2) + sqrt(pow(a-x, 5)/pow(2*x-a, 3));
    cout << "y = " << y << endl;
    }
    break;
    }
    system("pause");
    return 0;
}*/