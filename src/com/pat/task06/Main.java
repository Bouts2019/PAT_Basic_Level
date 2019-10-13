package com.pat.task06;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        try {
            while (in.hasNextInt()) {
                int n = in.nextInt();
                String text = String.valueOf(n);
                for (int i = 0; i < text.length(); i++) {
                    switch(text.length() - i) {
                        case 3: {
                            for (int j = 0; j < text.charAt(i) - '0'; j++) {
                                System.out.print("B");
                            }
                            break;
                        }
                        case 2: {
                            for (int j = 0; j < text.charAt(i) - '0'; j++) {
                                System.out.print("S");
                            }
                            break;
                        }
                        case 1: {
                            for (int j = 0; j < text.charAt(i) - '0'; j++) {
                                System.out.print(j + 1);
                            }
                            break;
                        }
                    }
                }
            }
        } catch (NullPointerException e) {
            e.printStackTrace();
        }
    }
}
