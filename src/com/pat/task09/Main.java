package com.pat.task09;

import com.sun.javaws.IconUtil;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        try {
            while (in.hasNext()) {
                String text = in.nextLine();
                String[] strs = text.split(" ");
                for (int i = strs.length - 1; i >= 0; --i) {
                    System.out.print(strs[i]);
                    if (i != 0) {
                        System.out.print(" ");
                    }
                }
            }
        } catch (NullPointerException e) {
            e.printStackTrace();
        }
    }
}
