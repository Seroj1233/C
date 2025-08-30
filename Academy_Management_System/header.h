#ifndef ACCADEMY
#define ACCADEMY
#define SIZE 3
#define NAME 100

	typedef struct {
		char name[100];
		int user_id;
		int monthExams[SIZE];
		float totalScore;
		int passed;
		int phase;
		int language;
	
}studinfo;

	typedef enum {Cpp, Web, AI, DevHack} Language;

	typedef enum {Computer_Science, Core_Language, Specialties} Phase;

	void addStudent(studinfo *obj);

	void inputMonthlyExam (studinfo *obj);

	void calculateTotal (studinfo *obj);

	int minScoreForThirdMonth (int month1, int month2);

	void checkPassed (studinfo *obj);

	void printStudentReport (studinfo *obj);

#endif
