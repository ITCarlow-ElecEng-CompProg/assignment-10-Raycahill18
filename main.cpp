/** \ Ray Cahill
 *
 * \ Exercise 10
 * \ Computer programming
 * \ 15/11/2017
 *
 */

#include <iostream>
//#include <cmath>
#include <iomanip>

using namespace std;


/**< main function */
int main(void)
{
   /**< Variable Declerations */
    double R1 = 0, R2 = 0, C1 = 0, freq, D;
    double *freq_ptr, *D_ptr;

    /**< initialize pointers */

    freq_ptr = &freq;
    D_ptr = &D;

    /**<  local variable */
    void timer555(double *, double *, double, double, double);

    /**< main heading on screen the user will see */
    cout << "\n 555 Timer Calculations "<< endl;

    /**< while R1 is less than or equal to zero */
    while (R1<=0)
    {
        cout <<"\n Enter a value for resistor 1: ";
        cin >> R1;
    }
    /**< while R2 is less than or equal to zero */
    while (R2<=0)
    {
        cout <<"\n Enter a value for resistor 2: ";
        cin >> R2;
    }
    /**< while C1 is less than or equal to zero */
    while (C1<=0)
    {
        cout <<"\n Enter a value for Capacitor: ";
        cin >> C1;
    }

    timer555(freq_ptr, D_ptr, R1, R2, C1);

    /**< display variable values and addresses */

    cout << "\n Frequency output is : " << *freq_ptr << "Hz" << endl;

    cout << "\n Duty Cycle : \t" << *D_ptr << "%" << endl;

    return 0;
}

/**< Timer Function */
void timer555(double *freq, double *D, double R1, double R2, double C1)
{
    *freq =1.44 / ((R1 + 2 * R2) * C1);

    *D = (R1 + R2) / (R1 + (2 * R2));

    return;
}
