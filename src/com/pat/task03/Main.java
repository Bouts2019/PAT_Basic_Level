package com.pat.task03;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        try {
            while (in.hasNextInt()) {
                int n = in.nextInt();
                for (int i = 0; i < n; i++) {
                    String text = in.next();
                    if (text.replace('P','A').replace('T','A').replaceAll("A","").equals("")) {
                        int pIndex = text.indexOf('P');
                        int tIndex = text.indexOf('T');
                        if (!(pIndex == -1 || tIndex == -1 || text.indexOf('A') == -1 || pIndex > tIndex)) {
                            int times = tIndex - pIndex - 1 - 1;
                            // AAPAATAAAA
                            // 0123456789
                            int len = pIndex * times;
                            if (text.length() - len - 1 - tIndex == pIndex) {
                                System.out.print("YES");
                            } else {
                                System.out.print("NO");
                            }
                        } else {
                            System.out.print("NO");
                        }
                    } else {
                        System.out.print("NO");
                    }
                    if (i != n - 1)
                        System.out.println();
                }
            }
        } catch (NullPointerException e) {
            e.printStackTrace();
        }
    }
}
