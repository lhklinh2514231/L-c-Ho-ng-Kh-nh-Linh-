#include<stdio.h>
int main (){
    int arr[100];
    int n;
    scanf ("%d",&n);
    for (int i=0;i<n;i++){
        scanf ("%d",&arr[i]);
    }
    for (int i=0;i<n;i++){
        int b=0;
        for (int j=i;j<n;j++){
            b=b+arr[j];
        if (b==0){
            printf ("( ");for (int k=i;k<=j;k++){
            if (k<j){
            printf ("%d, ",arr[k]);}
            if (k==j){printf ("%d",arr[k]);}
            }
            printf (" )\n");
        }
    }
}
return 0;

}