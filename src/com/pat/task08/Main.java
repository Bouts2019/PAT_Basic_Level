package com.pat.task08;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        try {
            while (in.hasNextInt()) {
                int N = in.nextInt();
                int M = in.nextInt();
                int[] arr = new int[N];
                for (int i = 0; i < N; ++i)
                    arr[i] = in.nextInt();
                M = M % N;
                int tmp = 0;
                for (int i = 0; i < M; ++i) {
                    tmp = arr[N - 1];
                    for (int j = N - 1; j > 0; --j)
                        arr[j] = arr[j - 1];
                    arr[0] = tmp;
                }
                for (int i = 0; i < N; ++i) {
                    System.out.print(arr[i]);
                    if (i != N - 1)
                        System.out.print(" ");
                }
            }
        } catch (NullPointerException e) {
            e.printStackTrace();
        }
    }
}
