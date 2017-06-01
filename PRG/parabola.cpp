///Program: PRG_C_Kosi_hitac_animiran.cpp
///napisao: J. Tudović, 2017.
///PROJEKT: "Parabola u primjeni" - ISI 2016/17
#include <stdio.h>
#include <math.h>
#include <BGIgraphics.h>

float g = 9.80665;     	//konstanta gravitacije
float pi = 3.1415926;   //stari dobri PI, malo točniji

int main(){
  	char tipka;
  	int wx = 800, wy = 400;  //veličina grafičkog prozora
  	float vo = 6;       	 //početna brzina projektila
  	float alfa = 35;    	 //početni kut lansiranja

  	float alfaRad = alfa * pi/180;
  	float cosAlfa, sinAlfa;

  	float T, dt, t, D, H, mj;
  	int xog=30, yog=50, xg, yg;
  	float x, y;

  	cosAlfa = cos(alfaRad);
  	sinAlfa = sin(alfaRad);
  	//otvori grafički prozor:
  	initwindow (wx, wy, "Parabolična putanja....");

  	line(xog-5,wy-yog+5,wx-xog+5,wy-yog+5);

  	printf("\n");

  	ponovo:

  	D = (vo*vo+sin(2*alfaRad))/g;   //max. domet u metrima...
  	T = (2*vo*sinAlfa)/g;           // trajanje leta...
  	H = (vo*vo * sin(alfaRad)*sin(alfaRad))/2/g;
  	mj = 200;   //(wx-2*xog)/D; >> za automatsko mjerilo
  	dt = T/50;  //računamo položaj za svaki 1/50 dio putanje

  	printf("vo=%6.2f \
	alfa=%6.2f \
	D=%6.2f \
	T=%6.2f \
    H=%6.2f \
    mj=%5.2f \n", vo, alfa, D, T, H, mj);


  	t = 0;
  	do {
      	x = vo * cosAlfa * t;   	//fizički x
      	xg = xog + x * mj;          //grafički x

      	y = vo * sinAlfa * t - g/2 * t * t; //fizički y
      	yg = (wy-yog) - y * mj;         	//matematički y

      	setcolor(14);           	//boja = žuta
      	circle (xg, yg, 5);         //crtaj projektil
      	delay(80);              	//zaustavi sve na 80/1000 msec
      	setcolor(7);            	//boja = siva
      	circle (xg, yg, 5);         //precrtaj žuti sivim!!!

      	t += dt;                //povećaj parametar t za delta t

  	} while (t < T);            	//i vrti dok ne dosegneš T

  	tipka = getch();
  	switch (tipka){
      	case 27: break;       //tipka ESC prekida program
      	case 120: vo+=1; goto ponovo; break; 	//tipka x poveća vo
      	case 121: vo-=1; goto ponovo; break; //tipka y smanji vo
      	default: goto ponovo;  //bilo koja druga tipka ponavlja
      	}
  	closegraph();

  	return 0;
}
