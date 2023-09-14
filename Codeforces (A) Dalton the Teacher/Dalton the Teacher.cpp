// Problem from Codeforces.com
// Title: Dalton the Teacher
// Level: A
// time limit per test1 second
// memory limit per test256 megabytes

#include <stdio.h>

int check(int *student, int len){
    int count = 0, temp;
    for(int i = 1; i <= len; i++){
        if(student[i] == i){
        	if(i == len){
        		temp = student[i];
	            student[i] = student[i - 1];
	            student[i - 1] = temp;
			}
        	else{
        		temp = student[i];
		        student[i] = student[i + 1];
		        student[i + 1] = temp;
			}
			count++;
		}
    }
    return count;
}

int main(){
    int cases, len, valid = 0, res;

    scanf("%d", &cases);
    
    if(cases < 1) return 0;
    for(int i = 0; i < cases; i++){
        scanf("%d", &len);
        if(len < 2) valid == 1;

        int student[len];
        for(int j = 1; j <= len; j++){
            scanf("%d", &student[j]);
            if(student[j] < 1) valid = 1;
            //printf("%d ", student[j]);
        }
        //puts("");
        
        if(valid == 1)break;
        
        res = check(student, len);
        
//        for(int x = 1; x <= len; x++){
//        	printf("%d ", student[x]);
//		}
//		puts("");
		
        printf("%d\n", res);
    }
    return 0;
}
