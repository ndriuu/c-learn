/*
    You are working on a smart lighting system for a building that dynamically adjusts the brightness of each room based on the time of day. The program should take the number of rooms as input and then prompt the user to enter the brightness level for each room at different times: morning, afternoon, and evening. After inputting the data, the program should analyze each room and suggest whether to increase or decrease the brightness based on the following conditions:
        > If the morning brightness level is below 50%, suggest increasing it.
        > If the afternoon brightness level is above 70%, suggest decreasing it.
        > If the evening brightness level is below 60%, suggest increasing it.
    Write a C program using nested loops to process the raw data and generate brightness adjustment suggestions for each room.
    Constraints:
        > The number of rooms is a positive integer.
        > Assume valid input values for brightness levels.
    Input Sample:
        Enter the number of rooms: 3
        Room 1:
        Morning: 45
        Afternoon: 75
        Evening: 55
        Room 2:
        Morning: 60
        Afternoon: 68
        Evening: 50
        Room 3:
        Morning: 40
        Afternoon: 72
        Evening: 58
    Output Sample:
        Brightness Adjustment Suggestions:
        Room 1:
        Morning: Increase brightness.
        Afternoon: Decrease brightness.
        Evening: Increase brightness.
        Room 2:
        Morning: No adjustment needed.
        Afternoon: Decrease brightness.
        Evening: Increase brightness.
        Room 3:
        Morning: Increase brightness.
        Afternoon: Decrease brightness.
        Evening: Increase brightness.
*/

#include <stdio.h>
#include <math.h>
int main(){
    int rooms;
    long int resMorning = 0, resAfternoon = 0, resEvening = 0;
    printf("Enter the number of rooms: ");scanf("%d",&rooms);
    for (int i = 1; i <= rooms; i++)
    {
        int morning, afternoon, evening;
        printf("Room %d: \n", i);
        printf("Morning: ");scanf("%d",&morning);
        printf("Afternoon: ");scanf("%d",&afternoon);
        printf("Evening: ");scanf("%d",&evening);
        if( morning < 50){
            resMorning += i * pow(10,i);
        }
        else resMorning += (i-1) * pow(10,i);

        if( afternoon > 70){
            resAfternoon += i * pow(10,i);
        }
        else resAfternoon += (i-1) * pow(10,i);

        if( evening < 60){
            resEvening += i * pow(10,i);
        }
        else resEvening += (i-1) * pow(10,i);

    }   
    printf("\nBrightness Adjustment Suggestions: ");
    for (int i = 1; i <= rooms; i++)
    {
        resMorning /= 10;
        resAfternoon /= 10;
        resEvening /= 10;
        printf("\nRoom %d: ", i);
        printf("\nMorning\t\t: ");
        if (resMorning % 10 == i){
            printf("Increase brightness.");
        }else{
            printf("No adjustment needed.");
        }
        printf("\nAfternoon\t: ");
        if (resAfternoon % 10 == i){
            printf("Decrease brightness.");
        }else{
            printf("No adjustment needed.");
        }
        printf("\nEvening\t\t: ");
        if (resEvening % 10 == i){
            printf("Increase brightness.");
        }else{
            printf("No adjustment needed.");
        }
    }  
}
