#include <fstream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    double a, b, c, x1, x2, sqr;
    fin >> fixed;
    fin >> setprecision(3) >> a >> b >>c;
    sqr = (pow(b,2) - (4 * a * c));
    sqr > 0 ? sqr = sqr: sqr = -sqr;
    if (a <= 10000 && a >= -10000 && b <= 10000 && b >= -10000 && c <= 10000 && c >= -10000 && a != 0 && sqr >= 0) {
    x1 = (sqrt(sqr) - b)/(2 * a);
    x2 = (0 - sqrt(sqr) - b)/(2 * a);
    fout << fixed;
    fout << setprecision(3) <<x2 << ' ' << x1;
    }
    system("pause");
    return 0;
}
