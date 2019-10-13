package com.pat.task07;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        try {
            while (in.hasNextInt()) {
                int sum = 0;
                int N = in.nextInt();
                int before = 2;
                int i = 2;
                while (i <= N) {
                    while (!isPrime(++i));
                    if (i > N) break;
                    if (i - before == 2)
                        sum++;
                    before = i;
                }
                System.out.print(sum);
            }
        } catch (NullPointerException e) {
            e.printStackTrace();
        }
    }

    public static boolean isPrime(int num) {
        boolean isPrime = true;
        for (int i = 2; i * i <= num; i++)
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        return isPrime;
    }
}
