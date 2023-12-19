#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


char rUsername[20][20];
int rPassword[20],attempts = 3, points = 0, life = 3, checkPoint1;
int main()
{
    int choice,lPassword;
    char lUsername[20] ,gQ1;
    printf("--------------------\n");
    printf("Survival Game: Q & A Edition\n");
    printf("--------------------\n");
    printf("1.Login\n");
    printf("2.Register\n");
    printf("--------------------\n");
    printf("Select One: ");
    scanf("%d",&choice);
    system("cls");
    switch(choice){
        case 1:
        goto Login;
        break;

        case 2:
        goto Register;
        break;
    }
    Login:
        if(attempts != 0){
            for(int i = 0; i<=attempts; i++){
            printf("--------------------\n");
            printf("Login Your Account\n");
            printf("--------------------\n");
            printf("Attempts left %d\n", attempts);
            printf("Username: ");
            scanf("%s", lUsername);
            printf("--------------------\n");
            printf("Password must be Digit \n");
            printf("--------------------\n");
            printf("Enter Password: ");
            scanf("%d",&lPassword);
            system("cls");
                if(strcmp(rUsername[i],lUsername) == 0 && rPassword[i] == lPassword){
                    goto Intro;
                }
                else{
                    printf("--------------------\n");
                    printf("Wrong Username // Password\n");
                    attempts -=1;
                    goto Login;
                }
            }
        }
        else{
            system("cls");
            printf("--------------------\n");
            printf("Out of Attempts bye\n");
            return 0;
        }

    Register:
        for(int i = 0; i < 1; i++){
        printf("--------------------\n");
        printf("Register Account\n");
        printf("--------------------\n");
        printf("Username: ");
        scanf("%s", rUsername[i]);
        printf("--------------------\n");
        printf("Password must be Digit \n");
        printf("--------------------\n");
        printf("Enter Password: ");
        scanf("%d",&rPassword[i]);
        }
        system("cls");
        return main();
    Intro:
        system("cls");
        printf("--------------------\n");
        printf("Hello this is Teacher Aron Let's Play a Game\n");
        printf("--------------------\n");
        printf("1.Enter Game\n");
        printf("2.Exit\n");
        printf("--------------------\n");
        printf("Select one: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
            goto Instruction;
            break;

            case 2:
            return 0;
            break;
        }
    Instruction:
        system("cls");
        printf("--------------------\n");
        printf("Instructions: \n");
        printf("3 Lifes\n");
        printf("If You Got 30 points You Get Extra 2 Lives Per CheckPoint\n");
        printf("If You Got 20 points You Get Extra 1 Lives CheckPoint\n");
        printf("Correct Answer = +10 points // Wrong Answer = -5 points\n");
        printf("CheckPoint 1-3 4-6 7-9  10 is Final Boss\n");
        printf("--------------------\n");
        printf("1.Start Game\n");
        printf("2.Exit\n");
        printf("--------------------\n");
        printf("Select one: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
            goto Game1;
            break;

            case 2:
            return 0;
            break;
        }
    Game1:
        system("cls");
        if(life != 0){
            printf("--------------------\n");
            printf("Life left %d\n", life);
            printf("--------------------\n");
            printf("Your Points  %d\n", points);
            printf("--------------------\n");
            printf("Question 1\n");
            printf("--------------------\n");
            printf("Faced with a zombie apocalypse, what's your strategic move?\n");
            printf("--------------------\n");
            printf("A.Form alliances with other survivors\n");
            printf("B.Establish a fortified base and defend it\n");
            printf("C.Pretend to be a zombie to blend in\n");
            printf("D.Challenge the zombie leader to a dance-off\n");
            printf("--------------------\n");
            printf("Select One: ");
            scanf(" %c",&gQ1);
            system("cls");
                if(tolower(gQ1) =='a'){
                    points += 10;
                    goto Game2;
                }
                else if(tolower(gQ1) =='b'){
                    life -=1;
                    points -= 5;
                    goto Game1;
                }
                else if(tolower(gQ1) =='c'){
                    life -=1;
                    points -= 5;
                    goto Game1;
                }
                else if(tolower(gQ1) =='d'){
                    life -=1;
                    points -= 5;
                    goto Game1;
                }
                else{
                    goto Game1;
                }
        }
        else{
            printf("Out of Lifes");
            points = 0;
            life = 3;
            goto Game1;
        }
    Game2 :
       if(life != 0){
            printf("--------------------\n");
            printf("Life left %d\n", life);
            printf("--------------------\n");
            printf("Your Points  %d\n", points);
            printf("--------------------\n");
            printf("Question 2\n");
            printf("--------------------\n");
            printf("You encounter a mysterious portal. What do you do?\n");
            printf("--------------------\n");
            printf("A.Jump in without hesitation\n");
            printf("B.Toss an object through first to test itn");
            printf("C.Draw a complex summoning circle around it\n");
            printf("D.Close it immediately and walk away\n");
            printf("--------------------\n");
            printf("Select One: ");
            scanf(" %c",&gQ1);
            system("cls");
                if(tolower(gQ1) =='b'){
                    points += 10;
                    goto Game3;
                }
                else if(tolower(gQ1) =='a'){
                    life -=1;
                    points -= 5;
                    goto Game2;
                }
                else if(tolower(gQ1) =='c'){
                    life -=1;
                    points -= 5;
                    goto Game2;
                }
                else if(tolower(gQ1) =='d'){
                    life -=1;
                    points -= 5;
                    goto Game2;
                }
                else{
                    goto Game2;
                }
        }
        else{
            printf("Out of Lifes");
            points = 0;
            life = 3;
            goto Game1;
        }
    Game3 :
       if(life != 0){
            printf("--------------------\n");
            printf("Life left %d\n", life);
            printf("--------------------\n");
            printf("Your Points  %d\n", points);
            printf("--------------------\n");
            printf("Question 3\n");
            printf("--------------------\n");
            printf("A survival scenario involves a talking cat offering advice. Your response?\n");
            printf("--------------------\n");
            printf("A.Take its advice seriously\n");
            printf("B.Politely decline and walk away\n");
            printf("C.Ask for its life story and hobbies\n");
            printf("D.Challenge it to a game of chess\n");
            printf("--------------------\n");
            printf("Select One: ");
            scanf(" %c",&gQ1);
            system("cls");
                if(tolower(gQ1) =='a'){
                    points += 10;
                        if(points == 30){
                            life += 2;
                        }
                        else if(points == 20){
                            life += 1;
                        }
                    checkPoint1 = 1;
                    goto Game4;
                }
                else if(tolower(gQ1) =='b'){
                    life -=1;
                    points -= 5;
                    goto Game3;
                }
                else if(tolower(gQ1) =='c'){
                    life -=1;
                    points -= 5;
                    goto Game3;
                }
                else if(tolower(gQ1) =='d'){
                    life -=1;
                    points -= 5;
                    goto Game3;
                }
                else{
                    goto Game3;
                }
        }
        else{
            printf("Out of Lifes");
            points = 0;
            life = 3;
            goto Game1;
        }
    Game4 :
       if(life != 0){
            printf("--------------------\n");
            printf("Life left %d\n", life);
            printf("--------------------\n");
            printf("Your Points  %d\n", points);
            printf("--------------------\n");
            printf("Question 4\n");
            printf("--------------------\n");
            printf("In a parallel dimension, you find a parallel version of yourself. What's your approach?\n");
            printf("--------------------\n");
            printf("A.Collaborate for mutual survival\n");
            printf("B.Compete to prove superiority\n");
            printf("C.Form a rock band together\n");
            printf("D.Pretend not to notice and walk away\n");
            printf("--------------------\n");
            printf("Select One: ");
            scanf(" %c",&gQ1);
            system("cls");
                if(tolower(gQ1) =='a'){
                    points += 10;
                    goto Game5;
                }
                else if(tolower(gQ1) =='b'){
                    life -=1;
                    points -= 5;
                    goto Game4;
                }
                else if(tolower(gQ1) =='c'){
                    life -=1;
                    points -= 5;
                    goto Game4;
                }
                else if(tolower(gQ1) =='d'){
                    life -=1;
                    points -= 5;
                    goto Game4;
                }
                else{
                    goto Game4;
                }
        }
        else{
            printf("Out of Lifes");
            points = 0;
            life = 3;
            goto Game4;
        }
    Game5 :
       if(life != 0){
            printf("--------------------\n");
            printf("Life left %d\n", life);
            printf("--------------------\n");
            printf("Your Points  %d\n", points);
            printf("--------------------\n");
            printf("Question 5\n");
            printf("--------------------\n");
            printf("Your survival guide is written in a fictional language. What's your plan?\n");
            printf("--------------------\n");
            printf("A.Master the language through sheer will\n");
            printf("B.Hire a linguist from another dimension\n");
            printf("C.Use interpretive dance to understand it\n");
            printf("D. Convert it into emojis for clarity\n");
            printf("--------------------\n");
            printf("Select One: ");
            scanf(" %c",&gQ1);
            system("cls");
                if(tolower(gQ1) =='b'){
                    points += 10;
                    goto Game6;
                }
                else if(tolower(gQ1) =='a'){
                    life -=1;
                    points -= 5;
                    goto Game5;
                }
                else if(tolower(gQ1) =='c'){
                    life -=1;
                    points -= 5;
                    goto Game5;
                }
                 else if(tolower(gQ1) =='d'){
                    life -=1;
                    points -= 5;
                    goto Game5;
                 }
                else{
                    goto Game5;
                }
        }
        else{
            printf("Out of Lifes");
            points = 0;
            life = 3;
            goto Game4;
        }
    Game6 :
       if(life != 0){
            printf("--------------------\n");
            printf("Life left %d\n", life);
            printf("--------------------\n");
            printf("Your Points  %d\n", points);
            printf("--------------------\n");
            printf("Question 6\n");
            printf("--------------------\n");
            printf("You wake up in front of a doorstep, and to your shock,a scary creature is standing right in front of a door\n");
            printf("--------------------\n");
            printf("A.ask why he is dressed up like a scary creature\n");
            printf("B.aks why he is here and who he is\n");
            printf("C.scream because he jump scare you\n");
            printf("--------------------\n");
            printf("Select One: ");
            scanf(" %c",&gQ1);
            system("cls");
                if(tolower(gQ1) =='a'){
                    points += 10;
                        if(points == 60){
                            life += 2;
                        }
                        else if(points == 50){
                            life += 1;
                        }
                    checkPoint1 = 1;
                    goto Game6;
                }
                else if(tolower(gQ1) =='b'){
                    life -=1;
                    points -= 5;
                    goto Game6;
                }
                else if(tolower(gQ1) =='c'){
                    life -=1;
                    points -= 5;
                    goto Game6;
                }
                else if(tolower(gQ1) =='d'){
                    life -=1;
                    points -= 5;
                    goto Game6;
                }
                else{
                    goto Game6;
                }
        }
        else{
            printf("Out of Lifes");
            points = 0;
            life = 3;
            goto Game6;
        }
    Game7 :
       if(life != 0){
            printf("--------------------\n");
            printf("Life left %d\n", life);
            printf("--------------------\n");
            printf("Your Points  %d\n", points);
            printf("--------------------\n");
            printf("Question 7\n");
            printf("--------------------\n");
            printf("In a parallel dimension, you find a parallel version of yourself. What's your approach?\n");
            printf("--------------------\n");
            printf("A.Collaborate for mutual survival\n");
            printf("B.Compete to prove superiority\n");
            printf("C.Form a rock band together\n");
            printf("D.Pretend not to notice and walk away\n");
            printf("--------------------\n");
            printf("Select One: ");
            scanf(" %c",&gQ1);
            system("cls");
                if(tolower(gQ1) =='a'){
                    points += 10;
                    goto Game8;
                }
                else if(tolower(gQ1) =='b'){
                    life -=1;
                    points -= 5;
                    goto Game7;
                }
                else if(tolower(gQ1) =='c'){
                    life -=1;
                    points -= 5;
                    goto Game7;
                }
                else if(tolower(gQ1) =='d'){
                    life -=1;
                    points -= 5;
                    goto Game7;
                }
                else{
                    goto Game7;
                }
        }
        else{
            printf("Out of Lifes");
            points = 0;
            life = 3;
            goto Game6;
        }
    Game8 :
       if(life != 0){
            printf("--------------------\n");
            printf("Life left %d\n", life);
            printf("--------------------\n");
            printf("Your Points  %d\n", points);
            printf("--------------------\n");
            printf("Question 8\n");
            printf("--------------------\n");
            printf("Your survival guide is written in a fictional language. What's your plan?\n");
            printf("--------------------\n");
            printf("A.Master the language through sheer will\n");
            printf("B.Hire a linguist from another dimension\n");
            printf("C.Use interpretive dance to understand it\n");
            printf("D. Convert it into emojis for clarity\n");
            printf("--------------------\n");
            printf("Select One: ");
            scanf(" %c",&gQ1);
            system("cls");
                if(tolower(gQ1) =='b'){
                    points += 10;
                    goto Game9;
                }
                else if(tolower(gQ1) =='a'){
                    life -=1;
                    points -= 5;
                    goto Game8;
                }
                else if(tolower(gQ1) =='c'){
                    life -=1;
                    points -= 5;
                    goto Game8;
                }
                 else if(tolower(gQ1) =='d'){
                    life -=1;
                    points -= 5;
                    goto Game8;
                 }
                else{
                    goto Game8;
                }
        }
        else{
            printf("Out of Lifes");
            points = 0;
            life = 3;
            goto Game6;
        }
    Game9 :
       if(life != 0){
            printf("--------------------\n");
            printf("Life left %d\n", life);
            printf("--------------------\n");
            printf("Your Points  %d\n", points);
            printf("--------------------\n");
            printf("Question 6\n");
            printf("--------------------\n");
            printf("You wake up in front of a doorstep, and to your shock,a scary creature is standing right in front of a door\n");
            printf("--------------------\n");
            printf("A.ask why he is dressed up like a scary creature\n");
            printf("B.aks why he is here and who he is\n");
            printf("C.scream because he jump scare you\n");
            printf("--------------------\n");
            printf("Select One: ");
            scanf(" %c",&gQ1);
            system("cls");
                if(tolower(gQ1) =='a'){
                    points += 10;
                        if(points == 90){
                            life += 2;
                        }
                        else if(points == 80){
                            life += 1;
                        }
                    checkPoint1 = 1;
                    goto Game10;
                }
                else if(tolower(gQ1) =='b'){
                    life -=1;
                    points -= 5;
                    goto Game9;
                }
                else if(tolower(gQ1) =='c'){
                    life -=1;
                    points -= 5;
                    goto Game9;
                }
                else if(tolower(gQ1) =='d'){
                    life -=1;
                    points -= 5;
                    goto Game9;
                }
                else{
                    goto Game9;
                }
        }
        else{
            printf("Out of Lifes");
            points = 0;
            life = 3;
            goto Game9;
        }
    Game10 :
        if(points >= 10 && points <= 30){
            printf("Welcome to the Final Good Question");
        }
        else if (points >= 31 && points <= 60){
            printf("Welcome to the Final Very Good to Excellent Question");
        }
        else if (points >= 61 && points <= 100){
            printf("Welcome to the Final  Excellent Question");
        }
        else{
            printf("Welcome to the Final  Fair to Poor Question");

        }


    return 0;
}
