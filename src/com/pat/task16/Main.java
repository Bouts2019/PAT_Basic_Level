package com.pat.task16;

import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		try {
			while (in.hasNextInt()) {
				int A = in.nextInt();
				int DA = in.nextInt();
				int B = in.nextInt();
				int DB = in.nextInt();
				
				String PA = "";
				String AText = String.valueOf(A);
				for (int i = 0; i < AText.length(); i++)
					if (AText.charAt(i) == DA + '0')
						PA += String.valueOf(DA);
				if (PA.equals("")) PA = "0";
				String PB = "";
				String BText = String.valueOf(B);
				for (int i = 0; i < BText.length(); i++)
					if (BText.charAt(i) == DB + '0')
						PB += String.valueOf(DB);
				if (PB.equals("")) PB = "0";
				System.out.print(Integer.parseInt(PA) + Integer.parseInt(PB));
			}
		} catch (NullPointerException e) {
			e.printStackTrace();
		}
	}
}
