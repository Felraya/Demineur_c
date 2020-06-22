#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

//Test d'une propriété mathématique
//3 portes : porte 1, 2 ou 3


typedef char grille[9][9];


void affichage(grille tabcache)
{
	system("clear");

	printf("    ╭───────────────────────────────────╮\n");
	printf("    │  X    x                   x    X  │                                           +*   \n");
	printf("    │    ..     GRILLE  CACHE     ..    │                               -:+     :=**++=* \n");
	printf("    │  ╰────╯                   ╰────╯  │                                  *@#===**++++=*\n");
	printf("    ╰───────────────────────────────────╯                            *###=#@+*+=#=*+++**-\n");
	printf("                                                           -+#@@@@@@W@#@@*+*#@- *=**=+*- \n");
	printf("                                                        *@@@@@@@@@@W@@@@#+=@@@   +  +=:  \n");
	printf("                                                      #@@@@@@@@@@@@WW@@@@@##@W:      +   \n");
	printf("     \\x   0  1  2  3  4  5  6  7  8                 +@@@@@@@@@@@@@@@@W@@@@#@W@:          \n");
	printf("     y  ╭───────────────────────────╮              =@@@@@@@@@@@@@@@@@@@#==@@@@@*         \n");

	for (int j = 0 ; j < 9 ; j++)
	{
		if (j == 0)
		{
			printf("     0  │");;
		}
		if (j == 1)
		{
			printf("     1  │");;
		}
		if (j == 2)
		{
			printf("     2  │");;
		}
		if (j == 3)
		{
			printf("     3  │");;
		}
		if (j == 4)
		{
			printf("     4  │");;
		}
		if (j == 5)
		{
			printf("     5  │");;
		}
		if (j == 6)
		{
			printf("     6  │");;
		}
		if (j == 7)
		{
			printf("     7  │");;
		}
		if (j == 8)
		{
			printf("     8  │");;
		}
		
		for (int i = 0 ; i < 9 ; i++)
		{
			printf(" %c ",tabcache[i][j]); //A CHANGER EN TABVISIBLE PAR LA SUITE
		}
		printf("│");
		
		if (j == 0)
		{
			printf("             +@@@@@@@@@@@@@@@@@@@+     =@@@:\n");
		}
		if (j == 1)
		{
			printf("             @@@@@@@@@@@@@@@@@@@@+      =@@#\n");
		}
		if (j == 2)
		{
			printf("             @@@@@@@@@@@@@@@@@@@@@=     #@@@\n");
		}
		if (j == 3)
		{
			printf("             @@@@@@@@@@@@@@@@@@@@@@*-=@@@@@W\n");
		}
		if (j == 4)
		{
			printf("             @@@@@@@@@@@@@@@@@@@@@=   :@@@@#\n");
		}
		if (j == 5)
		{
			printf("             +@@@@@@@@@@@@@@@@@@@@@#=*#@@@@:\n");
		}
		if (j == 6)
		{
			printf("              *@@@@@@@@@@@@@@@@@@@@@@@@@@@+\n");
		}
		if (j == 7)
		{
			printf("               :@@@@@@@@@@@@@@@@@@@@@@@@@\n");
		}
		if (j == 8)
		{
			printf("                 *@@@@@@@@@@@@@@@@@@@@@+\n");
		}
	}
	
	printf("        ╰───────────────────────────╯                   :#@@@@@@@@@@@@@@@#\n");
	printf("                                                           :*#@@W@@@=*\n");
}


void affichage2(grille tabvisible, int score)
{
	printf("    ╭───────────────────────────────────╮\n");
	printf("    │                                   │                                           +*   \n");
	printf("    │  X   X   JEU DU DEMINEUR   X   X  │                               -:+     :=**++=* \n");
	printf("    │                                   │                                  *@#===**++++=*\n");
	printf("    ╰───────────────────────────────────╯                            *###=#@+*+=#=*+++**-\n");
	printf("                                                           -+#@@@@@@W@#@@*+*#@- *=**=+*- \n");
	printf("                                                        *@@@@@@@@@@W@@@@#+=@@@   +  +=:  \n");
	printf("                                                      #@@@@@@@@@@@@WW@@@@@##@W:      +   \n");
	printf("     \\x   0  1  2  3  4  5  6  7  8                 +@@@@@@@@@@@@@@@@W@@@@#@W@:          \n");
	printf("     y  ╭───────────────────────────╮              =@@@@@@@@@@@@@@@@@@@#==@@@@@*         \n");

	for (int j = 0 ; j < 9 ; j++)
	{
		if (j == 0)
		{
			printf("     0  │");;
		}
		if (j == 1)
		{
			printf("     1  │");;
		}
		if (j == 2)
		{
			printf("     2  │");;
		}
		if (j == 3)
		{
			printf("     3  │");;
		}
		if (j == 4)
		{
			printf("     4  │");;
		}
		if (j == 5)
		{
			printf("     5  │");;
		}
		if (j == 6)
		{
			printf("     6  │");;
		}
		if (j == 7)
		{
			printf("     7  │");;
		}
		if (j == 8)
		{
			printf("     8  │");;
		}
		
		for (int i = 0 ; i < 9 ; i++)
		{
			printf(" %c ",tabvisible[i][j]); //A CHANGER EN TABVISIBLE PAR LA SUITE
		}
		printf("│");
		
		if (j == 0)
		{
			printf("             +@@@@@@@@@@@@@@@@@@@+     =@@@:\n");
		}
		if (j == 1)
		{
			printf("             @@@@@@@@@@@@@@@@@@@@+      =@@#\n");
		}
		if (j == 2)
		{
			printf("             @@@@@@@@@@@@@@@@@@@@@=     #@@@\n");
		}
		if (j == 3)
		{
			printf("             @@@@@@@@@@@@@@@@@@@@@@*-=@@@@@W\n");
		}
		if (j == 4)
		{
			printf("             @@@@@@@@@@@@@@@@@@@@@=   :@@@@#\n");
		}
		if (j == 5)
		{
			printf("             +@@@@@@@@@@@@@@@@@@@@@#=*#@@@@:\n");
		}
		if (j == 6)
		{
			printf("              *@@@@@@@@@@@@@@@@@@@@@@@@@@@+\n");
		}
		if (j == 7)
		{
			printf("               :@@@@@@@@@@@@@@@@@@@@@@@@@\n");
		}
		if (j == 8)
		{
			printf("                 *@@@@@@@@@@@@@@@@@@@@@+\n");
		}
	}
	
	printf("        ╰───────────────────────────╯                   :#@@@@@@@@@@@@@@@#\n");
	printf("                                                           :*#@@W@@@=*\n");
	printf("\n");
	printf("            score : %d\n",score);
}


void vidage_grille_cache(grille tabcache) //REMPLI LA GRILLE AVEC DES '/' AVANT DE PLACER LES BOMBES
{
	for (int j = 0 ; j < 9 ; j++)
	{
		for (int i = 0 ; i < 9 ; i++)
		{
			tabcache[i][j] = '-';
		}
	}	
}


void remplissage_bombe(grille tabcache, int n)
{
	int x1;
	int x2;

	while (n > 0) //ATTRIBUAGE DES POSITIONS DES BOMBES
	{
		x1 = rand()%9;
		x2 = rand()%9;
		if (tabcache[x1][x2] != 'X')
		{
			tabcache[x1][x2] = 'X';
			n = n-1;
		}
	}
}


void bombes_adjacente(grille tabcache) //ON MET DANS CHAQUE CASE LE NOMBRE DE BOMBE ADJACENTE
{
	int n; //COMPTEUR DE BOMBES
	for (int j = 0 ; j < 9 ; j++)
	{
		for (int i = 0 ; i < 9 ; i++)
		{
			if (tabcache[i][j] != 'X')
			{
				if (tabcache[i-1][j] == 'X' && i>0)
				{
					n = n + 1;
				}
				if (tabcache[i+1][j] == 'X' && i<8)
				{
					n = n + 1;
				}
				if (tabcache[i][j-1] == 'X' && j>0)
				{
					n = n + 1;
				}
				if (tabcache[i][j+1] == 'X' && j<8)
				{
					n = n + 1;
				}
				if (tabcache[i-1][j-1] == 'X' && i>0 && j>0)
				{
					n = n + 1;
				}
				if (tabcache[i-1][j+1] == 'X' && i>0 && j<8)
				{
					n = n + 1;
				}
				if (tabcache[i+1][j-1] == 'X' && i<8 && j>0)
				{
					n = n + 1;
				}
				if (tabcache[i+1][j+1] == 'X' && i<8 && j<8)
				{
					n = n + 1;
				}

				//CONVERSION DES INT EN CHAR

				if (n == 1)
				{
					tabcache[i][j] = '1';
				}
				if (n == 2)
				{
					tabcache[i][j] = '2';
				}
				if (n == 3)
				{
					tabcache[i][j] = '3';
				}
				if (n == 4)
				{
					tabcache[i][j] = '4';
				}
				if (n == 5)
				{
					tabcache[i][j] = '5';
				}
				if (n == 6)
				{
					tabcache[i][j] = '6';
				}
				if (n == 7)
				{
					tabcache[i][j] = '7';
				}
				if (n == 8)
				{
					tabcache[i][j] = '8';
				}

			}
			n = 0; //RESET DU COMPTEUR
		}
	}	
}


void vidage_grille_visible(grille tabvisible) //REMPLI LA GRILLE AVEC DES '/' AVANT DE PLACER LES BOMBES
{
	for (int j = 0 ; j < 9 ; j++)
	{
		for (int i = 0 ; i < 9 ; i++)
		{
			tabvisible[i][j] = '/';
		}
	}	
}


void decouvre_case_auto(grille tabcache, grille tabvisible, int x, int y) //Découvre les cases adjacente en récursif
{
	if(tabcache[x][y] == '-' && tabvisible[x][y] == '/') //Vérifier si la case n'est pas découvertes puis si elle est vide(vide veux dire pas de chiffres n'y bombes)
	{
		tabvisible[x][y] = tabcache[x][y];
		
		if (x>=1)//pour pas sortir de la grille
		{
			decouvre_case_auto(tabcache, tabvisible, x-1, y);
		}
		if (x<=7)//pour pas sortir de la grille
		{
			decouvre_case_auto(tabcache, tabvisible, x+1, y);
		}
		if (y>=1)//pour pas sortir de la grille
		{
			decouvre_case_auto(tabcache, tabvisible, x, y-1);
		}
		if (y<=7)//pour pas sortir de la grille
		{
			decouvre_case_auto(tabcache, tabvisible, x, y+1);
		}
		if (x>=1 && y>=1)//pour pas sortir de la grille
		{
			decouvre_case_auto(tabcache, tabvisible, x-1, y-1);
		}
		if (x>=1 && y<=7)//pour pas sortir de la grille
		{
			decouvre_case_auto(tabcache, tabvisible, x-1, y+1);
		}
		if (x<=7 && y>=1)//pour pas sortir de la grille
		{
			decouvre_case_auto(tabcache, tabvisible, x+1, y-1);
		}
		if (x<=7 && y<=7)//pour pas sortir de la grille
		{
			decouvre_case_auto(tabcache, tabvisible, x+1, y+1);
		}
		
		
	}

	if(tabcache[x][y] == '1' || tabcache[x][y] == '2' || tabcache[x][y] == '3' || tabcache[x][y] == '4' || tabcache[x][y] == '5' || tabcache[x][y] == '6' || tabcache[x][y] == '7' || tabcache[x][y] == '8') //change la case en le chiffre qui correspond
	{
		tabvisible[x][y] = tabcache[x][y];
	}
}


void decouvre_case(grille tabcache, grille tabvisible, int x, int y) //Premiers click
{
	if (tabvisible[x][y] != 'D')
	{

		if(tabcache[x][y] == 'X')
		{
			tabvisible[x][y] = tabcache[x][y];
		}
		else
		{

			if(tabcache[x][y] == '-' && tabvisible[x][y] =='/')
			{
				tabvisible[x][y] = tabcache[x][y];
		
				if (x>0)
				{
					decouvre_case_auto(tabcache, tabvisible, x-1, y);
				}
				if (x<8)
				{
					decouvre_case_auto(tabcache, tabvisible, x+1, y);
				}
				if (y>0)
				{
					decouvre_case_auto(tabcache, tabvisible, x, y-1);
				}
				if (y<8)
				{
					decouvre_case_auto(tabcache, tabvisible, x, y+1);
				}
				if (x>0 && y>0)
				{
					decouvre_case_auto(tabcache, tabvisible, x-1, y-1);
				}
				if (x>0 && y<8)
				{
					decouvre_case_auto(tabcache, tabvisible, x-1, y+1);
				}
				if (x<8 && y>0)
				{
					decouvre_case_auto(tabcache, tabvisible, x+1, y-1);
				}
				if (x<8 && y<8)
				{
					decouvre_case_auto(tabcache, tabvisible, x+1, y+1);
				}
				
			}

			if(tabcache[x][y] == '1' || tabcache[x][y] == '2' || tabcache[x][y] == '3' || tabcache[x][y] == '4' ||tabcache[x][y] == '5' || tabcache[x][y] == '6' || tabcache[x][y] == '7' || tabcache[x][y] == '8')
			{
				tabvisible[x][y] = tabcache[x][y];
			}

		}
	}

}


void drapeau(grille tabvisible, int x, int y)
{
	if (tabvisible[x][y] != 'D' && tabvisible[x][y] != '-')
	{
		tabvisible[x][y] = 'D';
	}
	else
	{
		tabvisible[x][y] = '/';
	}
}



bool victoire(grille tabvisible, grille tabcache)
{
	bool end = true;

	for (int j = 0 ; j < 9 ; j++)
	{
		for (int i = 0 ; i < 9 ; i++)
		{
		  if (tabvisible[i][j] == '/' && tabcache[i][j] != 'X' )
		    {
		      end = false;
		    }
		}
	}
	
	return end;
}


bool defaite(grille tabvisible)
{
	bool end = false;

	for (int j = 0 ; j < 9 ; j++)
	{
		for (int i = 0 ; i < 9 ; i++)
		{
		  if (tabvisible[i][j] == 'X' )
		    {
		      end = true;
		    }
		}
	}
	
	return end;
}


int main()
{
	int score = 0;
	bool end;
	srand(time(NULL));
	char tabcache[9][9];
	char tabvisible[9][9];
	int x;
	int y;
	int bombe;
	int n; //NB DE BOMBE METTRE UN SCANF POUR DIFFERENTE DIFFICULTE
	int choix;

	printf("LEVEL 1 : TRES FACILE (3 Bombes)\n");
	printf("LEVEL 2 : FACILE (5 Bombes)\n");
	printf("LEVEL 3 : NORMAL (7 Bombes)\n");
	printf("LEVEL 4 : DIFFICILE (10 Bombes)\n");
	printf("LEVEL 5 : EXPERT (15 Bombes)\n");
	printf("LEVEL 6 : CHUCK NORRIS DIFFICULTY\n");

	printf("\nVeuillez saisir le niveau de jeu : ");
	scanf("%d",&bombe);
	printf("\n");

	if (bombe == 1)
	{
		n = 3;
	}
	if (bombe == 2)
	{
		n = 5;
	} 
	if (bombe == 3)
	{
		n = 7;
	} 
	if (bombe == 4)
	{
		n = 10;
	} 
	if (bombe == 5)
	{
		n = 15;
	} 
	if (bombe == 6)
	{
		n = 80;
	} 

	vidage_grille_cache(tabcache); //INITIALISE
	remplissage_bombe(tabcache, n);
	bombes_adjacente(tabcache);

	vidage_grille_visible(tabvisible);

	end = victoire(tabvisible, tabcache);

	while (end == false)
	{
		affichage2(tabvisible, score);
		printf("1 : DECOUVRIR UNE CASE\n");
		printf("2 : POSER UN DRAPEAU\n");
		printf("\nSaisir coup a jouer : ");
		scanf("%d",&choix);

		if (choix == 1)
		{
			printf("\nSaisir une coordonnée sur x : ");
			scanf("%d",&x);
			printf("\nSaisir une coordonnée sur y : ");
			scanf("%d",&y);
			
			decouvre_case(tabcache, tabvisible, x, y);
	 		end = victoire(tabvisible, tabcache);

	 		if (tabvisible[x][y] != 'D')
	 		{
	 			score++;
	 		}
	 	}
	 	if (choix == 2)
	 	{
	 		printf("\nSaisir une coordonnée sur x : ");
			scanf("%d",&x);
			printf("\nSaisir une coordonnée sur y : ");
			scanf("%d",&y);

	 		drapeau(tabvisible, x, y);
	 	}
	 	if (choix == 666) //CHEAT CODE
	 	{
	 		
	 		affichage(tabcache);
	 	}


	 	if (defaite(tabvisible) == true)
	 	{
	 		printf("\nYOU LOOSE !\n");

			for (int j = 0 ; j < 9 ; j++)
			{
				for (int i = 0 ; i < 9 ; i++)
				{
					tabvisible[i][j] = tabcache[i][j];  
				}
			}

			affichage2(tabvisible, score);

	 		return 0;
	 	}

	}

	for (int j = 0 ; j < 9 ; j++)
	{
		for (int i = 0 ; i < 9 ; i++)
		{
			tabvisible[i][j] = tabcache[i][j];  
		}
	}

	affichage2(tabvisible, score);

	printf("\n\n!!!!! VOUS AVEZ GAGNE !!!!!\n");

	return 0;
}
