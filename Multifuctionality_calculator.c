#include <stdio.h>
#include<math.h>

int m1,n1,m2,n2,sum;
int matrix1[100][100];
int matrix2[100][100];
int result[100][100];
int scal;


// Conversion

void celcius()
{
int m;
float tem;
while(1) {printf("Select:\n 1. To kelvin\n 2. To Fahrenheit\n 3. Back\n\t");
scanf("%d",&m);
printf("Enter temperature in Celcius\t");
scanf("%f",&tem);
switch (m)
{
case 1:
system("cls");
    tem = tem + 273.15;
    break;
case 2:
system("cls");
    tem =(tem * (1.8));
    tem = tem +32;
    break;
case 3:
system("cls");
goto end;
    break;
default:
printf("Invalid input");
    break;
}
printf("%f\n",tem);}
end:;
}

void kelvin()
{
int m;
float tem;
while(1){
printf("Select:\n 1. To Celcius\n 2. To Fahrenheit\n 3. Back\n\t");
scanf("%d",&m);
printf("Enter temperature in Kelvin\t");
scanf("%f",&tem);
switch (m)
{
case 1:
system("cls");
    tem = tem - 273.15;
    break;
case 2:
system("cls");
    tem = tem - 273.15;
    tem =(tem * (1.8));
    tem = tem +32;
    break;
case 3:
system("cls");
goto  end;
default:
    break;
}
printf("%f\n",tem);}
end:;
}

void fahrenheit()
{
int m;
float tem;
while(1) {
printf("Select:\n 1. To Celcius\n 2. To Kelvin\n 3. Back\n\t");
scanf("%d",&m);
printf("Enter temperature in Kelvin\t");
scanf("%f",&tem);
switch (m)
{
case 1:
system("cls");
    tem = tem - 32;
    tem =(tem * (0.55555555556));
    break;
case 2:
system("cls");
    tem = tem - 32;
    tem =(tem * (0.55555555556));
    tem = tem + 273.15;
    break;
case 3:
system("cls");
goto  end;
default:
    break;
}
printf("%f\n",tem);}
end:;
}

void km()
{
int m;
float len;
while(1) {
printf("Select:\n 1. To Mile\n 2. To Yard\n 3. To Foot\n 4. Inch\n 5. To Metre\n 6. To Centimeter\n 7. To Milimeter\n 8. Back\n\t");
scanf("%d",&m);
printf("Enter length in Kilometer\t");
scanf("%f",&len);
switch (m)
{
case 1:
system("cls");
    len = len * 0.621371;
    break;
case 2:
system("cls");
    len = len * 1093.61;
    break;
case 3:
system("cls");
    len = len * 3280.84;
    break;
case 4:
system("cls");
    len = len * 39370.1;
    break;
case 5:
system("cls");
    len = len * 1000;
    break;
case 6:
system("cls");
    len = len * 100000;
    break;
case 7:
system("cls");
    len = len * 1000000;
    break;
case 8:
system("cls");
goto end;
    break;
default:
    break;
}
printf("%f\n",len);}
end:;
}

void mile()
{
int m;
float len;
while(1) {
printf("Select:\n 1. To Kilometer\n 2. To Yard\n 3. To Foot\n 4. Inch\n 5. To Metre\n 6. To Centimeter\n 7. To Milimeter\n 8. Back\t");
scanf("%d",&m);
printf("Enter length in Mile\t");
scanf("%f",&len);
switch (m)
{
case 1:
system("cls");
    len = len * 1.60934;
    break;
case 2:
system("cls");
    len = len * 1760;
    break;
case 3:
system("cls");
    len = len * 5280;
    break;
case 4:
system("cls");
    len = len * 63360;
    break;
case 5:
system("cls");
    len = len * 1609.34;
    break;
case 6:
system("cls");
    len = len * 160934;
    break;
case 7:
system("cls");
    len = len * 1609000;
    break;
case 8:
system("cls");
goto  end;
    break;
default:
    break;
}
printf("%f\n",len);}
end:;
}

void yard()
{
int m;
float len;
while(1) {
printf("Select:\n 1. To Mile\n 2. To Kilometer\n 3. To Foot\n 4. Inch\n 5. To Metre\n 6. To Centimeter\n 7. To Milimeter\n 8. Back\n\t");
scanf("%d",&m);
printf("Enter length in Yard\t");
scanf("%f",&len);
switch (m)
{
case 1:
system("cls");
    len = len * 0.000568182;
    break;
case 2:
system("cls");
    len = len * 0.0009144;
    break;
case 3:
system("cls");
    len = len * 3;
    break;
case 4:
system("cls");
    len = len * 12;
    break;
case 5:
system("cls");
    len = len * 0.3048;
    break;
case 6:
system("cls");
    len = len * 30.48;
    break;
case 7:
system("cls");
    len = len * 304.8;
    break;
case 8:
system("cls");
goto  end;
    break;
default:
    break;
}
printf("%f\n",len);}
end:;
}

void foot()
{
int m;
float len;
while(1) {
printf("Select:\n 1. To Mile\n 2. To Yard\n 3. To Kilometer\n 4. Inch\n 5. To Metre\n 6. To Centimeter\n 7. To Milimeter\n 8. Back\n\t");
scanf("%d",&m);
printf("Enter length in Foot\t");
scanf("%f",&len);
switch (m)
{
case 1:
system("cls");
    len = len * 0.000189394;
    break;
case 2:
system("cls");
    len = len * 0.333333;
    break;
case 3:
system("cls");
    len = len * 0.0003048;
    break;
case 4:
system("cls");
    len = len * 12;
    break;
case 5:
system("cls");
    len = len * 0.3048;
    break;
case 6:
system("cls");
    len = len * 30.48;
    break;
case 7:
system("cls");
    len = len * 304.8;
    break;
case 8:
system("cls");
goto end;
    break;
default:
    break;
}
printf("%f\n",len);}
end:;
}

void inch()
{
int m;
float len;
while(1) {
printf("Select:\n 1. To Mile\n 2. To Yard\n 3. To Foot\n 4. Kilometer\n 5. To Metre\n 6. To Centimeter\n 7. To Milimeter\n 8. Back\n\t");
scanf("%d",&m);
printf("Enter length in Inch\t");
scanf("%f",&len);
switch (m)
{
case 1:
system("cls");
    len = len * 0.000015783;
    break;
case 2:
system("cls");
    len = len * 0.0277778;
    break;
case 3:
system("cls");
    len = len * 0.0833333;
    break;
case 4:
system("cls");
    len = len * 0.0000254;
    break;
case 5:
system("cls");
    len = len * 0.0254;
    break;
case 6:
system("cls");
    len = len * 2.54;
    break;
case 7:
system("cls");
    len = len * 25.4;
    break;
case 8:
system("cls");
goto end;
    break;
default:
    break;
}
printf("%f\n",len);}
end:;
}

void me()
{
int m;
float len;
while(1) {
printf("Select:\n 1. To Mile\n 2. To Yard\n 3. To Foot\n 4. Inch\n 5. To Kilometre\n 6. To Centimeter\n 7. To Milimeter\n 8. Back\n\t");
scanf("%d",&m);
printf("Enter length in Meter\t");
scanf("%f",&len);
switch (m)
{
case 1:
system("cls");
    len = len * 0.000621371;
    break;
case 2:
system("cls");
    len = len * 1.09361;
    break;
case 3:
system("cls");
    len = len * 3.28084;
    break;
case 4:
system("cls");
    len = len * 39.3701;
    break;
case 5:
system("cls");
    len = len * 0.001;
    break;
case 6:
system("cls");
    len = len * 100;
    break;
case 7:
system("cls");
    len = len * 1000;
    break;
case 8:
system("cls");
goto end;
    break;
default:
    break;
}
printf("%f\n",len);}
end:;
}

void cm()
{
int m;
float len;
while(1) {
printf("Select:\n 1. To Mile\n 2. To Yard\n 3. To Foot\n 4. Inch\n 5. To Metre\n 6. To Kilometer\n 7. To Milimeter\n 8. Back\n\t");
scanf("%d",&m);
printf("Enter length in Centimeter\t");
scanf("%f",&len);
switch (m)
{
case 1:
system("cls");
    len = len * 0.00000621371;
    break;
case 2:
system("cls");
    len = len * 0.0109361;
    break;
case 3:
system("cls");
    len = len * 0.0328084;
    break;
case 4:
system("cls");
    len = len * 0.393701;
    break;
case 5:
system("cls");
    len = len * 0.01;
    break;
case 6:
system("cls");
    len = len * 0.00001;
    break;
case 7:
system("cls");
    len = len * 10;
    break;
case 8:
system("cls");
goto end;
    break;
default:
    break;
}
printf("%f\n",len);}
end:;
}

void mm()
{
int m;
float len;
while(1) {
printf("Select:\n 1. To Mile\n 2. To Yard\n 3. To Foot\n 4. Inch\n 5. To Metre\n 6. To Centimeter\n 7. To Kilometer\n 8. Back\n\t");
scanf("%d",&m);
printf("Enter length in Milimeter\t");
scanf("%f",&len);
switch (m)
{
case 1:
system("cls");
    len = len * 0.000000621371;
    break;
case 2:
system("cls");
    len = len * 0.00109361;
    break;
case 3:
system("cls");
    len = len * 0.00328084;
    break;
case 4:
system("cls");
    len = len * 0.0393701;
    break;
case 5:
system("cls");
    len = len * 0.001;
    break;
case 6:
system("cls");
    len = len * 0.1;
    break;
case 7:
system("cls");
    len = len *  0.000001;
    break;
case 8:
system("cls");
goto end;
default:
    break;
}
printf("%f\n",len);}
end:;
}

void pound()
{
int m;
float weight;
while(1) {
printf("Select:\n 1. To Ounce\n 2. To Stone\n 3. To Tonnes\n 4. Kilogram\n 5. To Gram\n 6. To Miligram\n 7. Back\n\t");
scanf("%d",&m);
printf("Enter weight in Pound\t");
scanf("%f",&weight);
switch (m)
{
case 1:
system("cls");
    weight = weight * 16;
    break;
case 2:
system("cls");
    weight = weight * 0.0714286;
    break;
case 3:
system("cls");
    weight = weight * 0.000453592;
    break;
case 4:
system("cls");
    weight = weight * 0.453592;
    break;
case 5:
system("cls");
    weight = weight * 453.592;
    break;
case 6:
system("cls");
    weight = weight * 453592;
    break;
case 7:
system("cls");
goto end;
default:
    break;
}
printf("%f\n",weight);}
end:;
}

void ounce()
{
int m;
float weight;

while(1) {
printf("Select:\n 1. To Pound\n 2. To Stone\n 3. To Tonnes\n 4. Kilogram\n 5. To Gram\n 6. To Miligram\n  7. Back\n\t");
scanf("%d",&m);
printf("Enter weight in Ounce\t");
scanf("%f",&weight);
switch (m)
{
case 1:
system("cls");
    weight = weight * 0.0625;
    break;
case 2:
system("cls");
    weight = weight * 0.00446429;
    break;
case 3:
system("cls");
    weight = weight * 0.00002835;
    break;
case 4:
system("cls");
    weight = weight * 0.0283495;
    break;
case 5:
system("cls");
    weight = weight * 28.3495;
    break;
case 6:
system("cls");
    weight = weight * 28349.5;
    break;
case 7:
system("cls");
goto end;
default:
    break;
}
printf("%f\n",weight);}
end:;
}

void stone()
{
int m;
float weight;
while(1) {
printf("Select:\n 1. To Ounce\n 2. To Pound\n 3. To Tonnes\n 4. Kilogram\n 5. To Gram\n 6. To Miligram\n 7. Back\n\t");
scanf("%d",&m);
printf("Enter weight in Stone\t");
scanf("%f",&weight);
switch (m)
{
case 1:
system("cls");
    weight = weight * 224;
    break;
case 2:
system("cls");
    weight = weight * 14;
    break;
case 3:
system("cls");
    weight = weight * 0.00635029;
    break;
case 4:
system("cls");
    weight = weight * 6.35029;
    break;
case 5:
system("cls");
    weight = weight * 6350.29;
    break;
case 6:
system("cls");
    weight = weight * 6350290;
    break;
case 7:
system("cls");
goto end;
default:
    break;
}
printf("%f\n",weight);}
end:;
}

void tonne()
{
int m;
float weight;
while(1) {
printf("Select:\n 1. To Ounce\n 2. To Stone\n 3. To Pound\n 4. Kilogram\n 5. To Gram\n 6. To Miligram\n 7. Back\n\t");
scanf("%d",&m);
printf("Enter weight in Tonne\t");
scanf("%f",&weight);
switch (m)
{
case 1:
system("cls");
    weight = weight * 35274;
    break;
case 2:
system("cls");
    weight = weight * 157.473;
    break;
case 3:
system("cls");
    weight = weight * 2204.62;
    break;
case 4:
system("cls");
    weight = weight * 1000;
    break;
case 5:
system("cls");
    weight = weight * 1000000;
    break;
case 6:
system("cls");
    weight = weight * 1000000000;
    break;
case 7:
system("cls");
goto end;
default:
    break;
}
printf("%f\n",weight);}
end:;
}

void kg()
{
int m;
float weight;
while(1) {
printf("Select:\n 1. To Ounce\n 2. To Stone\n 3. To Tonnes\n 4. Pound\n 5. To Gram\n 6. To Miligram\n 7. Back\n\t");
scanf("%d",&m);
printf("Enter weight in Kilogram\t");
scanf("%f",&weight);
switch (m)
{
case 1:
system("cls");
    weight = weight * 35.274;
    break;
case 2:
system("cls");
    weight = weight * 0.157473;
    break;
case 3:
system("cls");
    weight = weight * 0.001;
    break;
case 4:
system("cls");
    weight = weight * 2.20462;
    break;
case 5:
system("cls");
    weight = weight * 1000;
    break;
case 6:
system("cls");
    weight = weight * 1000000;
    break;
case 7:
system("cls");
goto end;
default:
    break;
}
printf("%f\n",weight);}
end:;
}

void g()
{
int m;
float weight;
while(1) {
printf("Select:\n 1. To Ounce\n 2. To Stone\n 3. To Tonnes\n 4. Kilogram\n 5. To Pound\n 6. To Miligram\n  7. Back\n\t");
scanf("%d",&m);
printf("Enter weight in Gram\t");
scanf("%f",&weight);
switch (m)
{
case 1:
system("cls");
    weight = weight * 0.035274;
    break;
case 2:
system("cls");
    weight = weight * 0.000157473;
    break;
case 3:
system("cls");
    weight = weight * 0.000001;
    break;
case 4:
system("cls");
    weight = weight * 0.001;
    break;
case 5:
system("cls");
    weight = weight * 0.00220462;
    break;
case 6:
system("cls");
    weight = weight * 1000;
    break;
case 7:
system("cls");
goto end;
default:
    break;
}
printf("%f\n",weight);}
end:;
}

void mg()
{
int m;
float weight;
while(1) {
printf("Select:\n 1. To Ounce\n 2. To Stone\n 3. To Tonnes\n 4. Kilogram\n 5. To Gram\n 6. To Pound\n 7. Back\n\t");
scanf("%d",&m);
printf("Enter weight in Miligram\t");
scanf("%f",&weight);
switch (m)
{
case 1:
system("cls");
    weight = weight * 0.000035274;
    break;
case 2:
system("cls");
    weight = weight * 0.000000157473;
    break;
case 3:
system("cls");
    weight = weight * 0.000000001;
    break;
case 4:
system("cls");
    weight = weight * 0.000001;
    break;
case 5:
system("cls");
    weight = weight * 0.001;
    break;
case 6:
system("cls");
    weight = weight *  0.00000220462;
    break;
case 7:
system("cls");
goto end;
default:
    break;
}
printf("%f\n",weight);}
end:;
}

void radian()
{
int m;
float ang;
while(1) {
printf("Select:\n 1. Degree\n 2. Minutes of arc\n 3. Seconds of arc\n 4. Gardians\n 5. Back\n\t");
scanf("%d",&m);
printf("\nEnter angle in Radian:\t");
scanf("%f",&ang);
switch (m)
{
case 1:
system("cls");
ang = ang * 0.017453292519943;
    break;
case 2:
system("cls");
ang = ang * 0.0002908882086;
    break;
case 3:
system("cls");
ang = ang * 0.000004848136811;
    break;
case 4:
system("cls");
ang = ang * 0.01570796327;
    break;
case 5:
system("cls");
goto end;
default:
printf("Inalid input");
    break;
}
printf("%f\n",ang);}
end:;
}

void degree()
{
int m;
float ang;
while(1) {
printf("Select:\n 1. Radian\n 2. Minutes of arc\n 3. Seconds of arc\n 4. Gardians\n 5. Back\n\t");
scanf("%d",&m);
printf("\nEnter angle in Degree:\t");
scanf("%f",&ang);
switch (m)
{
case 1:
system("cls");
ang = ang * 0.017453292519943;
    break;
case 2:
system("cls");
ang = ang * 60;
    break;
case 3:
system("cls");
ang = ang * 3600;
    break;
case 4:
system("cls");
ang = ang * 1.11111111111;
    break;
case 5:
system("cls");
goto end;
default:
printf("Inalid input");
    break;
}
printf("%f\n",ang);}
end:;
}

void minute()
{
int m;
float ang;
while(1) {
printf("Select:\n 1. Radian\n 2. Degree\n 3. Seconds of arc\n 4. Gardians\n 5. Back\n\t");
scanf("%d",&m);
printf("\nEnter angle in Minute:\t");
scanf("%f",&ang);
switch (m)
{
case 1:
system("cls");
ang = ang * 0.00029088820866572;
    break;
case 2:
system("cls");
ang = ang * 0.016666666666667;
    break;
case 3:
system("cls");
ang = ang * 60;
    break;
case 4:
system("cls");
ang = ang * 0.018518518518519;
    break;
case 5:
system("cls");
goto end;
default:
printf("Inalid input");
    break;
}
printf("%f\n",ang);}
end:;
}

void second()
{
int m;
float ang;
while(1) {
printf("Select:\n 1. Degree\n 2. Minutes of arc\n 3. Radian\n 4. Gardians\n 5. Back\n\t");
scanf("%d",&m);
printf("\nEnter angle in Second:\t");
scanf("%f",&ang);
switch (m)
{
case 1:
system("cls");
ang = ang * 0.00027777777777778;
    break;
case 2:
system("cls");
ang = ang * 0.016666666666667;
    break;
case 3:
system("cls");
ang = ang * 0.0000048481368110954;
    break;
case 4:
system("cls");
ang = ang * 0.00030864197530864;
    break;
case 5:
system("cls");
goto end;
default:
printf("Inalid input");
    break;
}
printf("%f\n",ang);}
end:;
}

void gradian()
{
int m;
float ang;
while(1) {
printf("Select:\n 1. Degree\n 2. Minutes of arc\n 3. Seconds of arc\n 4. Radian\n 5. Back\n\t");
scanf("%d",&m);
printf("\nEnter angle in Second:\t");
scanf("%f",&ang);
switch (m)
{
case 1:
system("cls");
ang = ang * 0.9;
    break;
case 2:
system("cls");
ang = ang * 54;
    break;
case 3:
system("cls");
ang = ang * 3240;
    break;
case 4:
system("cls");
ang = ang * 0.015707963267949;
    break;
case 5:
system("cls");
goto end;
default:
printf("Inalid input");
    break;
}
printf("%f\n",ang);}
end:;
}

void week()
{
int m;
float time;
while(1) {
printf("Select:\n 1. Day\n 2. Hour\n 3. Minute\n 4. Second\n 5. Back\n\t");
scanf("%d",&m);
printf("\nEnter time in week:\t");
scanf("%f",&time);
switch (m)
{
case 1:
system("cls");
time = time * 7;
    break;
case 2:
system("cls");
time = time * 168;
    break;
case 3:
system("cls");
time = time * 10080;
    break;
case 4:
system("cls");
time = time * 604800;
    break;
case 5:
system("cls");
goto end;
default:
printf("Inalid input");
    break;
}
printf("%f\n",time);}
end:;
}

void day()
{
int m;
float time;
while(1) {
printf("Select:\n 1. Week\n 2. Hour\n 3. Minute\n 4. Second\n 5. Back\n\t");
scanf("%d",&m);
printf("\nEnter time in Day:\t");
scanf("%f",&time);
switch (m)
{
case 1:
system("cls");
time = time / 7;
    break;
case 2:
system("cls");
time = time * 24;
    break;
case 3:
system("cls");
time = time * 1440;
    break;
case 4:
system("cls");
time = time * 86400;
    break;
case 5:
system("cls");
goto end;
default:
printf("Inalid input");
    break;
}
printf("%f\n",time);}
end:;
}

void hour()
{
int m;
float time;
while(1) {
printf("Select:\n 1. Day\n 2. Week\n 3. Minute\n 4. Second\n 5. Back\n\t");
scanf("%d",&m);
printf("\nEnter time in Hour:\t");
scanf("%f",&time);
switch (m)
{
case 1:
system("cls");
time = time / 24;
    break;
case 2:
system("cls");
time = time / 168;
    break;
case 3:
system("cls");
time = time * 60;
    break;
case 4:
system("cls");
time = time * 3600;
    break;
case 5:
system("cls");
goto end;
default:
printf("Inalid input");
    break;
}
printf("%f\n",time);}
end:;
}

void mins()
{
int m;
float time;
while(1) {
printf("Select:\n 1. Day\n 2. Hour\n 3. Week\n 4. Second\n 5. Back\n\t");
scanf("%d",&m);
printf("\nEnter time in Minute:\t");
scanf("%f",&time);
switch (m)
{
case 1:
system("cls");
time = time / 1440;
    break;
case 2:
system("cls");
time = time / 60;
    break;
case 3:
system("cls");
time = time / 10080;
    break;
case 4:
system("cls");
time = time * 60;
    break;
case 5:
system("cls");
goto end;
default:
printf("Inalid input");
    break;
}
printf("%f\n",time);}
end:;
}

void secs()
{
int m;
float time;
while(1) {
printf("Select:\n 1. Day\n 2. Hour\n 3. Minute\n 4. Week\n 5. Back\n\t");
scanf("%d",&m);
printf("\nEnter time in Second:\t");
scanf("%f",&time);
switch (m)
{
case 1:
system("cls");
time = time / 86400;
    break;
case 2:
system("cls");
time = time / 3600;
    break;
case 3:
system("cls");
time = time / 60;
    break;
case 4:
system("cls");
time = time / 604800;
    break;
case 5:
system("cls");
goto end;
default:
printf("Inalid input");
    break;
}
printf("%f\n",time);}
end:;
}

void conversion()
{
int m;
while(1) {
printf("Select:\n 1. Temperature\n 2. Length\n 3. Weight\n 4. Angle\n 5. Time\n 6. Back\t");
scanf("%d",&m);
switch (m)
{
case 1:
system("cls");
temperature();
    break;
case 2:
system("cls");
length();
    break;
case 3:
system("cls");
weight();
    break;
case 4:
system("cls");
angle();
    break;
case 5:
system("cls");
time();
    break;
case 6:
system("cls");
goto end;
default:
printf("Inalid input");
    break;
}}
end:;
}

void temperature()
{
int m;
while(1) {
printf("Select:\n 1. Celcius\n 2. Kelvin\n 3. Fahrenheit\n 4. Back\n\t");
scanf("%d",&m);
switch (m)
{
case 1:
system("cls");
celcius();
    break;
case 2:
system("cls");
kelvin();
    break;
case 3:
system("cls");
fahrenheit();
    break;
case 4:
system("cls");
goto end;
default:
printf("Inalid input");
    break;
}}
end:;
}

void length()
{
int m;
while(1) {
printf("Select:\n 1. Mile\n 2. Yard\n 3. Foot\n 4. Inch\n 5. Kilometer\n 6. Meter\n 7. Centimeter\n 8. Milimeter\n 9. Back\n\t");
scanf("%d",&m);
switch (m)
{
case 1:
system("cls");
mile();
    break;
case 2:
system("cls");
yard();
    break;
case 3:
system("cls");
foot();
    break;
case 4:
system("cls");
inch();
    break;
case 5:
system("cls");
km();
    break;
case 6:
system("cls");
me();
    break;
case 7:
system("cls");
cm();
    break;
case 8:
system("cls");
mm();
    break;
case 9:
system("cls");
goto end;
default:
printf("Inalid input");
    break;
}}
end:;
}

void weight()
{
int m;
while(1) {
printf("Select:\n 1. Pound\n 2. Ounce\n 3. Stone\n 4. Tonne\n 5. Kilogram\n 6. Gram\n 7. Miligram\n 8. Back\n\t");
scanf("%d",&m);
switch (m)
{
case 1:
system("cls");
pound();
    break;
case 2:
system("cls");
ounce();
    break;
case 3:
system("cls");
stone();
    break;
case 4:
system("cls");
tonne();
    break;
case 5:
system("cls");
kg();
    break;
case 6:
system("cls");
g();
    break;
case 7:
system("cls");
mg();
case 8:
system("cls");
goto end;
    break;
default:
printf("Inalid input");
    break;
}}
end:;
}

void angle()
{
int m;
while(1) {
printf("Select:\n 1. Radian\n 2. Minute\n 3. Degree\n 4. Second\n 5. Gradient\n 6. Back\n\t");
scanf("%d",&m);
switch (m)
{
case 1:
system("cls");
radian();
    break;
case 2:
system("cls");
minute();
    break;
case 3:
system("cls");
degree();
    break;
case 4:
system("cls");
second();
    break;
case 5:
system("cls");
gradian();
    break;
case 6:
system("cls");
goto end;
default:
printf("Inalid input");
    break;
}}end:;
}

void time()
{
int m;
while(1) {
printf("Select:\n 1. Week\n 2. Day\n 3. Hour\n 4. Minute\n 5. Second\n 6. Back\n\t");
scanf("%d",&m);
switch (m)
{
case 1:
week();
    break;
case 2:
day();
    break;
case 3:
hour();
    break;
case 4:
mins();
    break;
case 5:
secs();
    break;
case 6:
system("cls");
goto end;
default:
printf("Inalid input");
    break;
}}
end:;
}
// simplecal
void simplecal(){ 
int num1,num2,result;
int operation;
while(1) {
printf("Select.\n 1 = Add. \n 2 = Subtract. \n 3 = Divide. \n 4 = Multiply. \n 5. Back\n\t");
    scanf("%d",&operation);
    printf("Enter 1st Number:\t");
    scanf("%d",&num1);
    printf("Enter 2nd Number:\t");
    scanf("%d",&num2);
    switch (operation)
    {
    case 1:
    system("cls");
        result = num1+num2;
        break;
    case 2:
    system("cls");
    result = num1-num2;
        break;
    case 3:
    system("cls");
        result = num1*num2;
        break;
    case 4:
    system("cls");
        result = num1/num2;
      break;
    case 5:
    system("cls");
    goto end;
        break;
    default:
    printf("Inalid input");
        break;
    }
    printf("%d\n",result);}
    end:;
}
//advfunctions

int fact(int n){
int facto;
if (n==0 || n== 1)
{
    facto = 1;
}
else{
    facto = n * (fact(n-1));
}
return facto;
}

void factorial()
{
int n;
    printf("Enter the number:\t");
    scanf("%d",&n);
int facto = fact(n);
printf("%d\n",facto);
}

void power(){
float n,m,ans;
printf("Enter your number:\t");
scanf("%f",&n);
printf("Enter the power of:\t");
scanf("%f",&m);
ans = pow(n,m);
printf("%f\n",ans);
}

void etopower(){
float n,ans;
printf("Enter the power of e:\t");
scanf("%f",&n);
ans = exp(n);
printf("%f\n",ans);
}

void naturallog(){
float n,ans;
printf("Enter the num:\t");
scanf("%f",&n);
ans = log(n);
printf("%f\n",ans);
}

void logbase10(){
float n,ans;
printf("Enter the num:\t");
scanf("%f",&n);
ans = log10(n);
printf("%f\n",ans);
}

void trigo()
{
int n,m;
float ang,value;
while(1) {
printf("\nSelect:\n 1. Degree\n 2. Minutes of arc\n 3. Seconds of arc\n 4. Gardians\n 5. Radians\n 6. Back\t");
scanf("%d",&n);
printf("\nEnter angle:\t");
scanf("%f",&ang);
switch (n)
{
case 1:
    system("cls");
ang = ang * 0.017453292519943;
    break;
case 2:
    system("cls");
ang = ang * 0.0002908882086;
    break;
case 3:
    system("cls");
ang = ang * 0.000004848136811;
    break;
case 4:
    system("cls");
ang = ang * 0.01570796327;
case 5:
    system("cls");
ang = ang;
    break;
case 6:
    system("cls");
goto end;
    break;
default:
printf("Inalid input");
    break;
}
printf("Select:\n 1. Sine\n 2. Cosine\n 3. Cosec\n 4. Sec\n 5. Tan\n 6. Cot\n 7. Back\t");
scanf("%d",&m);
switch (m)
{
case 1:
    system("cls");
    value = sin(ang);
    break;
case 2:
    system("cls");
    value = cos(ang);
    break;
case 3:
    system("cls");
    value = sin(ang);
    value = 1/value;
    break;
case 4:
    system("cls");
    value = cos(ang);
    value = 1/value;
    break;
case 5:
    system("cls");
    value = tan(ang);
    break;
case 6:
    system("cls");
    value = tan(ang);
    value = 1/value;
    break;
case 7:
    system("cls");
    goto end;
    break;
default:
    break;
}
printf("%f\n",value);}
end:;
}

void inversetrigo(){
int n,m;
float value,ang;
while (1){
printf("Choose function:\n 1. Arcsine\n 2. Arccosine\n 3. Arccosec\n 4. Arcsec\n 5. Arctan\n 6. Arccot\n 7. Back\n\t");
scanf("%d",&m);
printf("\nEnter value:\t");
scanf("%f",&value);
switch(m)
{
case 1:
    system("cls");
    ang = asin(value);
    break;
case 2:
    system("cls");
    ang = acos(value);
    break;
case 3:
    system("cls");
    ang = asin(value);
    ang = 1/ang;
    break;
case 4:
    system("cls");
    ang = acos(value);
    ang = 1/ang;
    break;
case 5:
    system("cls");
    ang = atan(value);
    break;
case 6:
    system("cls");
    ang = atan(value);
    ang = 1/ang;
    break;
case 7:
    system("cls");
    goto end;
    break;
default:
    printf("Invalid input");
    break;
}
printf("Select the format of output value:\n 1. Degree\n 2. Minutes of arc\n 3. Seconds of arc\n 4. Gardians\n 5. Radians\n 6. Back\t");
scanf("%d",&n);
switch (n)
{
case 1:
    system("cls");
ang = ang * 57.295779513082;
    break;
case 2:
    system("cls");
ang = ang * 3,437.746770785;
    break;
case 3:
    system("cls");
ang = ang * 206,264.80624709;
    break;
case 4:
    system("cls");
ang = ang * 63.661977236758;
case 5:
    system("cls");
ang = ang;
    break;
case 6:
    system("cls");
goto end;
    break;
default:
printf("Inalid input");
    break;
}
printf("%f\n",ang);}
end:;
}

void hyper(){
int n,m;
float value,ans;
while(1){
printf("Choose function:\n 1. Sinh\n 2. Cosh\n 3. Cosech\n 4. Sech\n 5. Tanh\n 6. Coth\n 7. Back\n\t");
scanf("%d",&m);
printf("\nEnter value:\t");
scanf("%f",&value);
switch(m)
{
case 1:
    system("cls");
    ans = sinh(value);
    break;
case 2:
    system("cls");
    ans = cosh(value);
    break;
case 3:
    system("cls");
    ans = sinh(value);
    ans = 1/ans;
    break;
case 4:
    system("cls");
    ans = cosh(value);
    ans = 1/ans;
    break;
case 5:
    system("cls");
    ans = tanh(value);
    break;
case 6:
    system("cls");
    ans = tanh(value);
    ans = 1/ans;
    break;
case 7:
    system("cls");
    goto end;
    break;
default:
    printf("Invalid input");
    break;
}
printf("%f\n",ans);}
end:;
}

void inversehyper(){
int n,m;
float value,ans;
while(1){
printf("Choose function:\n 1. Arcsinh\n 2. Arccosh\n 3. Arccosech\n 4. Arcsech\n 5. Arctanh\n 6. Arccoth\n 7. Back\n\t");
scanf("%d",&m);
printf("\nEnter value:\t");
scanf("%f",&value);
switch(m)
{
case 1:
    system("cls");
    ans = asinh(value);
    break;
case 2:
    system("cls");
    ans = acosh(value);
    break;
case 3:
    system("cls");
    ans = asinh(value);
    ans = 1/ans;
    break;
case 4:
    system("cls");
    ans = acosh(value);
    ans = 1/ans;
    break;
case 5:
    system("cls");
    ans = atanh(value);
    break;
case 6:
    system("cls");
    ans = atanh(value);
    ans = 1/ans;
    break;
case 7:
    system("cls");
    goto end;
    break;
default:
    printf("Invalid input");
    break;
}
printf("%f\n",ans);}
end:;
}
//matrixalgebra
void matadd()
{

printf("Enter the number of rows and columns(m1,n1):\t");
    scanf("%d,%d", &m1, &n1);
    getchar();
    for (int i = 1; i < m1+1; i++)
    {
        for (int j = 1; j < n1+1; j++)
        {
            printf("Enter the element at %d,%d\t", i, j);
            scanf("%d", &matrix1[i][j]);
            getchar();
        }
    }
    printf("Your matrix1 is:\n");
    for (int i = 1; i < m1+1; i++)
    {
        for (int j = 1; j < n1+1; j++)
        {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }
    
    printf("Enter the number of rows and columns(m1,n1):\t");
    scanf("%d,%d", &m2, &n2);

    for (int i = 1; i < m2 + 1; i++)
    {
        for (int j = 1; j < n2 + 1; j++)
        {
            printf("Enter the element at %d,%d\t", i, j);
            scanf("%d", &matrix2[i][j]);
            getchar();
        }
    }
    printf("Your matrix2 is:\n");
    for (int i = 1; i < m2 + 1; i++)
    {
        for (int j = 1; j < n2 + 1; j++)
        {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }
    
    
    if (n1 == n2 && m1 == m2)
    {
    
    for (int i = 1; i < m1+1; i++)
    {
       for (int j = 1; j < n1+1; j++)
       {
            result[i][j] = (matrix1[i][j]) + (matrix2[i][j]);
          
       }
        
    }

    
    printf("Your result is:\n");
    for (int i = 1; i < m1 + 1; i++)
    {
        for (int j = 1; j < n2 + 1; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    }
       
    else
    {
        printf("The matrices cannot be added");
    }
}

void matdiff()
{

printf("Enter the number of rows and columns(m1,n1):\t");
    scanf("%d,%d", &m1, &n1);
    getchar();
    for (int i = 1; i < m1+1; i++)
    {
        for (int j = 1; j < n1+1; j++)
        {
            printf("Enter the element at %d,%d\t", i, j);
            scanf("%d", &matrix1[i][j]);
            getchar();
        }
    }
    printf("Your matrix1 is:\n");
    for (int i = 1; i < m1+1; i++)
    {
        for (int j = 1; j < n1+1; j++)
        {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }
    
    printf("Enter the number of rows and columns(m1,n1):\t");
    scanf("%d,%d", &m2, &n2);

    for (int i = 1; i < m2 + 1; i++)
    {
        for (int j = 1; j < n2 + 1; j++)
        {
            printf("Enter the element at %d,%d\t", i, j);
            scanf("%d", &matrix2[i][j]);
            getchar();
        }
    }
    printf("Your matrix2 is:\n");
    for (int i = 1; i < m2 + 1; i++)
    {
        for (int j = 1; j < n2 + 1; j++)
        {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }
    
    
    if (n1 == n2 && m1 == m2)
    {
    
    for (int i = 1; i < m1+1; i++)
    {
       for (int j = 1; j < n1+1; j++)
       {
            result[i][j] = (matrix1[i][j]) - (matrix2[i][j]);
          
       }
        
    }

    
    printf("Your result is:\n");
    for (int i = 1; i < m1 + 1; i++)
    {
        for (int j = 1; j < n2 + 1; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    }
       
    else
    {
        printf("The matrices cannot be added");
    }
}

void matscal()
{

printf("Enter the number of rows and columns(m1,n1):\t");
    scanf("%d,%d", &m1, &n1);
    getchar();
    for (int i = 1; i < m1+1; i++)
    {
        for (int j = 1; j < n1+1; j++)
        {
            printf("Enter the element at %d,%d\t", i, j);
            scanf("%d", &matrix1[i][j]);
            getchar();
        }
    }
    printf("Your matrix1 is:\n");
    for (int i = 1; i < m1+1; i++)
    {
        for (int j = 1; j < n1+1; j++)
        {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }
    
    printf("Enter the number to be multiplied with\t");
    scanf("%d", &scal);

    
    
    for (int i = 1; i < m1+1; i++)
    {
       for (int j = 1; j < n1+1; j++)
       {
            result[i][j] = (matrix1[i][j]) * (scal);
          
       }
        
    }

    
    printf("Your result is:\n");
    for (int i = 1; i < m1 + 1; i++)
    {
        for (int j = 1; j < n2 + 1; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    
}
//matrixmulti
void matrixmult()
{

printf("Enter the number of rows and columns(m1,n1):\t");
    scanf("%d,%d", &m1, &n1);
    getchar();
    for (int i = 1; i < m1+1; i++)
    {
        for (int j = 1; j < n1+1; j++)
        {
            printf("Enter the element at %d,%d\t", i, j);
            scanf("%d", &matrix1[i][j]);
            getchar();
        }
    }
    printf("Your matrix1 is:\n");
    for (int i = 1; i < m1+1; i++)
    {
        for (int j = 1; j < n1+1; j++)
        {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }
    
    printf("Enter the number of rows and columns(m1,n1):\t");
    scanf("%d,%d", &m2, &n2);

    for (int i = 1; i < m2 + 1; i++)
    {
        for (int j = 1; j < n2 + 1; j++)
        {
            printf("Enter the element at %d,%d\t", i, j);
            scanf("%d", &matrix2[i][j]);
            getchar();
        }
    }
    printf("Your matrix2 is:\n");
    for (int i = 1; i < m2 + 1; i++)
    {
        for (int j = 1; j < n2 + 1; j++)
        {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }
    
    
    if (n1 == m2)
    {
    
    for (int i = 1; i < m1+1; i++)
    {
       for (int j = 1; j < n1+1; j++)
       {
            for (int k = 1; k < m2+1 ; k++)
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
            
       }
        
    }

    
    printf("Your result is:\n");
    for (int i = 1; i < m1 + 1; i++)
    {
        for (int j = 1; j < n2 + 1; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    }
       
    else
    {
        printf("The matrices cannot be multiplied");
    }
}
//matrixuniversal
void matrix(){
int m;
while(1){
printf("Select:\n 1. Matrix multiplication\n 2. Matrix addition\n 3. Matrix substraction\n 4. Matrix multiplication with scalar\n 5. Back\t");
scanf("%d",&m);
switch (m)
{
case 1:
    system("cls");
matrixmult();
    break;
case 2:
    system("cls");
matadd();
    break;
case 3:
    system("cls");
matdiff();
    break;
case 4:
    system("cls");
matscal();
    break;
case 5:
    system("cls");
goto end;
    break;
default:
printf("Inalid input");
    break;
}}
end:;
}

void mathsop(){
int m;
while(1){
printf("Select:\n 1. For 2 number operations\n 2. For 1 number operations\n 3. Back\n\t");
scanf("%d",&m);
switch (m)
{
case 1:
system("cls");
simplecal();
    break;
case 2:
system("cls");
advcal();
    break;
case 3:
system("cls");
goto end;
    break;
default:
printf("Inalid input");
    break;
}}
end:;
}

void advcal(){
int m;
while(1){
printf("Select:\n 1. Factorial\n 2. Nth power of a number\n 3. Nth power of e\n 4. Natural log\n 5. Log base 10\n 6. Back\n\t");
scanf("%d",&m);
switch (m)
{
case 1:
    system("cls");
factorial();
    break;
case 2:
    system("cls");
power();
    break;
case 3:
    system("cls");
etopower();
    break;
case 4:
    system("cls");
naturallog();
    break;
case 5:
    system("cls");
logbase10();
    break;
case 6:
    system("cls");
goto end;
    break;
default:
printf("Inalid input");
    break;
}}
end:;
}
// trigonometric
void trigono(){
int m;
while (1){
printf("Select:\n 1. Trigonometric Fuctions\n 2. Inverse Trigonometric Fuctions\n 3. Hyperbolic Fuctions\n 4. Inverse Hyperbolic Fuctions\n 5. Back\n\t");
scanf("%d",&m);
switch (m)
{
case 1:
trigo();
    break;
case 2:
inversetrigo();
    break;
case 3:
hyper();
    break;
case 4:
inversehyper();
    break;
case 5:
system("cls");
goto end;
break;
default:
printf("Inalid input");
    break;
}}
end:;
}
//main
void main()
{
int m;
while (1){
printf("Select:\n 1. Mathematical Operations\n 2. Matrix Operations\n 3. Trigonometric Operations\n 4. Conversion\n 5. Quit\n\t");
scanf("%d",&m);
switch (m)
{
case 1:
system("cls");
mathsop();
    break;
case 2:
system("cls");
matrix();
    break;
case 3:
system("cls");
trigono();
    break;
case 4:
system("cls");
conversion();
    break;
case 5:
system("cls");
goto end;
    break;
default:
printf("Inalid input");
    break;
}}
end:;
}
