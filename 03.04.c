include<stdio.h>

int main(){
  float a,b;
  printf("Geben sie die erste Zahl ein:");
  scanf("%f", &a);
  printf("Geben sie die zweite Zahl ein:");
  scanf("%f", &b);
  
  if(a>b){
    printf("Die erste Zahl ist größer");
  }
  else if(a=b){
    printf("Die Zahlen sind gleich groß");
  }
  else{
    printf("Die zweite Zahl ist größer");
  }
return 0;
}
