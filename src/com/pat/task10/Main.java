package com.pat.task10;

import java.util.Scanner;

public class Main {
    // This problem is so miraculous. :-)
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        try {
            boolean hasPrinted = false;
            while (in.hasNextInt()) {
                int a = in.nextInt();
                int b = in.nextInt();
                if (b != 0) {
                    if (hasPrinted) {
                        System.out.print(" ");
                    }
                    System.out.print(a * b + " " + (b - 1));
                    hasPrinted = true;
                }
                else if (!hasPrinted)
                    System.out.print("0 0");
            }

        } catch (NullPointerException e) {
            e.printStackTrace();
        }
    }
}
