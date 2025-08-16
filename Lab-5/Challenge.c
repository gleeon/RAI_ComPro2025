#include <stdio.h>

int main(){
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int m[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &m[i]);
    }

    // Arrays to store unique values and their frequencies
    int rv[n]; // rv = repeated values
    int rc[n]; // rc = repeated counts
    int uniqueCount = 0;

    for (int i = 0; i < n; i++) {
        int found = 0;

        // Check if m[i] already exists in rv
        for (int j = 0; j < uniqueCount; j++) {
            if (m[i] == rv[j]) {
                rc[j]++;
                found = 1;
                break;
            }
        }

        // If not found, add it to rv
        if (!found) {
            rv[uniqueCount] = m[i];
            rc[uniqueCount] = 1;
            uniqueCount++;
        }
    }

    // Output the result
    for (int i = 0; i < uniqueCount; i++) {
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
