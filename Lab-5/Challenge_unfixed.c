#include <stdio.h>

int main()
{   
    //Enter element num
    int n, i, j, k, v=1;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    //Enter and get integer
    int m[n];
    printf("Enter %d integer(s): \n", n);
    for(i=0; i<n; i++){
        scanf("%d", &m[i]);
    }

    //Checking the count of unduplicate element
    for(i=0; i<n; i++){
        if(m[i]!=m[0]){ //if it's not equal to the first value then plus count
            v++;
            for(j=1; j<i; j++){
                if(m[i]==m[j]){ //if it's equal to the one in array then subtract count
                    v--;
                }
            }
        }
    //Incorrect logic in determining unique values
    //Doesn't properly count unique value, v might ends uo inaccurate depending on the order of duplicates
    printf("checking elemts %d now %dv is %d\n", m[i], i, v);
    }
    int rv[v], rc[v];


    for(i=0; i<v; i++){ //Setting all array to 0, pretending getting strange value
        rv[i] = 0;
        rc[i] = 0;
        printf("%d\n", m[i]); //checking if m[i] isn't 0
        printf("%d\n",rc[i]); //checking if rc[i] is 0
    }

    printf("m[0]=%d\n", m[0]);  //checking if m[0] isn't 0
    printf("here\n");

    for(j=0; j<v; j++){ //Adding unrepeated value into rv array and add count into rc array
        for(i=0; i<n; i++){
            if(rc[j]==0){ //if the count at that position is 0, meaning no updated value yet
                printf("2 if rc[%d] %d=0\n", j, rc[j]);
                rv[j]=m[i]; //Updating that value into rv
                printf("2 rv[%d] %d =m[%d] %d\n", j, rv[j], i, m[i]);
                printf("2 Added %d value into rv[%d]\n", m[i], j);
                rc[j]++;
                break;
            }else if(m[i]==rv[j]){ //Check if the value has already occured in rv
                rc[j]++; //if yes then plus the count in rc
                printf("1 rv[%d] = %d\n", j, rc[j]);
                break;
            }
            //printf("1 check m[%d] = %d\n", i, m[i]); 
            //printf("1 If m[%d] %d ==rv[%d] %d\n", i, m[i], j, rv[j]);
            

            
            }
        }
        
    
    /*
    printf("1 check m[%d] = %d", i, m[i]);
            printf("1 If m[%d] %d ==rv[%d] %d\n", i, m[i], j, rv[j]);
            if(m[i]==rv[j]){
                rc[j]++;
                printf("1 rv[%d] = %d\n", j, rc[j]);
                break;
            }

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
    /*
    for(i=0; i<v; i++){ //Adding counts
        
        printf("%d %d %d %d %d\n", rc[0], rc[1], rc[2], rc[3], rc[4]);
        printf("now, rc[i] for the value %d is %d\n", rv[i], rc[i]);     
        
        for(j=0; j<n; j++){
            if(m[j]==rv[i]){
                rc[i]++;
            printf("added 1 counts into (%d)\n", rv[i]);
            }
        }
    }
    */
    for(i=0; i<v; i++){
        printf("Element %d occurs %d time(s)\n", rv[i], rc[i]);
    }

}
