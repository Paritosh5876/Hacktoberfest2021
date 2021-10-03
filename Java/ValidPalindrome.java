package com.company;

public class ValidPalindrome
{
    public static void main(String[] args)
    {
        String str = "A man, a plan, a canal: Panama";
        String strNew = str.replaceAll("[^a-zA-Z0-9]", "").toLowerCase();
        String strReverse = new StringBuilder(strNew).reverse().toString();

        System.out.println(isValidPalindrome(strNew, strReverse));
    }

    public static boolean isValidPalindrome(String str, String strReverse)
    {
        return str.equals(strReverse);
    }
}
