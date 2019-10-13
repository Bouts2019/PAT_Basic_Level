package com.pat.task14;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        // 在一行中输出约会的时间，格式为 DAY HH:MM，其中 DAY 是某星期的 3 字符缩写，即 MON 表示星期一，TUE 表示星期二，WED 表示星期三，
        // THU 表示星期四，FRI 表示星期五，SAT 表示星期六，SUN 表示星期日。题目输入保证每个测试存在唯一解。
        try {
            while (in.hasNext()) {
                String dateAndHourStr0 = in.next();
                String dateAndHourStr1 = in.next();
                String minStr0 = in.next();
                String minStr1 = in.next();

                char[] dateAndHourChars = new char[2];
                int index = 0;
                int minLen = Math.min(dateAndHourStr0.length(), dateAndHourStr1.length());

                for (int i = 0; i < minLen; i++)
                    if (dateAndHourStr0.charAt(i) == dateAndHourStr1.charAt(i) && dateAndHourStr0.charAt(i) >= 65 && dateAndHourStr0.charAt(i) <= 90)
                        dateAndHourChars[index++] = dateAndHourStr0.charAt(i);

                minLen = Math.min(minStr0.length(), minStr1.length());

                char min = 0;

                for (int i = 0; i < minLen; i++)
                    if (minStr0.charAt(i) == minStr1.charAt(i) && ((minStr0.charAt(i) >= 65 && minStr1.charAt(i) <= 90) || (minStr0.charAt(i) >= 97 && minStr1.charAt(i) <= 122)))
                        min = minStr0.charAt(i);

                System.out.println(dateAndHourChars[0] + "," + dateAndHourChars[1] + "," + min);

            }
        } catch (NullPointerException e) {
            e.printStackTrace();
        }
    }
}
