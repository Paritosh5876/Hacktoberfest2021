package com.company;

import java.util.ArrayList;

public class AlmostPalindrome
{
    public static void main(String[] args)
    {
        String str = "abccdba";
        str = str.replaceAll("[^a-zA-Z0-9]", "").toLowerCase();

        System.out.println(almostPalindrome(str));
    }

    public static boolean almostPalindrome(String str)
    {
        int left = 0;
        int right = str.length() - 1;

        while (left < right)
        {
            if (str.charAt(left) != str.charAt(right)) {
                return (validSubPalindrome(str, left+1, right) || validSubPalindrome(str, left, right-1));
            }
            left++;
            right--;
        }
        return true;
    }

    public static boolean validSubPalindrome(String str, int left, int right)
    {
        while (left < right)
        {
            if (str.charAt(left) != str.charAt(right)) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
}
