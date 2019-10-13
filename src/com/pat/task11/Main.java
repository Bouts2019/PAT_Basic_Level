package com.pat.task11;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        try {
            while (in.hasNextInt()) {
                int T = in.nextInt();
                for (int i = 0; i < T; i++) {
                    long A = in.nextLong();
                    long B = in.nextLong();
                    long C = in.nextLong();
                    System.out.print("Case #" + (i + 1) + ": " + (A + B > C));
                    if (i != T - 1)
                        System.out.println();
                }
            }
        } catch (NullPointerException e) {
            e.printStackTrace();
        }
    }
}
