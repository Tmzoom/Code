#include<stdio.h>
struct poly{
    int coff;
    int exp;
}p1[10],p2[10],p3[10];

int readpoly(struct poly[]);
int addpoly(struct  poly[],struct  poly[],int,int,struct  poly[]);
void disply(struct  poly[],int terms);

int  main(){
    int  t1,t2,t3;
    t1=readpoly(p1);
    printf("\nFIRST POLYNOMIAL\n");
    disply(p1,t1);

    t2=readpoly(p2);
    printf("\nSECONT POLYNOMEAL\n");
    disply(p2,t2);

    t3=addpoly(p1,p2,t1,t2,p3);
    printf("\nRESULTANT POLYNOMIAL: \n");
    disply(p3,t3);
}
int  readpoly(struct poly p[10]){
    int i,t1;
    printf("\nenter  the number of terms: \n");
    scanf("%d",&t1);
    printf("ENTER THE EXPONENT IN DECENTING ORDER\n");
    for(i=0;i<t1;i++){
        printf("enter  the coefficent%d: ",i+1);
        scanf("%d",&p[i].coff);
        printf("enter the exponent%d: ",i+1);
        scanf("%d",&p[i].exp);

    }
    return(t1);
}
void disply(struct  poly p[10],int terms){
    int k;
    for(k=0;k<terms;k++){
        printf("%d(x^%d)",p[k].coff,p[k].exp);
        if(k<terms-1){
            printf("+");
        }
    }
}
int  addpoly(struct  poly p1[10],struct  poly p2[10],int t1,int t2,struct  poly p3[10]){
    int i=0,j=0,k=0;
    while(i<t1&&j<t2){
        if(p1[i].exp==p2[j].exp){
            p3[k].coff=p1[i].coff+p2[j].coff;
            p3[k].exp=p1[i].exp;
            i++;
            j++;
            k++;
        }
        else if(p1[i].exp>p2[j].exp){
            p3[k].coff=p1[i].coff;
            p3[k].exp=p1[i].exp;
            i++;
            k++;
        }
        else{
           p3[k].coff=p2[j].coff;
            p3[k].exp=p2[j].exp;
            j++;
            k++; 
        }
    }
    while(i<t1){
        p3[k].coff=p1[i].coff;
            p3[k].exp=p1[i].exp;
            i++;
            k++;
    }
    while(j<t2){
         p3[k].coff=p2[j].coff;
            p3[k].exp=p2[j].exp;
            j++;
            k++;
    }
    return k;
}
