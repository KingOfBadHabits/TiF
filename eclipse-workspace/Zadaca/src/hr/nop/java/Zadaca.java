package hr.nop.java;

import java.lang.Math;
import java.util.Scanner;

public class Zadaca {

	public static void main(String[] args) {
		long praljak; 
		int je; 
		long nevin;
		Scanner unosCijanida = new Scanner(System.in);
		
		praljak = zaNasumicanBrojSpremni();
		
		je=0;
		
		do {
			
			nevin = unosCijanida.nextLong();
			
			if (praljak == nevin){
				System.out.println("Pogodak!!!");
				je = 1;
			}
			else if (praljak > nevin) {
				System.out.println("Broj je manji od unesenog.");
			}
			else if (praljak < nevin){
				System.out.println("Broj je veci od unesenog.");
			}
			
		}while(je != 1);

	}
	
	public static long zaNasumicanBrojSpremni() {
		return Math.round((Math.random()*99)+1);
	}

}
