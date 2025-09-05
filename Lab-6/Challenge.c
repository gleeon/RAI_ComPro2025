#include<stdio.h>

int main(){
    struct inf{
        char name[20];
        int id;
        int m, e, s, h;
        float a;
    } s[3];

    int ha = 0;
    int bam, bae, bas, bah;
    //struct g{}
    

    for(int i = 0; i<3; i++){
        printf("Enter name, ID, and 4 grades for student %d", i+1);
        scanf("%s %d %d %d %d %d", s[i].name, s[i].id, &s[i].m, &s[i].e, &s[i].s, &s[i].h);
        
        //Average per student
        s[i].a = (s[i].m+s[i].e+s[i].s+s[i].h)/4
        
        //Find highest avg by comparing
        if(s[i].score>ha){
            ha = s[i].a;
        }

        //add total
        bam += s[i].m;
        bae += s[i].e;
        bas += s[i].s;
        bah += s[i].h;


    }
    //Find avg of each sub
    float am = bam/4, ae = bae/4, as = bas/4, ah = bah/4;

    float ha1, ha2, fh;

    if(am>ae){
        ha1=am;
    }
    else{
        ha1=ae;
    }

    
    if(as>ah){
        ha2=as;
    }
    else{
        ha2=ah;
    }

    if(ha1>ha2){
        fh = ha1;
    }
    else{
        fh = ha2;
    }

    printf("Student Averages: \n");
    printf("Alice (ID: %d): %.2f\n", s[0].id);
}
