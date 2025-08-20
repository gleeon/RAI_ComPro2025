#include <stdio.h>
int main(){
    int n, i, j, v, f;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int m[n];
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &m[i]);
    }

    int rv[n], rc[n]; 
    v = 0;

    for ( i = 0; i < n; i++) {
        f = 0;
        for (j = 0; j < v; j++) {
            if (m[i] == rv[j]) {
                rc[j]++;
                f = 1;
                break;
            }
        }

        if (f!=1) {
            rv[v] = m[i];
            rc[v] = 1;
            v++;
        }
    }
    for (int i = 0; i < v; i++) {
        printf("Element %d occurs %d time(s)\n", rv[i], rc[i]);
    }
}

    /*
    int n, i, j, v;
    printf("Enyter number of elements:");
    scanf("%d", &n);

    int m[n];
    printf("Enter %d integers: ", n);
    for(i=0; i<n; i++){
        scanf("%d", &m[i]);
    }

        for(i=0; i<n; i++){
        if(m[i]!=m[0]){ //if it's not equal to the first value then plus count
            v++;
            for(j=1; j<i; j++){
                if(m[i]==m[j]){ //if it's equal to the one in array then subtract count
                    v--;
                }
            }
        }
        }
        
        int rv[v], rc[v], f = 0;

        for(i=0; i<n; i++){
            for(j=0; j<v; j++){
                if(m[i]==rv[j]){
                    rc[j]++;
                    f = 1;
                    break;
                }
            }
            if(f!=1){
                rv[v] = m[i];
                rc[v]++;
                v++;
            }
        }
    for(i=0; i<v; i++){
        printf("Element %d occurs %d time(s)\n", rv[i], rc[i]);
    }
    */
