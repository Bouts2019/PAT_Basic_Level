package com.pat.task02;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        try {
            while (in.hasNext()) {
                String num = in.next();
                int sum = 0;
                for (int i = 0; i < num.length(); ++i) sum += num.charAt(i) - '0';
                String sumText = String.valueOf(sum);
                for (int i = 0; i < sumText.length(); ++i) {
                    char c = sumText.charAt(i);
                    switch (c) {
                        case '1':
                            System.out.print("yi");
                            break;
                        case '2':
                            System.out.print("er");
                            break;
                        case '3':
                            System.out.print("san");
                            break;
                        case '4':
                            System.out.print("si");
                            break;
                        case '5':
                            System.out.print("wu");
                            break;
                        case '6':
                            System.out.print("liu");
                            break;
                        case '7':
                            System.out.print("qi");
                            break;
                        case '8':
                            System.out.print("ba");
                            break;
                        case '9':
                            System.out.print("jiu");
                            break;
                        case '0':
                            System.out.print("ling");
                    }
                    if (i != sumText.length() - 1)
                        System.out.print(" ");
                }
            }
        } catch (NullPointerException e) {
            e.printStackTrace();
        }
    }
}
