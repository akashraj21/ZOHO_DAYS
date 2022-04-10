#include<stdio.h>
#include<stdlib.h>
int Ca=150,cho=80,Ms=120,Bis=30;
int main(){
    FILE *fp;
    int val;
    
    fp=fopen("Product_Detials.txt","w");
    if(fp==NULL){
        printf("Not Created\n");
    }
    else{
        printf("Created\n");
    }
   
   
    fprintf(fp," 1_CAKE: %d\n\n 2_CHOCALATE: %d\n\n 3_MILKSHAKE: %d\n\n 4_BISCUIT: %d\n\n",Ca,cho,Ms,Bis);
    printf("1_CAKE\n 2_CHOCALATE\n 3_MILKSHAKE\n 4_BISCUIT");
    scanf("%d",&val);
    switch(val){
        case 1:Cake();
        break;
        case 2:Chocalate();
        break;
        case 3:Milkshake();
        break;
        case 4:Biscuit();
        break;
        default:fprintf(fp,"ThankYou");
        
    }
    fclose((fp));
}

 void Cake(){
      FILE *fp2;
      fp2=fopen("Buying Detials.txt","w");
      int n;
      printf("Enter Quantity Of Cake\n");
      scanf("%d",&n);
      int total=n*Ca;
      fprintf(fp2,"Total Amount of Cake: %d",total);
      fclose(fp2);
    }
void Chocalate(){
    
}
void Milkshake(){
    
}
void Biscuit(){
    
}
