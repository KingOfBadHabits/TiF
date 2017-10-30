package hr.nop.test1;

import java.util.Scanner;

public class Zadaca {

	public static void main(String[] args) {
		String[] marka = new String[255] ;
		String[] model =  new String[255]  ;
		int cont;
		String[] vrstaMotora =  new String[255] ;
		String[] boja =  new String[255] ;
		double[] visina =  new double[255]  ;
		double[] co2 = new double[255];
		int[] brKm = new int[255];
		int[] brVrata = new int[255];
		int[] godProizvodnje = new int[255];
		int[] masa = new int[255];
		int i;
		boolean run,klima[];
		Scanner unosBr = new Scanner(System.in);
		Scanner unos = new Scanner(System.in);
		
		run = true;
		i = 0;
		
		while (run) {
			System.out.print("Marka: ");
			marka[i] = unos.nextLine();

			System.out.print("Model: ");
			model[i] = unos.nextLine();

			System.out.print("Vrsta motora: ");
			vrstaMotora[i] = unos.nextLine();

			System.out.print("Boja: ");
			boja[i] = unos.nextLine();

			System.out.print("Visina: ");
			visina[i] = unosBr.nextDouble();
			
			System.out.print("CO2: ");
			co2[i] = unosBr.nextDouble();

			System.out.print("Broj kilometara: ");
			brKm[i] = unosBr.nextInt();

			System.out.print("Godina proizvodnje: ");
			godProizvodnje[i] = unosBr.nextInt();

			System.out.print("Masa: ");
			masa[i] = unosBr.nextInt();

			System.out.print("Broj vrata: ");
			brVrata[i] = unosBr.nextInt();
			
			System.out.print("Zelite li unijeti jos vozila? (1/0)");
			cont = unosBr.nextInt();
			
			if (cont==0) {run = false;}
			i++;
			
		}
		
		for (i=i;i>=0;i--) {
			System.out.println("");
			System.out.println("Registrirali ste vozilo: ");
			System.out.println("Marka ==> "+marka[i]);
			System.out.println("Model ==> "+model[i]);
			System.out.println("Vrsta motora ==> "+vrstaMotora[i]);
			System.out.println("Boja ==> "+boja[i]);
			System.out.println("Visina ==> "+visina[i]);
			System.out.println("CO2 ==> "+co2[i]);
			System.out.println("Broj kilometara ==> "+brKm[i]);
			System.out.println("Godina proizvodnje ==> "+godProizvodnje[i]);
			System.out.println("Masa ==> "+masa[i]);
			System.out.println("Broj vrata ==> "+brVrata[i]);
		}

	}

}
