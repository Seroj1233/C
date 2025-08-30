#ifndef QUIZZGAME
#define QUIZZGAME
#define MAX_QUESTIONS 5
#define MAX_TEXT_LEN 100
#define MAX_OPTION_LEN 50


extern char questions[][100];
extern char optionsA[][50];
extern char optionsB[][50];
extern char optionsC[][50];
extern char optionsD[][50];
extern char correctAnswers[];




void playQuiz(int totalQuestions);
int getCorrect(int correct);
int getWrong(int wrong);

#endif
