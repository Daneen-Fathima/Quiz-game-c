#include <stdio.h>
#include <ctype.h>

int main() {
    // QUIZ GAME
    char questions[][100] = {
        "What is the largest planet in the solar system?",
        "What is the hottest planet?",
        "What planet has the most moons?",
        "Is the Earth Flat?"
    };

    char options[][100] = {
        "A. Jupiter\nB. Saturn\nC. Uranus\nD. Neptune",
        "A. Mercury\nB. Venus\nC. Earth\nD. Mars",
        "A. Earth\nB. Mars\nC. Jupiter\nD. Saturn",
        "A. Yes\nB. No\nC. Maybe\nD. Sometimes"
    };

    char answerkey[] = {'A', 'B', 'D', 'B'};
    int questionCount = sizeof(questions) / sizeof(questions[0]);
    
    char guess;
    int score = 0;

    printf("=== QUIZ GAME ===\n\n");

    // Loop through each question
    for (int i = 0; i < questionCount; i++) {
        printf("-------------------------\n");
        printf("%s\n", questions[i]);
        printf("%s\n", options[i]);
        printf("Enter your answer (A, B, C, or D): ");
        
        // Read user input and handle any leftover newline characters
        scanf(" %c", &guess);
        
        // Convert input to uppercase to match the answer key
        guess = toupper(guess);

        // Check if the answer is correct
        if (guess == answerkey[i]) {
            printf("CORRECT!\n");
            score++;
        } else {
            printf("WRONG! The correct answer is %c.\n", answerkey[i]);
        }
    }

    // Display final score
    printf("-------------------------\n");
    printf("FINAL SCORE: %d/%d\n", score, questionCount);
    printf("-------------------------\n");

    return 0;
}