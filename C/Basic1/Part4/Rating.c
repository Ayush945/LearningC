#include <stdio.h>
#include <ctype.h>

int main() {
    int i;
    int ctr = 0;
    char ans;

    // List of movies
    char *movies[9] = {
        "Amour", "Argo", "Beasts of the Southern Wild", 
        "Django Unchained", "Les Miserables", "Life of Pi", 
        "Lincoln", "Silver Linings Playbook", "Zero Dark Thirty"
    };
    
    // Array for movie ratings
    int movieratings[9] = {-1, -1, -1, -1, -1, -1, -1, -1, -1}; 

    char *tempmovie;
    int outer, inner, didSwap, temprating;

    printf("\n\n***Oscar Season 2025 is here! ***\n\n");
    printf("Time to rate this year's best picture nominees:\n");

    // Ask user for ratings
    for (i = 0; i < 9; i++) {
        printf("\nDid you see %s? (Y/N): ", movies[i]);
        scanf(" %c", &ans);

        if (toupper(ans) == 'Y') {
            printf("\nWhat was your rating on a scale of 1-10: ");
            scanf("%d", &movieratings[i]);
            ctr++;
        } else {
            movieratings[i] = -1;
        }
    }

    // Sorting the movies by rating in descending order
    for (outer = 0; outer < 8; outer++) {
        didSwap = 0;
        for (inner = outer + 1; inner < 9; inner++) {
            if (movieratings[inner] > movieratings[outer] && movieratings[outer] != -1) {
                // Swap ratings
                temprating = movieratings[inner];
                movieratings[inner] = movieratings[outer];
                movieratings[outer] = temprating;

                // Swap movie names
                tempmovie = movies[inner];
                movies[inner] = movies[outer];
                movies[outer] = tempmovie;

                didSwap = 1;
            }
        }
        if (didSwap == 0) {
            break;
        }
    }

    // Output the sorted movie ratings
    printf("\n\n** Your Movie Ratings for the 2025 Oscar Contenders **\n");
    for (i = 0; i < 9; i++) {
        if (movieratings[i] != -1) {  // Only print movies with valid ratings
            printf("%s  rated a %d!\n", movies[i], movieratings[i]);
        }
    }

    return 0;
}
