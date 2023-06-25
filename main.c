#include <stdio.h>

int main() {
    
    int numberOfCandidates, i;
    char jobCode;
    float experienceYear, englishGrade, gpa, score;
    
    printf("Enter the number of candidates: ");
    scanf("%d",&numberOfCandidates);
    
    for(i=0; i<numberOfCandidates; i++){
        
        printf("Enter job code, experience year, English grade and GPA :");
        scanf(" %c %f %f %f",&jobCode,&experienceYear,&englishGrade,&gpa);
        
        
        if(jobCode == 'E'){
            if(gpa>=2.50){
                score = englishGrade*0.4 + (gpa*100/4)*0.6;
                if(experienceYear>=5)
                    score+=20;
                printf("The score of candidate is : %.2f\n",score);
            } else {
                printf("Insufficient GPA for engineering.\n");
            }
            
        } else if (jobCode == 'T') {
            if(gpa>=2.20){
                score = englishGrade*0.3 + (gpa*100/4)*0.7;
                if (experienceYear>=5)
                    score+=25;
                printf("The score of candidate is : %.2f\n",score);
            } else {
                printf("Insufficient GPA for technician.\n");
            }
        } else {
            printf("Invalid job code. Please enter valid job code (E or T)\n");
        }
    }
        return 0;
        
    }

