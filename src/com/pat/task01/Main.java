package com.pat.task01;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        try {
            while (in.hasNextInt()) {
                int steps = 0;
                for (int n = in.nextInt(); n != 1; n = (n & 1) == 1 ? (n * 3 + 1) / 2 : n / 2, steps++);
                System.out.println(steps);
            }
        } catch (NullPointerException e) {
            e.printStackTrace();
        }
    }
}
