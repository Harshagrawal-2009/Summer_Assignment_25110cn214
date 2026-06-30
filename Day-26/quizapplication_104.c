#include <stdio.h>

int main() {
    int choice, score = 0;

    printf("=== Welcome to the Quiz Application ===\n\n");

    // Question 1
    printf("Q1: What is the capital of India?\n");
    printf("1. Mumbai\n");
    printf("2. Delhi\n");
    printf("3. Kolkata\n");
    printf("4. Chennai\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    if (choice == 2) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! The correct answer is Delhi.\n\n");
    }

    // Question 2
    printf("Q2: Who is known as the father of C language?\n");
    printf("1. Dennis Ritchie\n");
    printf("2. James Gosling\n");
    printf("3. Bjarne Stroustrup\n");
    printf("4. Guido van Rossum\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    if (choice == 1) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! The correct answer is Dennis Ritchie.\n\n");
    }

    // Question 3
    printf("Q3: Which planet is known as the Red Planet?\n");
    printf("1. Earth\n");
    printf("2. Mars\n");
    printf("3. Jupiter\n");
    printf("4. Venus\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    if (choice == 2) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! The correct answer is Mars.\n\n");
    }

    //Question 4
    printf("Q4: Which Indian city is widely known as the Pink City?\n");
    printf("1. Udaipur\n");
    printf("2. Jodhpur\n");
    printf("3. Jaipur\n");
    printf("4. Mysuru\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    if (choice == 3) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! The correct answer is Jaipur.\n\n");
    }

    //Question 5
    printf("Q5: What is the boiling point of water at sea level?\n");
    printf("1.  90°C\n");
    printf("2. 100°C\n");
    printf("3. 110°C\n");
    printf("4.  120°C\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    if (choice == 2) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! The correct answer is 100°C.\n\n");
    }

    // Final Score
    printf("=== Quiz Finished ===\n");
    printf("Your total score is: %d out of 4\n", score);

    if (score == 5) {
        printf("Excellent! You got all correct.\n");
    } else if (score >= 3) {
        printf("Good job!.\n");
    } else {
        printf("Keep practicing!.\n");
    }

    return 0;
}
