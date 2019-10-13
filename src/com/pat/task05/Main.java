package com.pat.task05;

import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        try {
            while (in.hasNextInt()) {
                int K = in.nextInt();
                if (K < 1 || K >= 100) return;
                List<Integer> arr = new ArrayList<>();
                List<Integer> res = new ArrayList<>();
                for (int i = 0; i < K; i++) {
                    int tmp = in.nextInt();
                    if (!(tmp > 1 && tmp <= 100)) return;
                    arr.add(tmp);
                }
                for (int i = 0; i < K; i++) {
                    if ((arr.get(i) * 2 - 1) % 3 == 0) {
                        if (arr.indexOf(arr.get(i) * 2) == -1 && arr.indexOf((arr.get(i) * 2 - 1) / 3) == -1) {
                            res.add(arr.get(i));
                        }
                    } else if (arr.indexOf(arr.get(i) * 2) == -1) {
                        res.add(arr.get(i));
                    }
                }
                Collections.sort(res);
                Collections.reverse(res);
                for (int i = 0; i < res.size(); i++) {
                    System.out.print(res.get(i));
                    if (i != res.size() - 1) {
                        System.out.print(" ");
                    }
                }
            }
        } catch (NullPointerException e) {
            e.printStackTrace();
        }
    }
}
