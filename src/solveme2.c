#include <stdio.h>


unsigned int make_solution(int id) {
	for(int i = 0; i < 5 ; i++) {
		id = id + i * i ; 
	}
	return id ^ 0xcafebabe;

}

int main() {
	unsigned int student_id;
	printf("Enter your student id : ");
	scanf("%d", &student_id);
	
	unsigned int result;	
	result = make_solution(student_id);
	// printf("Result is : %u\n", result);

	unsigned int solution;
	printf("Enter the solution : ");
	scanf("%d", &solution); 
	if(result == solution) printf("Sucess!\n"); 
	else printf("Fail!\n");
	
	return 0;
	
}
