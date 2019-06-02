#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include <time.h>



int main()
{
    int firstRoll;
    int secondRoll;
    int thirdRoll;
    int sum1;
    int sum2;
    char guess;
    char respawn;
    int points1 = 0;
    int points2 = 0;
    int points3 = 0;
    int allPoints;

   do{
   srand ( time(NULL) );
   firstRoll = ( rand()%6 ) + 1;
   printf("The first roll is: %d\n", firstRoll);


   secondRoll = ( rand()%6 ) + 1;
   printf("The second roll is: %d\n", secondRoll);


   thirdRoll = ( rand()%6 ) + 1;
   printf("The third roll is: %d\n", thirdRoll);

   sum1 = firstRoll + secondRoll + thirdRoll;
   printf("The sum of the first three rolls is: %d\n", sum1);

   printf("Is the sum of the next three rolls going to be higher, same or lower than the first one: (h/s/l) \n");
   scanf(" %c", &guess);

   srand ( time(NULL) );
   firstRoll = ( rand()%6 ) + 1;
   printf("The first roll is: %d\n", firstRoll);


   secondRoll = ( rand()%6 ) + 1;
   printf("The second roll is: %d\n", secondRoll);


   thirdRoll = ( rand()%6 ) + 1;
   printf("The third roll is: %d\n", thirdRoll);

   sum2 = firstRoll + secondRoll + thirdRoll;
   printf("The sum of the next three rolls is: %d\n", sum2);

   if( (guess == 'h') && sum2 > sum1 ){
    printf("Congrats!\n");
    points1 = 20;
    printf("You get %d points.\n\n", points1);
   }else if(guess == 's' && sum2 == sum1){
    printf("Congrats!\n");
    points1 = 30;
    printf("You get %d points\n\n", points1);
   }else if(guess == 'l' && sum2 < sum1){
    printf("Congrats!\n");
    points1 = 20;
    printf("You get %d points.\n\n", points1);
   }else if(guess == 'h' && sum2 < sum1 || sum2 == sum1){
    printf("You suck bro!\n");
    points1 = -20;
    printf(" %d points\n\n", points1);
   }else if(guess == 's' && sum2 > sum1 || sum2 < sum1){
    printf("You suck bro!\n");
    points1 = -20;
    printf(" %d points\n\n", points1);
   }else if(guess == 'l' && sum2 > sum1 || sum2 == sum1){
    printf("You suck bro!\n");
    points1 = -20;
    printf(" %d points\n\n", points1);
   }

   srand ( time(NULL) );
   firstRoll = ( rand()%6 ) + 1;
   printf("The first roll is: %d\n", firstRoll);


   secondRoll = ( rand()%6 ) + 1;
   printf("The second roll is: %d\n", secondRoll);


   thirdRoll = ( rand()%6 ) + 1;
   printf("The third roll is: %d\n", thirdRoll);

   sum1 = firstRoll + secondRoll + thirdRoll;
   printf("The sum of the first three rolls is: %d\n", sum1);

   printf("Is the sum of the next three rolls going to be higher, same or lower than the first one: (h/s/l) \n");
   scanf(" %c", &guess);

   srand ( time(NULL) );
   firstRoll = ( rand()%6 ) + 1;
   printf("The first roll is: %d\n", firstRoll);


   secondRoll = ( rand()%6 ) + 1;
   printf("The second roll is: %d\n", secondRoll);


   thirdRoll = ( rand()%6 ) + 1;
   printf("The third roll is: %d\n", thirdRoll);

   sum2 = firstRoll + secondRoll + thirdRoll;
   printf("The sum of the next three rolls is: %d\n", sum2);

   if( (guess == 'h') && sum2 > sum1 ){
    printf("Congrats!\n");
    points2 = 20;
    printf("You get %d points.\n\n", points2);
   }else if(guess == 's' && sum2 == sum1){
    printf("Congrats!\n");
    points2 = 30;
    printf("You get %d points\n\n", points2);
   }else if(guess == 'l' && sum2 < sum1){
    printf("Congrats!\n");
    points2 = 20;
    printf("You get %d points.\n\n", points2);
   }else if(guess == 'h' && sum2 < sum1 || sum2 == sum1){
    printf("You suck bro!\n");
    points2 = -20;
    printf(" %d points\n\n", points2);
   }else if(guess == 's' && sum2 > sum1 || sum2 < sum1){
    printf("You suck bro!\n");
    points2 = -20;
    printf(" %d points\n\n", points2);
   }else if(guess == 'l' && sum2 > sum1 || sum2 == sum1){
    printf("You suck bro!\n");
    points2 = -20;
    printf(" %d points\n\n", points2);
   }

   srand ( time(NULL) );
   firstRoll = ( rand()%6 ) + 1;
   printf("The first roll is: %d\n", firstRoll);


   secondRoll = ( rand()%6 ) + 1;
   printf("The second roll is: %d\n", secondRoll);


   thirdRoll = ( rand()%6 ) + 1;
   printf("The third roll is: %d\n", thirdRoll);

   sum1 = firstRoll + secondRoll + thirdRoll;
   printf("The sum of the first three rolls is: %d\n", sum1);

   printf("Is the sum of the next three rolls going to be higher, same or lower than the first one: (h/s/l) \n");
   scanf(" %c", &guess);

   srand ( time(NULL) );
   firstRoll = ( rand()%6 ) + 1;
   printf("The first roll is: %d\n", firstRoll);


   secondRoll = ( rand()%6 ) + 1;
   printf("The second roll is: %d\n", secondRoll);


   thirdRoll = ( rand()%6 ) + 1;
   printf("The third roll is: %d\n", thirdRoll);

   sum2 = firstRoll + secondRoll + thirdRoll;
   printf("The sum of the next three rolls is: %d\n", sum2);

   if( (guess == 'h') && sum2 > sum1 ){
    printf("Congrats!\n");
    points3 = 20;
    printf("You get %d points.\n\n", points3);
   }else if(guess == 's' && sum2 == sum1){
    printf("Congrats!\n");
    points3 = 30;
    printf("You get %d points\n\n", points3);
   }else if(guess == 'l' && sum2 < sum1){
    printf("Congrats!\n");
    points3 = 20;
    printf("You get %d points.\n\n", points3);
   }else if(guess == 'h' && sum2 < sum1 || sum2 == sum1){
    printf("You suck bro!\n");
    points3 = -20;
    printf(" %d points\n\n", points3);
   }else if(guess == 's' && sum2 > sum1 || sum2 < sum1){
    printf("You suck bro!\n");
    points3 = -20;
    printf(" %d points\n\n", points3);
   }else if(guess == 'l' && sum2 > sum1 || sum2 == sum1){
    printf("You suck bro!\n");
    points3 = -20;
    printf(" %d points\n\n", points3);
   }

    allPoints = points1 + points2 + points3;
    printf("You have %d points in total.\n", allPoints);
    if(allPoints >= 40){
        printf("You get $100\n");
    }else if(allPoints >= 20){
        printf("You get $50\n");
    }else if(allPoints >= 0){
        printf("You get $1 for participating\n");
    }else{
        printf("You get nothing\n");
    }

    printf("\nDo you want to play again? (y/n)\n");
    scanf(" %c", &respawn);
   }while(respawn == 'y');
    return 0;

}
