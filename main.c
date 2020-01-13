#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void AffichageGrille(){
    char rad1[11][11];
    char tab1[11][11];
    char rad2[11][11];
    char tab2[11][11];

    int i, j,posx1,posx2,posy1,posy2,posx3,posy3,posx4,posy4,posx5,posy5,postirx1,postiry1,postirx2,postiry2,nbbat1,compteJ1,compteJ2;
    i = 0;
    j = 0;

    compteJ1 = 0;
    compteJ2 = 0;



      printf("\nRadar Joueur 1\n");
      for(i=0; i < 11; i++){
        for(j = 0; j < 11; j++){
            rad1[i][j]=126;
            rad1[1][0]=49;
            rad1[2][0]=50;
            rad1[3][0]=51;
            rad1[4][0]=52;
            rad1[5][0]=53;
            rad1[6][0]=54;
            rad1[7][0]=55;
            rad1[8][0]=56;
            rad1[9][0]=57;
            rad1[10][0]=48;

            rad1[i][j]=126;
            rad1[0][1]=49;
            rad1[0][2]=50;
            rad1[0][3]=51;
            rad1[0][4]=52;
            rad1[0][5]=53;
            rad1[0][6]=54;
            rad1[0][7]=55;
            rad1[0][8]=56;
            rad1[0][9]=57;
            rad1[0][10]=48;

            printf("%c",rad1[i][j]);
        }
        printf("\n");
      }

      printf("\nTableau Joueur 1\n");
      for(i=0; i < 11; i++){
        for(j = 0; j < 11; j++){
            tab1[i][j]=126;
            tab1[1][0]=49;
            tab1[2][0]=50;
            tab1[3][0]=51;
            tab1[4][0]=52;
            tab1[5][0]=53;
            tab1[6][0]=54;
            tab1[7][0]=55;
            tab1[8][0]=56;
            tab1[9][0]=57;
            tab1[10][0]=48;

            tab1[0][1]=49;
            tab1[0][2]=50;
            tab1[0][3]=51;
            tab1[0][4]=52;
            tab1[0][5]=53;
            tab1[0][6]=54;
            tab1[0][7]=55;
            tab1[0][8]=56;
            tab1[0][9]=57;
            tab1[0][10]=48;

            printf("%c",tab1[i][j]);
        }
        printf("\n");
      }

      printf("\nRadar Joueur 2\n");
      for(i=0; i < 11; i++){
        for(j = 0; j < 11; j++){
            rad2[i][j]=126;
            rad2[1][0]=49;
            rad2[2][0]=50;
            rad2[3][0]=51;
            rad2[4][0]=52;
            rad2[5][0]=53;
            rad2[6][0]=54;
            rad2[7][0]=55;
            rad2[8][0]=56;
            rad2[9][0]=57;
            rad2[10][0]=48;


            rad2[0][1]=49;
            rad2[0][2]=50;
            rad2[0][3]=51;
            rad2[0][4]=52;
            rad2[0][5]=53;
            rad2[0][6]=54;
            rad2[0][7]=55;
            rad2[0][8]=56;
            rad2[0][9]=57;
            rad2[0][10]=48;

            printf("%c",rad2[i][j]);
        }
        printf("\n");
      }

      printf("\nTableau Joueur 2\n");
      for(i=0; i < 11; i++){
        for(j = 0; j < 11; j++){
            tab2[i][j]=126;
            tab2[1][0]=49;
            tab2[2][0]=50;
            tab2[3][0]=51;
            tab2[4][0]=52;
            tab2[5][0]=53;
            tab2[6][0]=54;
            tab2[7][0]=55;
            tab2[8][0]=56;
            tab2[9][0]=57;
            tab2[10][0]=48;

            tab2[0][1]=49;
            tab2[0][2]=50;
            tab2[0][3]=51;
            tab2[0][4]=52;
            tab2[0][5]=53;
            tab2[0][6]=54;
            tab2[0][7]=55;
            tab2[0][8]=56;
            tab2[0][9]=57;
            tab2[0][10]=48;

            printf("%c",tab2[i][j]);
        }
        printf("\n");
      }


            for (nbbat1=1;nbbat1>0;nbbat1--){

            for(i=0; i < 11; i++){
                for(j = 0; j < 11; j++){
                    rad1[i][j]=126;
                    tab1[i][j]=126;
                    rad2[i][j]=126;
                    tab2[i][j]=126;
                }
            }

            printf("\nEntrez les positions du torpilleur (X,Y) \n");
            scanf("%d",&posx1);
            scanf("%d",&posy1);
            compteJ1++;
            scanf("%d",&posx2);
            scanf("%d",&posy2);
            compteJ1++;

            tab1[posx1][posy1]=66;
            tab1[posx2][posy2]=66;



            printf("\nEntrez les positions de votre premier contre-torpilleur (trois cases)\n");
            scanf("%d",&posx1);
            scanf("%d",&posy1);
            compteJ1++;
            scanf("%d",&posx2);
            scanf("%d",&posy2);
            compteJ1++;
            scanf("%d",&posx3);
            scanf("%d",&posy3);
            compteJ1++;

            tab1[posx1][posy1]=66;
            tab1[posx2][posy2]=66;
            tab1[posx3][posy3]=66;


            printf("\nEntrez les positions de vos deuxieme contre-torpilleur (trois cases)\n");
            scanf("%d",&posx1);
            scanf("%d",&posy1);
            compteJ1++;
            scanf("%d",&posx2);
            scanf("%d",&posy2);
            compteJ1++;
            scanf("%d",&posx3);
            scanf("%d",&posy3);
            compteJ1++;

            tab1[posx1][posy1]=66;
            tab1[posx2][posy2]=66;
            tab1[posx3][posy3]=66;


            printf("\nEntrez les positions de votre croiseur (quatre cases)\n");
            scanf("%d",&posx1);
            scanf("%d",&posy1);
            compteJ1++;
            scanf("%d",&posx2);
            scanf("%d",&posy2);
            compteJ1++;
            scanf("%d",&posx3);
            scanf("%d",&posy3);
            compteJ1++;
            scanf("%d",&posx4);
            scanf("%d",&posy4);
            compteJ1++;

            tab1[posx1][posy1]=66;
            tab1[posx2][posy2]=66;
            tab1[posx3][posy3]=66;
            tab1[posx4][posy4]=66;



            printf("\nEntrez les positions de votre porte-avion (cinq cases)\n");
            scanf("%d",&posx1);
            scanf("%d",&posy1);
            compteJ1++;
            scanf("%d",&posx2);
            scanf("%d",&posy2);
            compteJ1++;
            scanf("%d",&posx3);
            scanf("%d",&posy3);
            compteJ1++;
            scanf("%d",&posx4);
            scanf("%d",&posy4);
            compteJ1++;
            scanf("%d",&posx5);
            scanf("%d",&posy5);
            compteJ1++;

            tab1[posx1][posy1]=66;
            tab1[posx2][posy2]=66;
            tab1[posx3][posy3]=66;
            tab1[posx4][posy4]=66;
            tab1[posx5][posy5]=66;

            system("cls");

            printf("\nRadar Joueur 1\n");
            for(i=0; i < 11; i++){
                for(j = 0; j < 11; j++){
                    rad1[i][j]=126;
                    rad1[1][0]=49;
                    rad1[2][0]=50;
                    rad1[3][0]=51;
                    rad1[4][0]=52;
                    rad1[5][0]=53;
                    rad1[6][0]=54;
                    rad1[7][0]=55;
                    rad1[8][0]=56;
                    rad1[9][0]=57;
                    rad1[10][0]=48;

                    rad1[0][1]=49;
                    rad1[0][2]=50;
                    rad1[0][3]=51;
                    rad1[0][4]=52;
                    rad1[0][5]=53;
                    rad1[0][6]=54;
                    rad1[0][7]=55;
                    rad1[0][8]=56;
                    rad1[0][9]=57;
                    rad1[0][10]=48;

                    printf("%c",rad1[i][j]);
                }
                printf("\n");
            }


            printf("\nTableau Joueur 1\n");
            for(i=0; i < 11; i++){
                for(j = 0; j < 11; j++){


                    tab1[1][0]=49;
                    tab1[2][0]=50;
                    tab1[3][0]=51;
                    tab1[4][0]=52;
                    tab1[5][0]=53;
                    tab1[6][0]=54;
                    tab1[7][0]=55;
                    tab1[8][0]=56;
                    tab1[9][0]=57;
                    tab1[10][0]=48;

                    tab1[0][1]=49;
                    tab1[0][2]=50;
                    tab1[0][3]=51;
                    tab1[0][4]=52;
                    tab1[0][5]=53;
                    tab1[0][6]=54;
                    tab1[0][7]=55;
                    tab1[0][8]=56;
                    tab1[0][9]=57;
                    tab1[0][10]=48;

                    printf("%c",tab1[i][j]);

                }
            printf("\n");
            }




            for(i=0; i < 11; i++){
                for(j = 0; j < 11; j++){

                    rad2[i][j]=126;
                    tab2[i][j]=126;
                }
            }

            printf("\n Joueur 2 : Entrez les positions de votre torpilleur (X,Y)\n");
            scanf("%d",&posx1);
            scanf("%d",&posy1);
            compteJ2++;
            scanf("%d",&posx2);
            scanf("%d",&posy2);
            compteJ2++;
            tab2[posx1][posy1]=66;
            tab2[posx2][posy2]=66;



            printf("\nEntrez les positions de votre premier contre-torpilleur (trois cases)\n");
            scanf("%d",&posx1);
            scanf("%d",&posy1);
            compteJ2++;
            scanf("%d",&posx2);
            scanf("%d",&posy2);
            compteJ2++;
            scanf("%d",&posx3);
            scanf("%d",&posy3);
            compteJ2++;

            tab2[posx1][posy1]=66;
            tab2[posx2][posy2]=66;
            tab2[posx3][posy3]=66;


            printf("\n Joueur 2 : Entrez les positions de vos deuxieme contre-torpilleur (trois cases)\n");
            scanf("%d",&posx1);
            scanf("%d",&posy1);
            compteJ2++;
            scanf("%d",&posx2);
            scanf("%d",&posy2);
            compteJ2++;
            scanf("%d",&posx3);
            scanf("%d",&posy3);
            compteJ2++;

            tab2[posx1][posy1]=66;
            tab2[posx2][posy2]=66;
            tab2[posx3][posy3]=66;


            printf("\n Joueur 2 : Entrez les positions de votre croiseur (quatre cases)\n");
            scanf("%d",&posx1);
            scanf("%d",&posy1);
            compteJ2++;
            scanf("%d",&posx2);
            scanf("%d",&posy2);
            compteJ2++;
            scanf("%d",&posx3);
            scanf("%d",&posy3);
            compteJ2++;
            scanf("%d",&posx4);
            scanf("%d",&posy4);
            compteJ2++;

            tab2[posx1][posy1]=66;
            tab2[posx2][posy2]=66;
            tab2[posx3][posy3]=66;
            tab2[posx4][posy4]=66;



            printf("\n Joueur 2 : Entrez les positions de votre porte-avion (cinq cases)\n");
            scanf("%d",&posx1);
            scanf("%d",&posy1);
            compteJ2++;
            scanf("%d",&posx2);
            scanf("%d",&posy2);
            compteJ2++;
            scanf("%d",&posx3);
            scanf("%d",&posy3);
            compteJ2++;
            scanf("%d",&posx4);
            scanf("%d",&posy4);
            compteJ2++;
            scanf("%d",&posx5);
            scanf("%d",&posy5);
            compteJ2++;

            tab2[posx1][posy1]=66;
            tab2[posx2][posy2]=66;
            tab2[posx3][posy3]=66;
            tab2[posx4][posy4]=66;
            tab2[posx5][posy5]=66;




            printf("\nRadar Joueur 2\n");
            for(i=0; i < 11; i++){
                for(j = 0; j < 11; j++){

                    rad2[1][0]=49;
                    rad2[2][0]=50;
                    rad2[3][0]=51;
                    rad2[4][0]=52;
                    rad2[5][0]=53;
                    rad2[6][0]=54;
                    rad2[7][0]=55;
                    rad2[8][0]=56;
                    rad2[9][0]=57;
                    rad2[10][0]=48;

                    rad2[0][1]=49;
                    rad2[0][2]=50;
                    rad2[0][3]=51;
                    rad2[0][4]=52;
                    rad2[0][5]=53;
                    rad2[0][6]=54;
                    rad2[0][7]=55;
                    rad2[0][8]=56;
                    rad2[0][9]=57;
                    rad2[0][10]=48;

                    printf("%c",rad2[i][j]);

                }
            printf("\n");
            }

            printf("\nTableau Joueur 2\n");
            for(i=0; i < 11; i++){
                for(j = 0; j < 11; j++){

                    tab2[1][0]=49;
                    tab2[2][0]=50;
                    tab2[3][0]=51;
                    tab2[4][0]=52;
                    tab2[5][0]=53;
                    tab2[6][0]=54;
                    tab2[7][0]=55;
                    tab2[8][0]=56;
                    tab2[9][0]=57;
                    tab2[10][0]=48;

                    tab2[0][1]=49;
                    tab2[0][2]=50;
                    tab2[0][3]=51;
                    tab2[0][4]=52;
                    tab2[0][5]=53;
                    tab2[0][6]=54;
                    tab2[0][7]=55;
                    tab2[0][8]=56;
                    tab2[0][9]=57;
                    tab2[0][10]=48;
                    printf("%c",tab2[i][j]);

                }

                printf("\n");
            }


    }



    while ((compteJ1>0) | (compteJ2>0)){
        printf("\n Joueur 2 : Veuillez entrer les coordonnees de votre tir \n");
        scanf("%d",&postirx1);
        scanf("%d",&postiry1);
        if(tab1[postirx1][postiry1]==66){
            printf("Touche !");
            rad2[postirx1][postiry1]=88;
            tab1[postirx1][postiry1]=88;
            compteJ1=compteJ1-1;

        }else{
            printf("Rate !");
            rad2[postirx1][postiry1]=79;
        }



            printf("\nRadar Joueur 1\n");
            for(i=0; i < 11; i++){
                for(j=0; j < 11; j++){


                    rad1[1][0]=49;
                    rad1[2][0]=50;
                    rad1[3][0]=51;
                    rad1[4][0]=52;
                    rad1[5][0]=53;
                    rad1[6][0]=54;
                    rad1[7][0]=55;
                    rad1[8][0]=56;
                    rad1[9][0]=57;
                    rad1[10][0]=48;

                    rad1[0][1]=49;
                    rad1[0][2]=50;
                    rad1[0][3]=51;
                    rad1[0][4]=52;
                    rad1[0][5]=53;
                    rad1[0][6]=54;
                    rad1[0][7]=55;
                    rad1[0][8]=56;
                    rad1[0][9]=57;
                    rad1[0][10]=48;

                    printf("%c",rad1[i][j]);
                }
                printf("\n");
            }


            printf("\nTableau Joueur 1\n");
            for(i=0; i < 11; i++){
                for(j = 0; j < 11; j++){


                    tab1[1][0]=49;
                    tab1[2][0]=50;
                    tab1[3][0]=51;
                    tab1[4][0]=52;
                    tab1[5][0]=53;
                    tab1[6][0]=54;
                    tab1[7][0]=55;
                    tab1[8][0]=56;
                    tab1[9][0]=57;
                    tab1[10][0]=48;

                    tab1[0][1]=49;
                    tab1[0][2]=50;
                    tab1[0][3]=51;
                    tab1[0][4]=52;
                    tab1[0][5]=53;
                    tab1[0][6]=54;
                    tab1[0][7]=55;
                    tab1[0][8]=56;
                    tab1[0][9]=57;
                    tab1[0][10]=48;

                    printf("%c",tab1[i][j]);

                }
            printf("\n");
            }

        printf("\n Joueur 1 : Veuillez entrer les coodonness de votre tir \n");
        scanf("%d",&postirx2);
        scanf("%d",&postiry2);
        if(tab2[postirx2][postiry2]==66){
            printf("Touche !");
            rad1[postirx2][postiry2]=88;
            tab2[postirx2][postiry2]=88;
            compteJ2=compteJ2-1;

        }else{
        printf("Rate !");
        rad2[postirx2][postiry2]=79;
        }

        printf("\nRadar Joueur 2\n");
            for(i=0; i < 11; i++){
                for(j = 0; j < 11; j++){
                    rad2[postirx1][postiry1]=88;

                    rad2[1][0]=49;
                    rad2[2][0]=50;
                    rad2[3][0]=51;
                    rad2[4][0]=52;
                    rad2[5][0]=53;
                    rad2[6][0]=54;
                    rad2[7][0]=55;
                    rad2[8][0]=56;
                    rad2[9][0]=57;
                    rad2[10][0]=48;

                    rad2[0][1]=49;
                    rad2[0][2]=50;
                    rad2[0][3]=51;
                    rad2[0][4]=52;
                    rad2[0][5]=53;
                    rad2[0][6]=54;
                    rad2[0][7]=55;
                    rad2[0][8]=56;
                    rad2[0][9]=57;
                    rad2[0][10]=48;

                    printf("%c",rad2[i][j]);

                }
            printf("\n");

        }

        printf("\nTableau Joueur 2\n");
            for(i=0; i < 11; i++){
                for(j = 0; j < 11; j++){

                    tab2[1][0]=49;
                    tab2[2][0]=50;
                    tab2[3][0]=51;
                    tab2[4][0]=52;
                    tab2[5][0]=53;
                    tab2[6][0]=54;
                    tab2[7][0]=55;
                    tab2[8][0]=56;
                    tab2[9][0]=57;
                    tab2[10][0]=48;

                    tab2[0][1]=49;
                    tab2[0][2]=50;
                    tab2[0][3]=51;
                    tab2[0][4]=52;
                    tab2[0][5]=53;
                    tab2[0][6]=54;
                    tab2[0][7]=55;
                    tab2[0][8]=56;
                    tab2[0][9]=57;
                    tab2[0][10]=48;
                    printf("%c",tab2[i][j]);

                }

                printf("\n");
            }


    }
    if(compteJ1==0){
        printf("Le joueur 2 est victorieux !");


    }else{
        if(compteJ2==0){
            printf("Les joueur 1 est victorieux !");


        }
    }



}






void Menu(){
    char r = 'N';


    printf("\n Voulez-vous jouer ? \n Oui (O) \n Non (N) \n Score (S)\n");
    scanf("%c",&r);

    if((r=='O') | (r=='o')){
        AffichageGrille();

    }else if((r=='S') | (r=='s')){
        FILE* fichier = NULL;
        fichier = fopen("score.txt", "r+");

        if (fichier != NULL)
        {
            /*fputs("nombre de victoires du joueur 2", fichier);
            fputs(gagnant, fichier);
            fputs("Nombre de victoires du joueur 1", fichier);
            fputs(gagnant2, fichier);*/

            fclose(fichier);
        }

        printf("\n Normalement y\'a le score mais bon");
    }else{
        printf("\n Au revoir");
    }

}


int main()
{

    Menu();

    return 0;
}

