package com.pat.task04;

import java.util.Scanner;

public class Main {
    static class Student {
        String name;
        String No;
        int score;

        Student(int score) {
            this.name = "";
            this.No = "";
            this.score = score;
        }

        @Override
        public String toString() {
            return this.name + " " + this.No;
        }
    }
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        try {
            while (in.hasNextInt()) {
                int n = in.nextInt();
                Student minScoreStudent = new Student(Integer.MAX_VALUE);
                Student maxScoreStudent = new Student(Integer.MIN_VALUE);
                for (int i = 0; i < n; i++) {
                    Student tmp = new Student(0);
                    tmp.name = in.next();
                    tmp.No = in.next();
                    tmp.score = in.nextInt();
                    if (tmp.score < minScoreStudent.score)
                        minScoreStudent = tmp;
                    if (tmp.score > maxScoreStudent.score)
                        maxScoreStudent = tmp;
                }
                System.out.println(maxScoreStudent);
                System.out.print(minScoreStudent);
            }
        } catch (NullPointerException e) {
            e.printStackTrace();
        }
    }
}
