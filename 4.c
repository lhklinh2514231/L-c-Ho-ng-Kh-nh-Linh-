#include <stdio.h>
int main (){
    int arr[100];
    int n;
    scanf ("%d",&n);
    for (int i=0;i<n;i++){
        scanf ("%d",&arr[i]);
    }
    printf ("( ");
    for (int i=0;i<n;i++){
        if (arr[i]==0){
            printf ("%d ",arr[i]);
        }
    }
    for (int i=0;i<n;i++){
        if (arr[i]==1){
            printf ("%d ",arr[i]);
        }
    }
    printf (")");
    return 0;

    }

