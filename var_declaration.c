/**********************************************************
Write a program which computes and prints the sum of the
days in all four quarters of the current year.
Author: Astrojoe
10th October 2023
**********************************************************/
#include <stdio.h>

int main()
{
    int days_january = 31;
    int days_feburary = 28;
    int days_march = 31;
    int days_april = 30;
    int days_may = 31;
    int days_june = 30;
    int days_july = 31;
    int days_august = 31;
    int days_september = 30;
    int days_october = 31;
    int days_november = 30;
    int days_december = 31;

    int Q1 = days_january + days_feburary + days_march;
    int Q2 = days_april + days_may + days_june;
    int Q3 =  days_july + days_august + days_september;
    int Q4 =  days_october +days_november + days_december;

    printf("First quarter of the current year: %d", Q1);
    printf("Second quarter of the current year: %d", Q2);
    printf("Third quarter of the current year: %d", Q3);
    printf("Fourth quarter of the current year: %d", Q4);

    return 0;
}