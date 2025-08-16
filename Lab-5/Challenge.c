#include <stdio.h>

int main()
{
    int n, i, j, k, v=1;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int m[n];
    printf("Enter %d integer(s): \n", n);
    for(i=0; i<n; i++){
        scanf("%d", &m[i]);
    }


    for(i=0; i<n; i++){
        if(m[i]!=m[0]){
            v++;
            for(j=1; j<i; j++){
                if(m[i]==m[j]){
                    v--;
                }
            }
        }
    printf("checking elemts %d now %dv is %d\n", m[i], i, v);
    }
    int rv[v], rc[v];


    for(i=0; i<n; i++){
        rv[i] = 0;
        rc[i] = 0;
    }

    for(j=0; j<v; j++){
        for(i=0; i<n; i++){
            if(m[i]==rv[j]){
                rc[j]++;
                break;
            }
            if(rc[j]=0){
                rv[j]=m[i];
                printf("Added %d value into rv[%d]", m[i], j);
                rc[j]++;
            }
        }
    }
    /*
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(m[j]==rv[i]){
                printf("%d, %d, 1 break la\n", i, j);
                printf("%d, %d, %d\n", rv[0], rv[1], rv[2]);
                break;
            }
            else if(m[j]!=rv[i]){
                rv[i]=m[j];
                printf("%d, %d, 2 added\n", i, j);
                printf("%d, %d, %d\n", rv[0], rv[1], rv[2]);
            }
        }
        
    }
    */
    // for(i=1; i<n; i++){
    //     for(j=0; j<v; j++){
    //         if(m[i]!=rv[j]){
    //             rv[j]=m[i];
    //         printf("%d %d %d\n", rv[0], rv[1], rv[2]);
    //         }
    //     }
        
    // }
    // for(i=1; i<n; i++){
    //     if(m[0]!=m[i]){
    //         for(j=1; j<i; j++){
    //             switch(m[i]!=m[j]){
    //                 case 1:
    //                     rv[i]=m[i];
    //                     printf("1");
    //                     break;
    //                 case 0:
    //                     rv[i]=m[i];
    //                     break;
    //                     printf("0");
    //             }

    //             printf("Updating, adding %d into rv[i]\n", m[i]);
    //             }
    //         }
    //     }
    
    //for(i=0; i<v; i++){
    //    rc[i] = 0;
    //}
    for(i=0; i<v; i++){
        
        printf("%d %d %d %d %d\n", rc[0], rc[1], rc[2], rc[3], rc[4]);
        printf("now, rc[i] for the value %d is %d\n", rv[i], rc[i]);     
        
        for(j=0; j<n; j++){
            if(m[j]==rv[i]){
                rc[i]++;
            printf("added 1 counts into (%d)\n", rv[i]);
            }
        }
    }
    for(i=0; i<v; i++){
        printf("Element %d occurs %d time(s)\n", rv[i], rc[i]);
    }

}
