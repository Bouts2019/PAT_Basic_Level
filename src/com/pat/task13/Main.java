package com.pat.task13;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        try {
            while (in.hasNextInt()) {
                int M = in.nextInt();
                int N = in.nextInt();
                List<Integer> primes = new ArrayList<>();
                for (int i = 2; primes.size() < N; i++)
                    if (isPrime(i))
                        primes.add(i);
                int printedNum = 0;
                for (int i = M - 1; i < N; i++) {
                    System.out.print(primes.get(i));
                    printedNum++;
                    if (i != N - 1 && printedNum != 10) {
                        System.out.print(" ");
                    }
                    if (printedNum == 10) {
                        System.out.println();
                        printedNum = 0;
                    }
                }

            }
        } catch (NullPointerException e) {
            e.printStackTrace();
        }
    }

    public static boolean isPrime(int num) {
        for (int i = 2; i * i <= num; i++)
            if (num % i == 0)
                return false;
        return true;
    }
}
