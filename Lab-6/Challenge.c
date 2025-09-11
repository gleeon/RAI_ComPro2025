#include<stdio.h>

int main(){
    struct inf{
        char name[20];
        int id;
        float m, e, s, h;
        float a;
    } s[3];

    int ha = 0, h;
    float bam, bae, bas, bah;
    
    for(int i = 0; i<3; i++){
        printf("Enter name, ID, and 4 grades for student %d:\n", i+1);
        scanf("%s %d %f %f %f %f", s[i].name, &s[i].id, &s[i].m, &s[i].e, &s[i].s, &s[i].h);

        printf("\n");
        
        //Average per student
        s[i].a = (s[i].m+s[i].e+s[i].s+s[i].h)/4;
        
        //Find highest avg by comparing
        if(s[i].a>ha){
            h = i;
            ha = s[i].a;
        }

        //add total
        bam += s[i].m;
        bae += s[i].e;
        bas += s[i].s;
        bah += s[i].h;
    }
    //Find avg of each sub
    float am,  ae, as, ah; 
    am = bam/3.00;
    ae = bae/3.00;
    as = bas/3.00;
    ah = bah/3.00;

    float ha1, ha2, fh;
    char *hn1, *hn2, *fhn;

    if(am>ae){
        ha1=am;
        hn1 = "Math";
    }
    else{
        ha1=ae;
        hn1 = "English";
    }

    
    if(as>ah){
        ha2=as;
        hn2 = "Science";
    }
    else{
        ha2=ah;
        hn2 = "History";
    }

    if(ha1>ha2){
        fh = ha1;
        fhn = hn1;

    }
    else{
        fh = ha2;
        fhn = hn2;
    }

    printf("Student Averages: \n");
    for(int i = 0; i<3; i++){
        printf("%s (ID: %d): %.2f\n", s[i].name, s[i].id, s[i].a);
    }
    printf("\n");
    printf("Top student: %s with %.2f\n", s[h].name, s[h].a);
    printf("\n");
    printf("Subject Averages:\n");
    printf("Math: %.2f\n", am);
    printf("English: %.2f\n", ae);
    printf("Science: %.2f\n", as);
    printf("History: %.2f\n", ah);
    printf("\n");
    printf("Top Subject: %s with average %.2f\n", fhn, fh);
}
