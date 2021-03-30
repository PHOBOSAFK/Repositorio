#include <math.h>
#include "libs/analog.h"
#include "libs/LCD.h"

int main(void) {

    const uint16_t B = 3.9E3;   // El beta de la formula, en grados Kelvin
    const uint16_t T0 = 298;    // T0 que es 25 Â°C pero lo ponemos en Kelvin
    const uint16_t R = 10E3;    // R(T0)
    unit16_t  var1,var2,var3,var4,varT;
    while(1) {
             var1= analogRead(0);
             float tension= (float)var1 *5/1023
             var2= (10E0*tension)/(5-tension);
             varT=(T0*B)/(T0*log(var2/R)+B)
             lcd.print("RNTC= "var2)
             lcdsetXY(2,0);
             varT= varT+273;
             lcd.print("T= "varT); // CAMDESSUS FRANCO, ALBARRACÌN ALEJANDRO, COLELLA FEDERICO
             
    

    return 0;
}
