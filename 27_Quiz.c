#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(){
    char questions[][100] = {
        "What is the capital of France?",
        "What is 2 + 2?",
        "What is the largest mammal?"
    };

    char options[][4][100] = {
        {"A) Paris", "B) London", "C) Rome", "D) Berlin"},
        {"A) 3", "B) 4", "C) 5", "D) 6"},
        {"A) Elephant", "B) Blue Whale", "C) Giraffe", "D) Hippopotamus"}
    };

    char answers[] = {'A', 'B', 'B'}; // Correct answers for the questions

    int questionCount = sizeof(questions) / sizeof(questions[0]);
    int score = 0;

    char userAnswers[3];
    printf("Welcome to the Quiz!\n\n");
    for (int i = 0; i < questionCount; i++){
        printf("%s\n", questions[i]);
        for (int j = 0; j < 4; j++){
            printf("%s\n", options[i][j]);
        }
        printf("Your answer (A/B/C/D): ");
        scanf(" %c", &userAnswers[i]);
        userAnswers[i] = toupper(userAnswers[i]); // Convert to uppercase

        if (userAnswers[i] == answers[i]){
            printf("Correct!\n\n");
            score++;
        } else {
            printf("Wrong! The correct answer is %c.\n\n", answers[i]);
        }

    }
    printf("Quiz completed! You got %d out of %d questions correct.\n", score, questionCount);
    if (score == questionCount){
        printf("Excellent! You got a perfect score!\n");
    } else if (score >= questionCount / 2){
        printf("Good job! You passed the quiz.\n");
    } else {
        printf("Better luck next time. Keep practicing!\n");
    }


} 