package com.pat.task14;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        try {
            while (in.hasNext()) {
                String dateAndHourStr0 = in.next();
                String dateAndHourStr1 = in.next();
                String minStr0 = in.next();
                String minStr1 = in.next();

                char[] dateAndHourChars = new char[2];
                int index = 0;
                int minLen = Math.min(dateAndHourStr0.length(), dateAndHourStr1.length());

                for (int i = 0; i < minLen; i++) {
                    if (index == 0) {
                        if (dateAndHourStr0.charAt(i) == dateAndHourStr1.charAt(i) && (dateAndHourStr0.charAt(i) >= 65 && dateAndHourStr0.charAt(i) <= 71)) {
                            dateAndHourChars[index++] = dateAndHourStr0.charAt(i);
                        }
                    }
                    else if (index == 1) {
                        if (dateAndHourStr0.charAt(i) == dateAndHourStr1.charAt(i) && ((dateAndHourStr0.charAt(i) >= 65 && dateAndHourStr0.charAt(i) <= 78) || (dateAndHourStr0.charAt(i) >= '0' && dateAndHourStr0.charAt(i) <= '9'))) {
                            dateAndHourChars[index++] = dateAndHourStr0.charAt(i);
                            break;
                        }
                    }

                }


                minLen = Math.min(minStr0.length(), minStr1.length());

                int minIndex = 0;

                for (int i = 0; i < minLen; i++)
                    if (minStr0.charAt(i) == minStr1.charAt(i) && ((minStr0.charAt(i) >= 65 && minStr1.charAt(i) <= 90) || (minStr0.charAt(i) >= 97 && minStr1.charAt(i) <= 122))) {
                        minIndex = i;
                    }

                String[] weekStrs= { "MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN" };
                int hour = (dateAndHourChars[1] >= 65 &&  dateAndHourChars[1] <= 90) ? 9 + dateAndHourChars[1] - 'A' + 1: dateAndHourChars[1] - '0';

                System.out.print(weekStrs[dateAndHourChars[0] - 'A'] + " " + String.format("%02d", hour) + ":" + String.format("%02d", minIndex));

                return;
            }
        } catch (NullPointerException e) {
            e.printStackTrace();
        }
    }
}
