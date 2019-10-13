package com.pat.task12;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        try {
            while (in.hasNextInt()) {
                int N = in.nextInt();
                int mod0EvenSum = 0;
                int mod1Sum = 0;
                int mod1coef = 1;
                int mod2Nums = 0;
                int mod3Sum = 0;
                int mod3Nums = 0;
                int mod4Max = Integer.MIN_VALUE;
                boolean mod0 = false;
                boolean mod1 = false;
                boolean mod2 = false;
                boolean mod3 = false;
                boolean mod4 = false;
                for (int i = 0; i < N; i++) {
                    int num = in.nextInt();
                    switch (num % 5) {
                        case 0: {
                            if ((num & 1) == 0) {
                                mod0EvenSum += num;
                                mod0 = true;
                            }
                            break;
                        }
                        case 1: {
                            mod1Sum += mod1coef * num;
                            mod1coef *= -1;
                            mod1 = true;
                            break;
                        }
                        case 2: {
                            mod2Nums++;
                            mod2 = true;
                            break;
                        }
                        case 3: {
                            mod3Sum += num;
                            mod3Nums++;
                            mod3 = true;
                            break;
                        }
                        case 4: {
                            if (num > mod4Max) {
                                mod4Max = num;
                            }
                            mod4 = true;
                        }
                    }
                }
                System.out.println((mod0 ? mod0EvenSum : "N") + " " + (mod1 ? mod1Sum : "N") + " " + (mod2 ? mod2Nums : "N") + " " + (mod3 ? String.format("%.1f", (double)mod3Sum / (double)mod3Nums) : "N") + " " + (mod4 ? mod4Max : "N"));
            }
        } catch (NullPointerException e) {
            e.printStackTrace();
        }
    }
}
