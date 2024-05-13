#include <stdio.h>

int main()
{
        int height, i, j;


        do{
          printf("Height :");
          scanf("%d", &height);
        }
          while(height < 0 || height > 8);

        //linha 8

        for(j = 1; j <= (height - 7); j++)
       {
           if(j == 1){
               printf("       #");
           }
           else{
               printf("#");
           }
       }

               printf("  ");

        for(j = 1; j <= (height - 7); j++)
       {
           if(j == height - 7){
               printf("#       ");
           }
           else{
               printf("#");
           }
       }

               printf("\n");

               //linha 7

        for(j = 1; j <= (height - 6); j++)
       {
           if(j == 1){
               printf("      #");
           }
           else{
               printf("#");
           }
       }

               printf("  ");

        for(j = 1; j <= (height - 6); j++)
       {
           if(j == height - 6){
               printf("#      ");
           }
           else{
               printf("#");
           }
       }

               printf("\n");

               //linha 6

        for(j = 1; j <= (height - 5); j++)
       {
           if(j == 1){
               printf("     #");
           }
           else{
               printf("#");
           }
       }

              printf("  ");

        for(j = 1; j <= (height - 5); j++)
       {
           if(j == height - 5){
               printf("#     ");
           }
           else{
               printf("#");
           }
       }

               printf("\n");

               //linha 5

        for(j = 1; j <= (height - 4); j++)
       {
           if(j == 1){
               printf("    #");
           }
           else{
               printf("#");
           }
       }

               printf("  ");

        for(j = 1; j <= (height - 4); j++)
       {
           if(j == height - 4){
               printf("#    ");
           }
           else{
               printf("#");
           }
       }

               printf("\n");

               //linha 4

        for(j = 1; j <= (height - 3); j++)
       {
           if(j == 1){
               printf("   #");
           }
           else{
               printf("#");
           }
       }

               printf("  ");

        for(j = 1; j <= (height - 3); j++)
       {
           if(j == height - 3){
               printf("#   ");
           }
           else{
               printf("#");
           }
       }

               printf("\n");

               //linha 3

        for(j = 1; j <= (height - 2); j++)
       {
           if(j == 1){
               printf("  #");
           }
           else{
               printf("#");
           }
       }

           printf("  ");

        for(j = 1; j <= (height - 2); j++)
       {
           if(j == height - 2){
               printf("#  ");
           }
           else{
               printf("#");
           }
       }

               printf("\n");

            //2 linha

        for(j = 1; j <= (height - 1); j++)
       {
           if(j == 1){
               printf(" #");
           }
           else{
               printf("#");
           }
       }

           printf("  ");

        for(j = 1; j <= (height - 1); j++)
       {
           if(j == height - 1){
               printf("# ");
           }
           else{
               printf("#");
           }
       }

            printf("\n");

          //1 linha

        for(i = 1; i <= height; i++)
        {
            printf("#");
        }

            printf("  ");

        for(i = 1; i <= height; i++)
        {
            printf("#");
        }







}